package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import gameGrid.GridClasses;

class PlayState extends FlxState
{
	var text:flixel.text.FlxText;
	var h:FlxSprite;
	var v:FlxSprite;
	var dots:Array<FlxSprite> = [];

	var padding:Int = 10;
	var dotRadius:Int = 4;
	var dotSpacing:Int = 20;

	var gridHeight:Int;
	var gridWidth:Int;

	var center:FlxSprite;

	var gameGrid:GridWithBorders;

	override public function create()
	{
		super.create();

		gridWidth = Std.int((FlxG.width - (2 * padding)) / (dotSpacing));
		gridHeight = Std.int((FlxG.height - (2 * padding)) / (dotSpacing));
		gameGrid = new GridWithBorders(gridWidth, gridHeight);
		for (pos in new GridIterator(gridWidth, gridHeight))
		{
			var newDot = new FlxSprite();
			newDot.makeGraphic(dotRadius, dotRadius, FlxColor.WHITE);
			newDot.x = Std.int(padding + dotSpacing / 2) + pos.x * dotSpacing;
			newDot.y = Std.int(padding + dotSpacing / 2) + pos.y * dotSpacing;
			add(newDot);
			// https://gamefromscratch.com/haxeflixel-tutorial-mouse-input/
			FlxMouseEventManager.add(newDot, function(s:FlxSprite)
			{
				trace('MouseDown ${pos.x} ${pos.y}');
			}, function(s:FlxSprite)
			{
				trace('MouseUp  ${pos.x} ${pos.y}');
			}, function(s:FlxSprite)
			{
				trace('MouseOver  ${pos.x} ${pos.y}');
			}, function(s:FlxSprite)
			{
				trace('MouseOut  ${pos.x} ${pos.y}');
			});
			dots.push(newDot);
		}

		// text = new FlxText(0, 0, 0, "Grid-test", 64);
		// text.setFormat(null, 64, FlxColor.RED);
		// text.screenCenter();
		// add(text);

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

		h.x = FlxG.mouse.x - 1;
		v.y = FlxG.mouse.y - 1;
		center.x = h.x - 1;
		center.y = v.y - 1;
		if (FlxG.mouse.justReleased)
			FlxG.camera.flash(FlxColor.fromRGB(255, 255, 255, 60), 0.33);
	}
}
