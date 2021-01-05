package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.mouse.FlxMouseEventManager;
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

	var padding:Int = 10;
	var dotRadius:Int = 4;
	var dotSpacing:Int = 20;

	var gridHeight:Int;
	var gridWidth:Int;

	var linesCanvas:FlxSprite;
	var baseLineStyle:LineStyle = {color: FlxColor.fromRGB(75, 75, 75, 255), thickness: 2};

	var center:FlxSprite;

	var gameGrid:GridWithBorders;

	override public function create()
	{
		super.create();

		linesCanvas = new FlxSprite();
		linesCanvas.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);

		gridWidth = Std.int((FlxG.width - (2 * padding)) / (dotSpacing));
		gridHeight = Std.int((FlxG.height - (2 * padding)) / (dotSpacing));
		gameGrid = new GridWithBorders(gridWidth, gridHeight);
		for (pos in new GridIterator(gridWidth, gridHeight))
		{
			var newDot = new FlxSprite();
			newDot.makeGraphic(dotRadius, dotRadius, FlxColor.WHITE);
			newDot.x = Std.int(padding + dotSpacing / 2) + pos.x * dotSpacing;
			newDot.y = Std.int(padding + dotSpacing / 2) + pos.y * dotSpacing;

			// https://gamefromscratch.com/haxeflixel-tutorial-mouse-input/
			FlxMouseEventManager.add( //
				newDot, //
				function(s:FlxSprite)
				{
					trace('MouseDown ${pos.x} ${pos.y}');
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

			var startX = Std.int(padding + dotSpacing / 2) + pos.x * dotSpacing;
			var startY = Std.int(padding + dotSpacing / 2) + pos.y * dotSpacing;
			var endXRight = Std.int(padding + dotSpacing / 2) + (pos.x + 1) * dotSpacing;
			var endYDown = Std.int(padding + dotSpacing / 2) + (pos.y + 1) * dotSpacing;

			if (pos.x < gridWidth - 1)
			{
				linesCanvas.drawLine(startX + 2, startY + 2, endXRight + 2, startY + 2, baseLineStyle);
			}
			if (pos.y < gridHeight - 1)
			{
				linesCanvas.drawLine(startX + 2, startY + 2, startX + 2, endYDown + 2, baseLineStyle);
			}
		}

		add(linesCanvas);

		for (dot in dots)
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

		// for (pos in new GridIterator(gridWidth, gridHeight))
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
