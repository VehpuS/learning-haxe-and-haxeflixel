// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_65_roundDecimal,"flixel.math.FlxMath","roundDecimal",0xaa14776b,"flixel.math.FlxMath.roundDecimal","flixel/math/FlxMath.hx",65,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_85_bound,"flixel.math.FlxMath","bound",0xac2681b6,"flixel.math.FlxMath.bound","flixel/math/FlxMath.hx",85,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_105_lerp,"flixel.math.FlxMath","lerp",0xfe2b17ff,"flixel.math.FlxMath.lerp","flixel/math/FlxMath.hx",105,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_118_inBounds,"flixel.math.FlxMath","inBounds",0x4dfc39c2,"flixel.math.FlxMath.inBounds","flixel/math/FlxMath.hx",118,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_126_isOdd,"flixel.math.FlxMath","isOdd",0xb67c8d5d,"flixel.math.FlxMath.isOdd","flixel/math/FlxMath.hx",126,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_134_isEven,"flixel.math.FlxMath","isEven",0xeff0abac,"flixel.math.FlxMath.isEven","flixel/math/FlxMath.hx",134,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_141_numericComparison,"flixel.math.FlxMath","numericComparison",0xd7f909ee,"flixel.math.FlxMath.numericComparison","flixel/math/FlxMath.hx",141,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_166_pointInCoordinates,"flixel.math.FlxMath","pointInCoordinates",0xc68dec2e,"flixel.math.FlxMath.pointInCoordinates","flixel/math/FlxMath.hx",166,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_187_pointInFlxRect,"flixel.math.FlxMath","pointInFlxRect",0x061f0269,"flixel.math.FlxMath.pointInFlxRect","flixel/math/FlxMath.hx",187,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_200_mouseInFlxRect,"flixel.math.FlxMath","mouseInFlxRect",0x130b3df4,"flixel.math.FlxMath.mouseInFlxRect","flixel/math/FlxMath.hx",200,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_227_pointInRectangle,"flixel.math.FlxMath","pointInRectangle",0x49240aa2,"flixel.math.FlxMath.pointInRectangle","flixel/math/FlxMath.hx",227,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_241_maxAdd,"flixel.math.FlxMath","maxAdd",0x4db55565,"flixel.math.FlxMath.maxAdd","flixel/math/FlxMath.hx",241,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_266_wrap,"flixel.math.FlxMath","wrap",0x057a3f52,"flixel.math.FlxMath.wrap","flixel/math/FlxMath.hx",266,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_287_remapToRange,"flixel.math.FlxMath","remapToRange",0x60fbca01,"flixel.math.FlxMath.remapToRange","flixel/math/FlxMath.hx",287,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_302_dotProduct,"flixel.math.FlxMath","dotProduct",0x8564032e,"flixel.math.FlxMath.dotProduct","flixel/math/FlxMath.hx",302,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_310_vectorLength,"flixel.math.FlxMath","vectorLength",0x2dfefb91,"flixel.math.FlxMath.vectorLength","flixel/math/FlxMath.hx",310,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_321_distanceBetween,"flixel.math.FlxMath","distanceBetween",0x58607e8b,"flixel.math.FlxMath.distanceBetween","flixel/math/FlxMath.hx",321,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_338_isDistanceWithin,"flixel.math.FlxMath","isDistanceWithin",0x44c72392,"flixel.math.FlxMath.isDistanceWithin","flixel/math/FlxMath.hx",338,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_357_distanceToPoint,"flixel.math.FlxMath","distanceToPoint",0x84c0ed98,"flixel.math.FlxMath.distanceToPoint","flixel/math/FlxMath.hx",357,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_376_isDistanceToPointWithin,"flixel.math.FlxMath","isDistanceToPointWithin",0xb54ac0d9,"flixel.math.FlxMath.isDistanceToPointWithin","flixel/math/FlxMath.hx",376,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_396_distanceToMouse,"flixel.math.FlxMath","distanceToMouse",0xca964f6d,"flixel.math.FlxMath.distanceToMouse","flixel/math/FlxMath.hx",396,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_412_isDistanceToMouseWithin,"flixel.math.FlxMath","isDistanceToMouseWithin",0xc43ab06e,"flixel.math.FlxMath.isDistanceToMouseWithin","flixel/math/FlxMath.hx",412,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_463_getDecimals,"flixel.math.FlxMath","getDecimals",0x764a48f0,"flixel.math.FlxMath.getDecimals","flixel/math/FlxMath.hx",463,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_477_equal,"flixel.math.FlxMath","equal",0x67aca12c,"flixel.math.FlxMath.equal","flixel/math/FlxMath.hx",477,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_485_signOf,"flixel.math.FlxMath","signOf",0x43f3963c,"flixel.math.FlxMath.signOf","flixel/math/FlxMath.hx",485,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_493_sameSign,"flixel.math.FlxMath","sameSign",0xc637544b,"flixel.math.FlxMath.sameSign","flixel/math/FlxMath.hx",493,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_504_fastSin,"flixel.math.FlxMath","fastSin",0xce873d54,"flixel.math.FlxMath.fastSin","flixel/math/FlxMath.hx",504,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_537_fastCos,"flixel.math.FlxMath","fastCos",0xce7b1e83,"flixel.math.FlxMath.fastCos","flixel/math/FlxMath.hx",537,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_545_sinh,"flixel.math.FlxMath","sinh",0x02ce9bd8,"flixel.math.FlxMath.sinh","flixel/math/FlxMath.hx",545,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_553_maxInt,"flixel.math.FlxMath","maxInt",0x4dbb7033,"flixel.math.FlxMath.maxInt","flixel/math/FlxMath.hx",553,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_561_minInt,"flixel.math.FlxMath","minInt",0xe253f205,"flixel.math.FlxMath.minInt","flixel/math/FlxMath.hx",561,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_569_absInt,"flixel.math.FlxMath","absInt",0x118b9f25,"flixel.math.FlxMath.absInt","flixel/math/FlxMath.hx",569,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_25_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",25,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_31_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",31,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_36_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",36,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_41_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",41,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_46_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",46,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_51_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",51,0x837802f8)
namespace flixel{
namespace math{

void FlxMath_obj::__construct() { }

Dynamic FlxMath_obj::__CreateEmpty() { return new FlxMath_obj; }

void *FlxMath_obj::_hx_vtable = 0;

Dynamic FlxMath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMath_obj > _hx_result = new FlxMath_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a539556;
}

Float FlxMath_obj::MIN_VALUE_FLOAT;

Float FlxMath_obj::MAX_VALUE_FLOAT;

int FlxMath_obj::MIN_VALUE_INT;

int FlxMath_obj::MAX_VALUE_INT;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::EPSILON;

Float FlxMath_obj::roundDecimal(Float Value,int Precision){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_65_roundDecimal)
HXLINE(  66)		Float mult = ( (Float)(1) );
HXLINE(  67)		{
HXLINE(  67)			int _g = 0;
HXDLIN(  67)			int _g1 = Precision;
HXDLIN(  67)			while((_g < _g1)){
HXLINE(  67)				_g = (_g + 1);
HXDLIN(  67)				int i = (_g - 1);
HXLINE(  69)				mult = (mult * ( (Float)(10) ));
            			}
            		}
HXLINE(  71)		return (::Math_obj::fround((Value * mult)) / mult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound(Float Value, ::Dynamic Min, ::Dynamic Max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_85_bound)
HXLINE(  86)		Float lowerBound;
HXDLIN(  86)		bool lowerBound1;
HXDLIN(  86)		if (::hx::IsNotNull( Min )) {
HXLINE(  86)			lowerBound1 = ::hx::IsLess( Value,Min );
            		}
            		else {
HXLINE(  86)			lowerBound1 = false;
            		}
HXDLIN(  86)		if (lowerBound1) {
HXLINE(  86)			lowerBound = ( (Float)(Min) );
            		}
            		else {
HXLINE(  86)			lowerBound = Value;
            		}
HXLINE(  87)		bool _hx_tmp;
HXDLIN(  87)		if (::hx::IsNotNull( Max )) {
HXLINE(  87)			_hx_tmp = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE(  87)			_hx_tmp = false;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  87)			return ( (Float)(Max) );
            		}
            		else {
HXLINE(  87)			return lowerBound;
            		}
HXDLIN(  87)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp(Float a,Float b,Float ratio){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_105_lerp)
HXDLIN( 105)		return (a + (ratio * (b - a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds(Float Value, ::Dynamic Min, ::Dynamic Max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_118_inBounds)
HXDLIN( 118)		bool _hx_tmp;
HXDLIN( 118)		if (::hx::IsNotNull( Min )) {
HXDLIN( 118)			_hx_tmp = ::hx::IsGreaterEq( Value,Min );
            		}
            		else {
HXDLIN( 118)			_hx_tmp = true;
            		}
HXDLIN( 118)		if (_hx_tmp) {
HXDLIN( 118)			if (::hx::IsNotNull( Max )) {
HXDLIN( 118)				return ::hx::IsLessEq( Value,Max );
            			}
            			else {
HXDLIN( 118)				return true;
            			}
            		}
            		else {
HXDLIN( 118)			return false;
            		}
HXDLIN( 118)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_126_isOdd)
HXDLIN( 126)		return ((::Std_obj::_hx_int(n) & 1) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_134_isEven)
HXDLIN( 134)		return ((::Std_obj::_hx_int(n) & 1) == 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_141_numericComparison)
HXLINE( 142)		if ((b > a)) {
HXLINE( 144)			return -1;
            		}
            		else {
HXLINE( 146)			if ((a > b)) {
HXLINE( 148)				return 1;
            			}
            		}
HXLINE( 150)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates(Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_166_pointInCoordinates)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if ((pointX >= rectX)) {
HXLINE( 167)			_hx_tmp = (pointX <= (rectX + rectWidth));
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 169)			bool _hx_tmp;
HXDLIN( 169)			if ((pointY >= rectY)) {
HXLINE( 169)				_hx_tmp = (pointY <= (rectY + rectHeight));
            			}
            			else {
HXLINE( 169)				_hx_tmp = false;
            			}
HXDLIN( 169)			if (_hx_tmp) {
HXLINE( 171)				return true;
            			}
            		}
HXLINE( 174)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect(Float pointX,Float pointY, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_187_pointInFlxRect)
HXDLIN( 187)		bool _hx_tmp;
HXDLIN( 187)		bool _hx_tmp1;
HXDLIN( 187)		if ((pointX >= rect->x)) {
HXDLIN( 187)			_hx_tmp1 = (pointX <= (rect->x + rect->width));
            		}
            		else {
HXDLIN( 187)			_hx_tmp1 = false;
            		}
HXDLIN( 187)		if (_hx_tmp1) {
HXDLIN( 187)			_hx_tmp = (pointY >= rect->y);
            		}
            		else {
HXDLIN( 187)			_hx_tmp = false;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXDLIN( 187)			return (pointY <= (rect->y + rect->height));
            		}
            		else {
HXDLIN( 187)			return false;
            		}
HXDLIN( 187)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect(bool useWorldCoords, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_200_mouseInFlxRect)
HXLINE( 201)		if (::hx::IsNull( rect )) {
HXLINE( 203)			return true;
            		}
HXLINE( 206)		if (useWorldCoords) {
HXLINE( 208)			return ::flixel::math::FlxMath_obj::pointInFlxRect(( (Float)(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->x) ))) ),( (Float)(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->y) ))) ),rect);
            		}
            		else {
HXLINE( 212)			return ::flixel::math::FlxMath_obj::pointInFlxRect(( (Float)(::flixel::FlxG_obj::mouse->screenX) ),( (Float)(::flixel::FlxG_obj::mouse->screenY) ),rect);
            		}
HXLINE( 206)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle(Float pointX,Float pointY, ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_227_pointInRectangle)
HXDLIN( 227)		bool _hx_tmp;
HXDLIN( 227)		bool _hx_tmp1;
HXDLIN( 227)		if ((pointX >= rect->x)) {
HXDLIN( 227)			_hx_tmp1 = (pointX <= rect->get_right());
            		}
            		else {
HXDLIN( 227)			_hx_tmp1 = false;
            		}
HXDLIN( 227)		if (_hx_tmp1) {
HXDLIN( 227)			_hx_tmp = (pointY >= rect->y);
            		}
            		else {
HXDLIN( 227)			_hx_tmp = false;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXDLIN( 227)			return (pointY <= rect->get_bottom());
            		}
            		else {
HXDLIN( 227)			return false;
            		}
HXDLIN( 227)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd(int value,int amount,int max,::hx::Null< int >  __o_min){
            		int min = __o_min.Default(0);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_241_maxAdd)
HXLINE( 242)		value = (value + amount);
HXLINE( 244)		if ((value > max)) {
HXLINE( 246)			value = max;
            		}
            		else {
HXLINE( 248)			if ((value <= min)) {
HXLINE( 250)				value = min;
            			}
            		}
HXLINE( 253)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrap(int value,int min,int max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_266_wrap)
HXLINE( 267)		int range = ((max - min) + 1);
HXLINE( 269)		if ((value < min)) {
HXLINE( 270)			value = (value + (range * ::Std_obj::_hx_int(((( (Float)((min - value)) ) / ( (Float)(range) )) + 1))));
            		}
HXLINE( 272)		return (min + ::hx::Mod((value - min),range));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrap,return )

Float FlxMath_obj::remapToRange(Float value,Float start1,Float stop1,Float start2,Float stop2){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_287_remapToRange)
HXDLIN( 287)		return (start2 + ((value - start1) * ((stop2 - start2) / (stop1 - start1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxMath_obj,remapToRange,return )

Float FlxMath_obj::dotProduct(Float ax,Float ay,Float bx,Float by){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_302_dotProduct)
HXDLIN( 302)		return ((ax * bx) + (ay * by));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_310_vectorLength)
HXDLIN( 310)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_321_distanceBetween)
HXLINE( 322)		Float dx = ((SpriteA->x + SpriteA->origin->x) - (SpriteB->x + SpriteB->origin->x));
HXLINE( 323)		Float dy = ((SpriteA->y + SpriteA->origin->y) - (SpriteB->y + SpriteB->origin->y));
HXLINE( 324)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,Float Distance,::hx::Null< bool >  __o_IncludeEqual){
            		bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_338_isDistanceWithin)
HXLINE( 339)		Float dx = ((SpriteA->x + SpriteA->origin->x) - (SpriteB->x + SpriteB->origin->x));
HXLINE( 340)		Float dy = ((SpriteA->y + SpriteA->origin->y) - (SpriteB->y + SpriteB->origin->y));
HXLINE( 342)		if (IncludeEqual) {
HXLINE( 343)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 345)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 342)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_357_distanceToPoint)
HXLINE( 358)		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);
HXLINE( 359)		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);
HXLINE( 360)		if (Target->_weak) {
HXLINE( 360)			Target->put();
            		}
HXLINE( 361)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target,Float Distance,::hx::Null< bool >  __o_IncludeEqual){
            		bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_376_isDistanceToPointWithin)
HXLINE( 377)		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);
HXLINE( 378)		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);
HXLINE( 380)		if (Target->_weak) {
HXLINE( 380)			Target->put();
            		}
HXLINE( 382)		if (IncludeEqual) {
HXLINE( 383)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 385)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 382)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_396_distanceToMouse)
HXLINE( 397)		Float dx = ((Sprite->x + Sprite->origin->x) - ( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXLINE( 398)		Float dy = ((Sprite->y + Sprite->origin->y) - ( (Float)(::flixel::FlxG_obj::mouse->screenY) ));
HXLINE( 399)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,::hx::Null< bool >  __o_IncludeEqual){
            		bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_412_isDistanceToMouseWithin)
HXLINE( 413)		Float dx = ((Sprite->x + Sprite->origin->x) - ( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXLINE( 414)		Float dy = ((Sprite->y + Sprite->origin->y) - ( (Float)(::flixel::FlxG_obj::mouse->screenY) ));
HXLINE( 416)		if (IncludeEqual) {
HXLINE( 417)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 419)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 416)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::getDecimals(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_463_getDecimals)
HXLINE( 464)		::Array< ::String > helperArray = ::Std_obj::string(n).split(HX_(".",2e,00,00,00));
HXLINE( 465)		int decimals = 0;
HXLINE( 467)		if ((helperArray->length > 1)) {
HXLINE( 469)			decimals = helperArray->__get(1).length;
            		}
HXLINE( 472)		return decimals;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal(Float aValueA,Float aValueB,::hx::Null< Float >  __o_aDiff){
            		Float aDiff = __o_aDiff.Default(((Float)0.0000001));
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_477_equal)
HXDLIN( 477)		return (::Math_obj::abs((aValueA - aValueB)) <= aDiff);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_485_signOf)
HXDLIN( 485)		if ((n < 0)) {
HXDLIN( 485)			return -1;
            		}
            		else {
HXDLIN( 485)			return 1;
            		}
HXDLIN( 485)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_493_sameSign)
HXDLIN( 493)		int _hx_tmp;
HXDLIN( 493)		if ((a < 0)) {
HXDLIN( 493)			_hx_tmp = -1;
            		}
            		else {
HXDLIN( 493)			_hx_tmp = 1;
            		}
HXDLIN( 493)		int _hx_tmp1;
HXDLIN( 493)		if ((b < 0)) {
HXDLIN( 493)			_hx_tmp1 = -1;
            		}
            		else {
HXDLIN( 493)			_hx_tmp1 = 1;
            		}
HXDLIN( 493)		return (_hx_tmp == _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )

Float FlxMath_obj::fastSin(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_504_fastSin)
HXLINE( 505)		n = (n * ((Float)0.3183098862));
HXLINE( 508)		if ((n > 1)) {
HXLINE( 510)			n = (n - ( (Float)(((::Math_obj::ceil(n) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 512)			if ((n < -1)) {
HXLINE( 514)				n = (n + ((::Math_obj::ceil(-(n)) >> 1) << 1));
            			}
            		}
HXLINE( 518)		if ((n > 0)) {
HXLINE( 520)			return (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 524)			return (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            		}
HXLINE( 518)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastSin,return )

Float FlxMath_obj::fastCos(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_537_fastCos)
HXDLIN( 537)		Float n1 = (n + ((Float)1.570796327));
HXDLIN( 537)		n1 = (n1 * ((Float)0.3183098862));
HXDLIN( 537)		if ((n1 > 1)) {
HXDLIN( 537)			n1 = (n1 - ( (Float)(((::Math_obj::ceil(n1) >> 1) << 1)) ));
            		}
            		else {
HXDLIN( 537)			if ((n1 < -1)) {
HXDLIN( 537)				n1 = (n1 + ((::Math_obj::ceil(-(n1)) >> 1) << 1));
            			}
            		}
HXDLIN( 537)		if ((n1 > 0)) {
HXDLIN( 537)			return (n1 * (((Float)3.1) + (n1 * (((Float)0.5) + (n1 * (((Float)-7.2) + (n1 * ((Float)3.6))))))));
            		}
            		else {
HXDLIN( 537)			return (n1 * (((Float)3.1) - (n1 * (((Float)0.5) + (n1 * (((Float)7.2) + (n1 * ((Float)3.6))))))));
            		}
HXDLIN( 537)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastCos,return )

Float FlxMath_obj::sinh(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_545_sinh)
HXDLIN( 545)		return ((::Math_obj::exp(n) - ::Math_obj::exp(-(n))) / ( (Float)(2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,sinh,return )

int FlxMath_obj::maxInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_553_maxInt)
HXDLIN( 553)		if ((a > b)) {
HXDLIN( 553)			return a;
            		}
            		else {
HXDLIN( 553)			return b;
            		}
HXDLIN( 553)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,maxInt,return )

int FlxMath_obj::minInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_561_minInt)
HXDLIN( 561)		if ((a > b)) {
HXDLIN( 561)			return b;
            		}
            		else {
HXDLIN( 561)			return a;
            		}
HXDLIN( 561)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,minInt,return )

int FlxMath_obj::absInt(int n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_569_absInt)
HXDLIN( 569)		if ((n > 0)) {
HXDLIN( 569)			return n;
            		}
            		else {
HXDLIN( 569)			return -(n);
            		}
HXDLIN( 569)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,absInt,return )


FlxMath_obj::FlxMath_obj()
{
}

bool FlxMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"wrap") ) { outValue = wrap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sinh") ) { outValue = sinh_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isOdd") ) { outValue = isOdd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equal") ) { outValue = equal_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { outValue = isEven_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { outValue = maxAdd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"signOf") ) { outValue = signOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxInt") ) { outValue = maxInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minInt") ) { outValue = minInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"absInt") ) { outValue = absInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastSin") ) { outValue = fastSin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fastCos") ) { outValue = fastCos_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { outValue = inBounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sameSign") ) { outValue = sameSign_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDecimals") ) { outValue = getDecimals_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { outValue = roundDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remapToRange") ) { outValue = remapToRange_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { outValue = vectorLength_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { outValue = pointInFlxRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { outValue = mouseInFlxRect_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { outValue = distanceBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { outValue = distanceToPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { outValue = distanceToMouse_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { outValue = pointInRectangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { outValue = isDistanceWithin_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { outValue = numericComparison_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { outValue = pointInCoordinates_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { outValue = isDistanceToPointWithin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { outValue = isDistanceToMouseWithin_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxMath_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxMath_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxMath_obj::MIN_VALUE_FLOAT,HX_("MIN_VALUE_FLOAT",41,8d,8c,66)},
	{::hx::fsFloat,(void *) &FlxMath_obj::MAX_VALUE_FLOAT,HX_("MAX_VALUE_FLOAT",53,d9,a6,0a)},
	{::hx::fsInt,(void *) &FlxMath_obj::MIN_VALUE_INT,HX_("MIN_VALUE_INT",54,4d,29,0b)},
	{::hx::fsInt,(void *) &FlxMath_obj::MAX_VALUE_INT,HX_("MAX_VALUE_INT",e6,10,de,05)},
	{::hx::fsFloat,(void *) &FlxMath_obj::SQUARE_ROOT_OF_TWO,HX_("SQUARE_ROOT_OF_TWO",df,00,e4,f7)},
	{::hx::fsFloat,(void *) &FlxMath_obj::EPSILON,HX_("EPSILON",4a,89,92,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxMath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_MARK_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#endif

::hx::Class FlxMath_obj::__mClass;

static ::String FlxMath_obj_sStaticFields[] = {
	HX_("MIN_VALUE_FLOAT",41,8d,8c,66),
	HX_("MAX_VALUE_FLOAT",53,d9,a6,0a),
	HX_("MIN_VALUE_INT",54,4d,29,0b),
	HX_("MAX_VALUE_INT",e6,10,de,05),
	HX_("SQUARE_ROOT_OF_TWO",df,00,e4,f7),
	HX_("EPSILON",4a,89,92,2c),
	HX_("roundDecimal",e3,a9,4c,b9),
	HX_("bound",3e,b0,fc,b6),
	HX_("lerp",77,12,b0,47),
	HX_("inBounds",3a,d0,9b,ee),
	HX_("isOdd",e5,bb,52,c1),
	HX_("isEven",24,34,83,60),
	HX_("numericComparison",76,e4,9e,70),
	HX_("pointInCoordinates",a6,48,07,bf),
	HX_("pointInFlxRect",e1,c2,a2,79),
	HX_("mouseInFlxRect",6c,fe,8e,86),
	HX_("pointInRectangle",1a,d9,72,75),
	HX_("maxAdd",dd,dd,47,be),
	HX_("wrap",ca,39,ff,4e),
	HX_("remapToRange",79,fc,33,70),
	HX_("dotProduct",a6,27,f0,3d),
	HX_("vectorLength",09,2e,37,3d),
	HX_("distanceBetween",13,27,25,f8),
	HX_("isDistanceWithin",0a,f2,15,71),
	HX_("distanceToPoint",20,96,85,24),
	HX_("isDistanceToPointWithin",61,31,37,36),
	HX_("distanceToMouse",f5,f7,5a,6a),
	HX_("isDistanceToMouseWithin",f6,20,27,45),
	HX_("getDecimals",78,0d,5e,38),
	HX_("equal",b4,cf,82,72),
	HX_("signOf",b4,1e,86,b4),
	HX_("sameSign",c3,ea,d6,66),
	HX_("fastSin",dc,1d,2c,de),
	HX_("fastCos",0b,ff,1f,de),
	HX_("sinh",50,96,53,4c),
	HX_("maxInt",ab,f8,4d,be),
	HX_("minInt",7d,7a,e6,52),
	HX_("absInt",9d,27,1e,82),
	::String(null())
};

void FlxMath_obj::__register()
{
	FlxMath_obj _hx_dummy;
	FlxMath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxMath",e6,47,47,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMath_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxMath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxMath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxMath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_25_boot)
HXDLIN(  25)		MIN_VALUE_FLOAT = ((Float)5e-324);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_31_boot)
HXDLIN(  31)		MAX_VALUE_FLOAT = ((Float)1.79e+308);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_36_boot)
HXDLIN(  36)		MIN_VALUE_INT = (int)-2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_41_boot)
HXDLIN(  41)		MAX_VALUE_INT = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_46_boot)
HXDLIN(  46)		SQUARE_ROOT_OF_TWO = ((Float)1.41421356237);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_51_boot)
HXDLIN(  51)		EPSILON = ((Float)0.0000001);
            	}
}

} // end namespace flixel
} // end namespace math
