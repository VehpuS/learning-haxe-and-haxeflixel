package gameGrid;

import haxe.ds.Option;
import haxe.ds.Vector;

// Based on https://code.haxe.org/category/data-structures/grid-iterator.html

class GridSquareIterator
{
	var gridWidth:Int = 0;

	var gridHeight:Int = 0;
	var i:Int = 0;

	public inline function new(gridWidth:Int, gridHeight:Int)
	{
		this.gridWidth = gridWidth;
		this.gridHeight = gridHeight;
	}

	public inline function hasNext()
	{
		return i < gridWidth * gridHeight;
	}

	public inline function next()
	{
		return new GridSquareIteratorObject(i++, gridWidth);
	}

	public inline function get_x()
	{
		return i % gridWidth;
	}

	public inline function get_y()
	{
		// Should behave like floor if I understand the docs correctly
		// https://haxe.org/manual/std-math-integer-math.html
		return Std.int(i / gridWidth);
	}
}

class GridSquareIteratorObject
{
	public var index(default, null):Int;
	public var x(default, null):Int;
	public var y(default, null):Int;

	public inline function new(index:Int, gridWidth:Int)
	{
		this.index = index;
		this.x = index % gridWidth;
		this.y = Std.int(index / gridWidth);
	}
}

class GridCornerIterator
{
	var gridWidth:Int = 0;

	var gridHeight:Int = 0;
	var i:Int = 0;

	public inline function new(gridWidth:Int, gridHeight:Int)
	{
		this.gridWidth = gridWidth;
		this.gridHeight = gridHeight;
	}

	public inline function hasNext()
	{
		return i < (gridWidth + 1) * (gridHeight + 1);
	}

	public inline function next()
	{
		return new GridCornerIteratorObject(i++, gridWidth);
	}

	public inline function get_x()
	{
		return i % (gridWidth + 1);
	}

	public inline function get_y()
	{
		// Should behave like floor if I understand the docs correctly
		// https://haxe.org/manual/std-math-integer-math.html
		return Std.int(i / (gridWidth + 1));
	}
}

class GridCornerIteratorObject
{
	public var index(default, null):Int;
	public var x(default, null):Int;
	public var y(default, null):Int;

	public inline function new(index:Int, gridWidth:Int)
	{
		this.index = index;
		this.x = index % (gridWidth + 1);
		this.y = Std.int(index / (gridWidth + 1));
	}
}

enum GridWithBordersToggleType
{
	topLeftCorner;
	topBorder;
	leftBorder;
}

class GridWithBorders
{
	var gridWidth:Int = 0;
	var gridHeight:Int = 0;

	// var gridSquares:Array<Vector<Int>> = [];
	// For each square (and one more column / row on the right / bottom)
	// maintain a bit array marking if the border is selected
	var gridTopLeftCornerSelected:Int = 0;
	var gridTopBorderSet:Int = 0;
	var gridLeftBorderSet:Int = 0;

	public inline function new(gridWidth:Int, gridHeight:Int)
	{
		this.gridWidth = gridWidth;
		this.gridHeight = gridHeight;
	}

	public function setGridDataByCoords(x:Int, y:Int, type:GridWithBordersToggleType):Bool
	{
		var borderIdx = x + y * (gridWidth + 1);
		if ((borderIdx > ((gridWidth + 1) * (gridHeight + 1))) || (borderIdx < 0))
		{
			return null;
		}
		var newMask = 1 >> borderIdx;
		switch (type)
		{
			case GridWithBordersToggleType.topLeftCorner:
				gridTopLeftCornerSelected |= newMask;
			case GridWithBordersToggleType.topBorder:
				gridTopBorderSet |= newMask;
			case GridWithBordersToggleType.leftBorder:
				gridLeftBorderSet |= newMask;
		}

		return true;
	}

	// left:Int
	// top:Int
	// right:Int
	// bottom:Int
	public function getSquareBordersByCoords(x:Int, y:Int):Option<Vector<Bool>>
	{
		if (x < 0 || y < 0 || x * y >= (gridWidth * gridHeight))
		{
			return None;
		}

		var squareData = new Vector<Bool>(4);
		var borderIdx = x + y * (gridWidth + 1);
		if ((borderIdx < ((gridWidth + 1) * (gridHeight + 1))) && (borderIdx >= 0))
		{
			var left = (gridLeftBorderSet & (1 << borderIdx)) != 0;
			squareData[0] = left;
			var top = (gridTopBorderSet & (1 << borderIdx)) != 0;
			squareData[1] = top;
		}

		var borderRightIdx = (x + 1) + y * (gridWidth + 1);
		if ((borderRightIdx < ((gridWidth + 1) * (gridHeight + 1))) && (borderRightIdx >= 0))
		{
			var right = (gridLeftBorderSet & (1 << (borderRightIdx + 1))) != 0;
			squareData[2] = right;
		}

		var borderBottomIdx = x + (y + 1) * (gridWidth + 1);
		if ((borderBottomIdx < ((gridWidth + 1) * (gridHeight + 1))) && (borderBottomIdx >= 0))
		{
			var bottom = (gridTopBorderSet & (1 << (borderBottomIdx + 1))) != 0;
			squareData[3] = bottom;
		}

		var res = Some(squareData);
		return res;
	}

	public function isSquareClosedByCoords(x:Int, y:Int):Bool
	{
		var data = getSquareBordersByCoords(x, y);
		switch (data)
		{
			case None:
				return false;
			case Some(sqr):
				return sqr[0] && sqr[1] && sqr[2] && sqr[3];
		}
	}

	public function getSquareBordersByIndex(index:Int):Option<Vector<Bool>>
	{
		if (index > gridWidth * gridHeight || index < 0)
		{
			return null;
		}
		var x = index % gridWidth;
		var y = Std.int(index / gridWidth);
		return getSquareBordersByCoords(x, y);
	}

	public function isSquareClosedByIndex(index:Int):Bool
	{
		var data = getSquareBordersByIndex(index);
		switch (data)
		{
			case None:
				return false;
			case Some(sqr):
				return sqr[0] && sqr[1] && sqr[2] && sqr[3];
		}
	}

	public function isTopLeftCornerByCoords(x:Int, y:Int):Bool
	{
		if (x < 0 || y < 0 || x * y >= (gridWidth * gridHeight))
		{
			return false;
		}

		var borderIdx = x + y * (gridWidth + 1);
		var isValidIdx = (borderIdx < ((gridWidth + 1) * (gridHeight + 1))) && (borderIdx >= 0);
		return isValidIdx && ((borderIdx & gridTopLeftCornerSelected) != 1);
	}
}
