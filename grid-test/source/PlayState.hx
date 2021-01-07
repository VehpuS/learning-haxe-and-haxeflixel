package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import gameGrid.GridClasses;
import haxe.ds.Vector;

using flixel.util.FlxSpriteUtil;

class PlayState extends FlxState
{
	// var selectionStateMachine:Map<String, Array<String>> = ["None" => ["One"], "One" => ["None"]];
	// var currentState = "None";
	// var currentCenter:Option<Vector<Int>> = None;
	var h:FlxSprite;
	var v:FlxSprite;
	var dots:Array<FlxSprite> = [];
	var eventDots:Array<FlxSprite> = [];

	var padding:Int = 10;
	var dotRadius:Int = 4;
	var dotSpacing:Int = 20;

	var gridHeight:Int;
	var gridWidth:Int;

	var linesCanvas:FlxSprite;
	var baseLineStyle:LineStyle = {color: FlxColor.fromRGB(50, 50, 50, 255), thickness: 2};
	var selectedLineStyle:LineStyle = {color: FlxColor.fromRGB(222, 222, 222, 255), thickness: 2};

	var center:FlxSprite;

	var gameGrid:GridWithBorders;

	var currentlySelectedPoint:FlxPoint;
	var selectedDot:FlxSprite;

	override public function create()
	{
		super.create();

		currentlySelectedPoint = new FlxPoint(-3, -3);
		selectedDot = new FlxSprite();
		selectedDot.makeGraphic(dotRadius * 3, dotRadius * 3, FlxColor.fromRGB(222, 222, 0, 160));

		linesCanvas = new FlxSprite();
		linesCanvas.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);

		gridWidth = Std.int((FlxG.width - (2 * padding)) / (dotSpacing));
		gridHeight = Std.int((FlxG.height - (2 * padding)) / (dotSpacing));
		gameGrid = new GridWithBorders(gridWidth, gridHeight);
		for (pos in new GridCornerIterator(gridWidth, gridHeight))
		{
			var coordX = Std.int(padding + dotSpacing / 2) + pos.x * dotSpacing;
			var coordY = Std.int(padding + dotSpacing / 2) + pos.y * dotSpacing;
			var endXRight = Std.int(padding + dotSpacing / 2) + (pos.x + 1) * dotSpacing;
			var endYDown = Std.int(padding + dotSpacing / 2) + (pos.y + 1) * dotSpacing;
			var endXLeft = Std.int(padding + dotSpacing / 2) + (pos.x - 1) * dotSpacing;
			var endYTop = Std.int(padding + dotSpacing / 2) + (pos.y - 1) * dotSpacing;

			var newDot = new FlxSprite();
			newDot.makeGraphic(dotRadius, dotRadius, FlxColor.WHITE);
			newDot.x = coordX;
			newDot.y = coordY;

			var newEventDot = new FlxSprite();
			newEventDot.makeGraphic(3 * dotRadius, 3 * dotRadius, FlxColor.fromRGB(0, 0, 0, 1));
			newEventDot.x = coordX - dotRadius;
			newEventDot.y = coordY - dotRadius;

			// https://gamefromscratch.com/haxeflixel-tutorial-mouse-input/
			FlxMouseEventManager.add( //
				newEventDot, //
				function(s:FlxSprite)
				{
					if (currentlySelectedPoint.x < -2 || currentlySelectedPoint.y < -2)
					{
						trace('MouseDown ${pos.x} ${pos.y} - not on screen');
						selectedDot.x = coordX - dotRadius;
						selectedDot.y = coordY - dotRadius;
						currentlySelectedPoint.x = pos.x;
						currentlySelectedPoint.y = pos.y;
						gameGrid.setGridDataByCoords(pos.x, pos.y, GridWithBordersToggleType.topLeftCorner);
						add(selectedDot);
					}
					else
					{
						trace('MouseDown ${pos.x} ${pos.y} - on screen ${currentlySelectedPoint.x} ${currentlySelectedPoint.y}');
						remove(selectedDot);
						if (currentlySelectedPoint.x == pos.x && currentlySelectedPoint.y == pos.y + 1)
						{
							gameGrid.setGridDataByCoords(pos.x, pos.y + 1, GridWithBordersToggleType.leftBorder);
							linesCanvas.drawLine(coordX + 2, coordY + 2, coordX + 2, endYDown + 2, selectedLineStyle);
						}
						else if (currentlySelectedPoint.x == pos.x && currentlySelectedPoint.y == pos.y - 1)
						{
							gameGrid.setGridDataByCoords(pos.x, pos.y, GridWithBordersToggleType.leftBorder);
							linesCanvas.drawLine(coordX + 2, coordY + 2, coordX + 2, endYTop + 2, selectedLineStyle);
						}
						else if (currentlySelectedPoint.x == pos.x + 1 && currentlySelectedPoint.y == pos.y)
						{
							gameGrid.setGridDataByCoords(pos.x, pos.y, GridWithBordersToggleType.topBorder);
							linesCanvas.drawLine(coordX + 2, coordY + 2, endXRight + 2, coordY + 2, selectedLineStyle);
						}
						else if (currentlySelectedPoint.x == pos.x - 1 && currentlySelectedPoint.y == pos.y)
						{
							gameGrid.setGridDataByCoords(pos.x - 1, pos.y, GridWithBordersToggleType.topBorder);
							linesCanvas.drawLine(coordX + 2, coordY + 2, endXLeft + 2, coordY + 2, selectedLineStyle);
						}
						currentlySelectedPoint.x = -3;
						currentlySelectedPoint.y = -3;
						add(linesCanvas);
					}
				}, //
				function(s:FlxSprite)
				{
					trace('MouseUp  ${pos.x} ${pos.y}');
				}, //
				function(s:FlxSprite)
				{
					trace('MouseOver  ${pos.x} ${pos.y}');
				}, //
				function(s:FlxSprite)
				{
					trace('MouseOut  ${pos.x} ${pos.y}');
				});
			dots.push(newDot);
			eventDots.push(newEventDot);

			if (pos.x < gridWidth - 1)
			{
				linesCanvas.drawLine(coordX + 2, coordY + 2, endXRight + 2, coordY + 2, baseLineStyle);
			}
			if (pos.y < gridHeight - 1)
			{
				linesCanvas.drawLine(coordX + 2, coordY + 2, coordX + 2, endYDown + 2, baseLineStyle);
			}
		}

		add(linesCanvas);
		for (dot in dots)
		{
			add(dot);
		}
		for (dot in eventDots)
		{
			add(dot);
		}

		h = new FlxSprite();
		h.makeGraphic(3, FlxG.height, FlxColor.BLUE);
		add(h);

		v = new FlxSprite();
		v.makeGraphic(FlxG.width, 3, FlxColor.BLUE);
		add(v);

		center = new FlxSprite();
		center.makeGraphic(5, 5, FlxColor.YELLOW);
		add(center);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		// linesCanvas.fill(FlxColor.TRANSPARENT);

		// for (pos in new GridCornerIterator(gridWidth, gridHeight))
		// {
		// 	var startX = Std.int(padding + dotSpacing / 2) + pos.x * dotSpacing;
		// 	var startY = Std.int(padding + dotSpacing / 2) + pos.y * dotSpacing;
		// 	var endXRight = Std.int(padding + dotSpacing / 2) + (pos.x + 1) * dotSpacing;
		// 	var endYDown = Std.int(padding + dotSpacing / 2) + (pos.y + 1) * dotSpacing;

		// 	if (pos.x < gridWidth - 1)
		// 	{
		// 		linesCanvas.drawLine(startX + 2, startY + 2, endXRight + 2, startY + 2, baseLineStyle);
		// 	}
		// 	if (pos.y < gridHeight - 1)
		// 	{
		// 		linesCanvas.drawLine(startX + 2, startY + 2, startX + 2, endYDown + 2, baseLineStyle);
		// 	}
		// }

		h.x = FlxG.mouse.x - 1;
		v.y = FlxG.mouse.y - 1;
		center.x = h.x - 1;
		center.y = v.y - 1;
		if (FlxG.mouse.justReleased)
			FlxG.camera.flash(FlxColor.fromRGB(255, 255, 255, 60), 0.33);
	}
}
