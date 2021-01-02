// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82e72dbfef9da50a_44_new,"openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",44,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_56_concat,"openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",56,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_70_toString,"openfl.geom.ColorTransform","toString",0xe65269fd,"openfl.geom.ColorTransform.toString","openfl/geom/ColorTransform.hx",70,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_76___clone,"openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",76,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_80___copyFrom,"openfl.geom.ColorTransform","__copyFrom",0x0c92ce70,"openfl.geom.ColorTransform.__copyFrom","openfl/geom/ColorTransform.hx",80,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_93___combine,"openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",93,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_106___identity,"openfl.geom.ColorTransform","__identity",0xfd6107ef,"openfl.geom.ColorTransform.__identity","openfl/geom/ColorTransform.hx",106,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_118___invert,"openfl.geom.ColorTransform","__invert",0xf5ebeb87,"openfl.geom.ColorTransform.__invert","openfl/geom/ColorTransform.hx",118,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_131___equals,"openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",131,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_144___isDefault,"openfl.geom.ColorTransform","__isDefault",0x071aee26,"openfl.geom.ColorTransform.__isDefault","openfl/geom/ColorTransform.hx",144,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_162___setArrays,"openfl.geom.ColorTransform","__setArrays",0x7ef0862b,"openfl.geom.ColorTransform.__setArrays","openfl/geom/ColorTransform.hx",162,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_176_get_color,"openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",176,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_180_set_color,"openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",180,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_194___toLimeColorMatrix,"openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",194,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_19_boot,"openfl.geom.ColorTransform","boot",0xdfe1e103,"openfl.geom.ColorTransform.boot","openfl/geom/ColorTransform.hx",19,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_20_boot,"openfl.geom.ColorTransform","boot",0xdfe1e103,"openfl.geom.ColorTransform.boot","openfl/geom/ColorTransform.hx",20,0x850de941)
namespace openfl{
namespace geom{

void ColorTransform_obj::__construct(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset){
            		Float redMultiplier = __o_redMultiplier.Default(1);
            		Float greenMultiplier = __o_greenMultiplier.Default(1);
            		Float blueMultiplier = __o_blueMultiplier.Default(1);
            		Float alphaMultiplier = __o_alphaMultiplier.Default(1);
            		Float redOffset = __o_redOffset.Default(0);
            		Float greenOffset = __o_greenOffset.Default(0);
            		Float blueOffset = __o_blueOffset.Default(0);
            		Float alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_44_new)
HXLINE(  45)		this->redMultiplier = redMultiplier;
HXLINE(  46)		this->greenMultiplier = greenMultiplier;
HXLINE(  47)		this->blueMultiplier = blueMultiplier;
HXLINE(  48)		this->alphaMultiplier = alphaMultiplier;
HXLINE(  49)		this->redOffset = redOffset;
HXLINE(  50)		this->greenOffset = greenOffset;
HXLINE(  51)		this->blueOffset = blueOffset;
HXLINE(  52)		this->alphaOffset = alphaOffset;
            	}

Dynamic ColorTransform_obj::__CreateEmpty() { return new ColorTransform_obj; }

void *ColorTransform_obj::_hx_vtable = 0;

Dynamic ColorTransform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorTransform_obj > _hx_result = new ColorTransform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool ColorTransform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ba99a35;
}

void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_56_concat)
HXLINE(  57)		this->redOffset = ((second->redOffset * this->redMultiplier) + this->redOffset);
HXLINE(  58)		this->greenOffset = ((second->greenOffset * this->greenMultiplier) + this->greenOffset);
HXLINE(  59)		this->blueOffset = ((second->blueOffset * this->blueMultiplier) + this->blueOffset);
HXLINE(  60)		this->alphaOffset = ((second->alphaOffset * this->alphaMultiplier) + this->alphaOffset);
HXLINE(  62)		 ::openfl::geom::ColorTransform _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  62)		_hx_tmp->redMultiplier = (_hx_tmp->redMultiplier * second->redMultiplier);
HXLINE(  63)		 ::openfl::geom::ColorTransform _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  63)		_hx_tmp1->greenMultiplier = (_hx_tmp1->greenMultiplier * second->greenMultiplier);
HXLINE(  64)		 ::openfl::geom::ColorTransform _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  64)		_hx_tmp2->blueMultiplier = (_hx_tmp2->blueMultiplier * second->blueMultiplier);
HXLINE(  65)		 ::openfl::geom::ColorTransform _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  65)		_hx_tmp3->alphaMultiplier = (_hx_tmp3->alphaMultiplier * second->alphaMultiplier);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::String ColorTransform_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_70_toString)
HXDLIN(  70)		return ((((((((((((((((HX_("(redMultiplier=",f3,ad,1c,05) + this->redMultiplier) + HX_(", greenMultiplier=",0d,c2,8d,70)) + this->greenMultiplier) + HX_(", blueMultiplier=",2e,6d,c3,3b)) + this->blueMultiplier) + HX_(", alphaMultiplier=",52,89,82,1f)) + this->alphaMultiplier) + HX_(", redOffset=",6d,d3,86,3f)) + this->redOffset) + HX_(", greenOffset=",3b,d5,ed,53)) + this->greenOffset) + HX_(", blueOffset=",dc,1b,85,47)) + this->blueOffset) + HX_(", alphaOffset=",00,56,b2,98)) + this->alphaOffset) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,toString,return )

 ::openfl::geom::ColorTransform ColorTransform_obj::_hx___clone(){
            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_76___clone)
HXDLIN(  76)		return  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,this->redMultiplier,this->greenMultiplier,this->blueMultiplier,this->alphaMultiplier,this->redOffset,this->greenOffset,this->blueOffset,this->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___clone,return )

void ColorTransform_obj::_hx___copyFrom( ::openfl::geom::ColorTransform ct){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_80___copyFrom)
HXLINE(  81)		this->redMultiplier = ct->redMultiplier;
HXLINE(  82)		this->greenMultiplier = ct->greenMultiplier;
HXLINE(  83)		this->blueMultiplier = ct->blueMultiplier;
HXLINE(  84)		this->alphaMultiplier = ct->alphaMultiplier;
HXLINE(  86)		this->redOffset = ct->redOffset;
HXLINE(  87)		this->greenOffset = ct->greenOffset;
HXLINE(  88)		this->blueOffset = ct->blueOffset;
HXLINE(  89)		this->alphaOffset = ct->alphaOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___copyFrom,(void))

void ColorTransform_obj::_hx___combine( ::openfl::geom::ColorTransform ct){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_93___combine)
HXLINE(  94)		 ::openfl::geom::ColorTransform _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  94)		_hx_tmp->redMultiplier = (_hx_tmp->redMultiplier * ct->redMultiplier);
HXLINE(  95)		 ::openfl::geom::ColorTransform _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)		_hx_tmp1->greenMultiplier = (_hx_tmp1->greenMultiplier * ct->greenMultiplier);
HXLINE(  96)		 ::openfl::geom::ColorTransform _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  96)		_hx_tmp2->blueMultiplier = (_hx_tmp2->blueMultiplier * ct->blueMultiplier);
HXLINE(  97)		 ::openfl::geom::ColorTransform _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  97)		_hx_tmp3->alphaMultiplier = (_hx_tmp3->alphaMultiplier * ct->alphaMultiplier);
HXLINE(  99)		 ::openfl::geom::ColorTransform _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  99)		_hx_tmp4->redOffset = (_hx_tmp4->redOffset + ct->redOffset);
HXLINE( 100)		 ::openfl::geom::ColorTransform _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 100)		_hx_tmp5->greenOffset = (_hx_tmp5->greenOffset + ct->greenOffset);
HXLINE( 101)		 ::openfl::geom::ColorTransform _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)		_hx_tmp6->blueOffset = (_hx_tmp6->blueOffset + ct->blueOffset);
HXLINE( 102)		 ::openfl::geom::ColorTransform _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 102)		_hx_tmp7->alphaOffset = (_hx_tmp7->alphaOffset + ct->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___combine,(void))

void ColorTransform_obj::_hx___identity(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_106___identity)
HXLINE( 107)		this->redMultiplier = ( (Float)(1) );
HXLINE( 108)		this->greenMultiplier = ( (Float)(1) );
HXLINE( 109)		this->blueMultiplier = ( (Float)(1) );
HXLINE( 110)		this->alphaMultiplier = ( (Float)(1) );
HXLINE( 111)		this->redOffset = ( (Float)(0) );
HXLINE( 112)		this->greenOffset = ( (Float)(0) );
HXLINE( 113)		this->blueOffset = ( (Float)(0) );
HXLINE( 114)		this->alphaOffset = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___identity,(void))

void ColorTransform_obj::_hx___invert(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_118___invert)
HXLINE( 119)		Float _hx_tmp;
HXDLIN( 119)		if ((this->redMultiplier != 0)) {
HXLINE( 119)			_hx_tmp = (( (Float)(1) ) / this->redMultiplier);
            		}
            		else {
HXLINE( 119)			_hx_tmp = ( (Float)(1) );
            		}
HXDLIN( 119)		this->redMultiplier = _hx_tmp;
HXLINE( 120)		Float _hx_tmp1;
HXDLIN( 120)		if ((this->greenMultiplier != 0)) {
HXLINE( 120)			_hx_tmp1 = (( (Float)(1) ) / this->greenMultiplier);
            		}
            		else {
HXLINE( 120)			_hx_tmp1 = ( (Float)(1) );
            		}
HXDLIN( 120)		this->greenMultiplier = _hx_tmp1;
HXLINE( 121)		Float _hx_tmp2;
HXDLIN( 121)		if ((this->blueMultiplier != 0)) {
HXLINE( 121)			_hx_tmp2 = (( (Float)(1) ) / this->blueMultiplier);
            		}
            		else {
HXLINE( 121)			_hx_tmp2 = ( (Float)(1) );
            		}
HXDLIN( 121)		this->blueMultiplier = _hx_tmp2;
HXLINE( 122)		Float _hx_tmp3;
HXDLIN( 122)		if ((this->alphaMultiplier != 0)) {
HXLINE( 122)			_hx_tmp3 = (( (Float)(1) ) / this->alphaMultiplier);
            		}
            		else {
HXLINE( 122)			_hx_tmp3 = ( (Float)(1) );
            		}
HXDLIN( 122)		this->alphaMultiplier = _hx_tmp3;
HXLINE( 123)		this->redOffset = -(this->redOffset);
HXLINE( 124)		this->greenOffset = -(this->greenOffset);
HXLINE( 125)		this->blueOffset = -(this->blueOffset);
HXLINE( 126)		this->alphaOffset = -(this->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___invert,(void))

bool ColorTransform_obj::_hx___equals( ::openfl::geom::ColorTransform ct,bool ignoreAlphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_131___equals)
HXDLIN( 131)		bool _hx_tmp;
HXDLIN( 131)		bool _hx_tmp1;
HXDLIN( 131)		bool _hx_tmp2;
HXDLIN( 131)		bool _hx_tmp3;
HXDLIN( 131)		bool _hx_tmp4;
HXDLIN( 131)		bool _hx_tmp5;
HXDLIN( 131)		bool _hx_tmp6;
HXDLIN( 131)		if (::hx::IsNotNull( ct )) {
HXDLIN( 131)			_hx_tmp6 = (this->redMultiplier == ct->redMultiplier);
            		}
            		else {
HXDLIN( 131)			_hx_tmp6 = false;
            		}
HXDLIN( 131)		if (_hx_tmp6) {
HXDLIN( 131)			_hx_tmp5 = (this->greenMultiplier == ct->greenMultiplier);
            		}
            		else {
HXDLIN( 131)			_hx_tmp5 = false;
            		}
HXDLIN( 131)		if (_hx_tmp5) {
HXDLIN( 131)			_hx_tmp4 = (this->blueMultiplier == ct->blueMultiplier);
            		}
            		else {
HXDLIN( 131)			_hx_tmp4 = false;
            		}
HXDLIN( 131)		if (_hx_tmp4) {
HXLINE( 135)			if (!(ignoreAlphaMultiplier)) {
HXDLIN( 131)				_hx_tmp3 = (this->alphaMultiplier == ct->alphaMultiplier);
            			}
            			else {
HXDLIN( 131)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXDLIN( 131)			_hx_tmp3 = false;
            		}
HXDLIN( 131)		if (_hx_tmp3) {
HXDLIN( 131)			_hx_tmp2 = (this->redOffset == ct->redOffset);
            		}
            		else {
HXDLIN( 131)			_hx_tmp2 = false;
            		}
HXDLIN( 131)		if (_hx_tmp2) {
HXDLIN( 131)			_hx_tmp1 = (this->greenOffset == ct->greenOffset);
            		}
            		else {
HXDLIN( 131)			_hx_tmp1 = false;
            		}
HXDLIN( 131)		if (_hx_tmp1) {
HXDLIN( 131)			_hx_tmp = (this->blueOffset == ct->blueOffset);
            		}
            		else {
HXDLIN( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 139)			return (this->alphaOffset == ct->alphaOffset);
            		}
            		else {
HXDLIN( 131)			return false;
            		}
HXDLIN( 131)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,_hx___equals,return )

bool ColorTransform_obj::_hx___isDefault(bool ignoreAlphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_144___isDefault)
HXDLIN( 144)		if (ignoreAlphaMultiplier) {
HXLINE( 146)			bool _hx_tmp;
HXDLIN( 146)			bool _hx_tmp1;
HXDLIN( 146)			bool _hx_tmp2;
HXDLIN( 146)			bool _hx_tmp3;
HXDLIN( 146)			bool _hx_tmp4;
HXDLIN( 146)			if ((this->redMultiplier == 1)) {
HXLINE( 146)				_hx_tmp4 = (this->greenMultiplier == 1);
            			}
            			else {
HXLINE( 146)				_hx_tmp4 = false;
            			}
HXDLIN( 146)			if (_hx_tmp4) {
HXLINE( 146)				_hx_tmp3 = (this->blueMultiplier == 1);
            			}
            			else {
HXLINE( 146)				_hx_tmp3 = false;
            			}
HXDLIN( 146)			if (_hx_tmp3) {
HXLINE( 146)				_hx_tmp2 = (this->redOffset == 0);
            			}
            			else {
HXLINE( 146)				_hx_tmp2 = false;
            			}
HXDLIN( 146)			if (_hx_tmp2) {
HXLINE( 146)				_hx_tmp1 = (this->greenOffset == 0);
            			}
            			else {
HXLINE( 146)				_hx_tmp1 = false;
            			}
HXDLIN( 146)			if (_hx_tmp1) {
HXLINE( 146)				_hx_tmp = (this->blueOffset == 0);
            			}
            			else {
HXLINE( 146)				_hx_tmp = false;
            			}
HXDLIN( 146)			if (_hx_tmp) {
HXLINE( 152)				return (this->alphaOffset == 0);
            			}
            			else {
HXLINE( 146)				return false;
            			}
            		}
            		else {
HXLINE( 156)			bool _hx_tmp;
HXDLIN( 156)			bool _hx_tmp1;
HXDLIN( 156)			bool _hx_tmp2;
HXDLIN( 156)			bool _hx_tmp3;
HXDLIN( 156)			bool _hx_tmp4;
HXDLIN( 156)			bool _hx_tmp5;
HXDLIN( 156)			if ((this->redMultiplier == 1)) {
HXLINE( 156)				_hx_tmp5 = (this->greenMultiplier == 1);
            			}
            			else {
HXLINE( 156)				_hx_tmp5 = false;
            			}
HXDLIN( 156)			if (_hx_tmp5) {
HXLINE( 156)				_hx_tmp4 = (this->blueMultiplier == 1);
            			}
            			else {
HXLINE( 156)				_hx_tmp4 = false;
            			}
HXDLIN( 156)			if (_hx_tmp4) {
HXLINE( 156)				_hx_tmp3 = (this->alphaMultiplier == 1);
            			}
            			else {
HXLINE( 156)				_hx_tmp3 = false;
            			}
HXDLIN( 156)			if (_hx_tmp3) {
HXLINE( 156)				_hx_tmp2 = (this->redOffset == 0);
            			}
            			else {
HXLINE( 156)				_hx_tmp2 = false;
            			}
HXDLIN( 156)			if (_hx_tmp2) {
HXLINE( 156)				_hx_tmp1 = (this->greenOffset == 0);
            			}
            			else {
HXLINE( 156)				_hx_tmp1 = false;
            			}
HXDLIN( 156)			if (_hx_tmp1) {
HXLINE( 156)				_hx_tmp = (this->blueOffset == 0);
            			}
            			else {
HXLINE( 156)				_hx_tmp = false;
            			}
HXDLIN( 156)			if (_hx_tmp) {
HXLINE( 157)				return (this->alphaOffset == 0);
            			}
            			else {
HXLINE( 156)				return false;
            			}
            		}
HXLINE( 144)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___isDefault,return )

void ColorTransform_obj::_hx___setArrays(::Array< Float > colorMultipliers,::Array< Float > colorOffsets){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_162___setArrays)
HXLINE( 163)		colorMultipliers[0] = this->redMultiplier;
HXLINE( 164)		colorMultipliers[1] = this->greenMultiplier;
HXLINE( 165)		colorMultipliers[2] = this->blueMultiplier;
HXLINE( 166)		colorMultipliers[3] = this->alphaMultiplier;
HXLINE( 167)		colorOffsets[0] = this->redOffset;
HXLINE( 168)		colorOffsets[1] = this->greenOffset;
HXLINE( 169)		colorOffsets[2] = this->blueOffset;
HXLINE( 170)		colorOffsets[3] = this->alphaOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,_hx___setArrays,(void))

int ColorTransform_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_176_get_color)
HXDLIN( 176)		int _hx_tmp = (::Std_obj::_hx_int(this->redOffset) << 16);
HXDLIN( 176)		int _hx_tmp1 = (_hx_tmp | (::Std_obj::_hx_int(this->greenOffset) << 8));
HXDLIN( 176)		return (_hx_tmp1 | ::Std_obj::_hx_int(this->blueOffset));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_180_set_color)
HXLINE( 181)		this->redOffset = ( (Float)(((value >> 16) & 255)) );
HXLINE( 182)		this->greenOffset = ( (Float)(((value >> 8) & 255)) );
HXLINE( 183)		this->blueOffset = ( (Float)((value & 255)) );
HXLINE( 185)		this->redMultiplier = ( (Float)(0) );
HXLINE( 186)		this->greenMultiplier = ( (Float)(0) );
HXLINE( 187)		this->blueMultiplier = ( (Float)(0) );
HXLINE( 189)		return this->get_color();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___toLimeColorMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_194___toLimeColorMatrix)
HXLINE( 195)		if (::hx::IsNull( ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix )) {
HXLINE( 197)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 197)			::cpp::VirtualArray array = null();
HXDLIN( 197)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 197)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 197)			 ::Dynamic len = null();
HXDLIN( 197)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,20,8);
HXDLIN( 197)			::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix = this1;
            		}
HXLINE( 200)		{
HXLINE( 200)			 ::lime::utils::ArrayBufferView this1 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 200)			Float val = this->redMultiplier;
HXDLIN( 200)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE( 201)		{
HXLINE( 201)			 ::lime::utils::ArrayBufferView this2 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 201)			Float val1 = (this->redOffset / ( (Float)(255) ));
HXDLIN( 201)			 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 16),val1);
            		}
HXLINE( 202)		{
HXLINE( 202)			 ::lime::utils::ArrayBufferView this3 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 202)			Float val2 = this->greenMultiplier;
HXDLIN( 202)			 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 24),val2);
            		}
HXLINE( 203)		{
HXLINE( 203)			 ::lime::utils::ArrayBufferView this4 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 203)			Float val3 = (this->greenOffset / ( (Float)(255) ));
HXDLIN( 203)			 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 36),val3);
            		}
HXLINE( 204)		{
HXLINE( 204)			 ::lime::utils::ArrayBufferView this5 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 204)			Float val4 = this->blueMultiplier;
HXDLIN( 204)			 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 48),val4);
            		}
HXLINE( 205)		{
HXLINE( 205)			 ::lime::utils::ArrayBufferView this6 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 205)			Float val5 = (this->blueOffset / ( (Float)(255) ));
HXDLIN( 205)			 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 56),val5);
            		}
HXLINE( 206)		{
HXLINE( 206)			 ::lime::utils::ArrayBufferView this7 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 206)			Float val6 = this->alphaMultiplier;
HXDLIN( 206)			 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 72),val6);
            		}
HXLINE( 207)		{
HXLINE( 207)			 ::lime::utils::ArrayBufferView this8 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 207)			Float val7 = (this->alphaOffset / ( (Float)(255) ));
HXDLIN( 207)			 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 76),val7);
            		}
HXLINE( 209)		return ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___toLimeColorMatrix,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___limeColorMatrix;

 ::lime::utils::ObjectPool ColorTransform_obj::_hx___pool;


::hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset) {
	::hx::ObjectPtr< ColorTransform_obj > __this = new ColorTransform_obj();
	__this->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return __this;
}

::hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset) {
	ColorTransform_obj *__this = (ColorTransform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorTransform_obj), false, "openfl.geom.ColorTransform"));
	*(void **)__this = ColorTransform_obj::_hx_vtable;
	__this->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return __this;
}

ColorTransform_obj::ColorTransform_obj()
{
}

::hx::Val ColorTransform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return ::hx::Val( _hx___clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"__invert") ) { return ::hx::Val( _hx___invert_dyn() ); }
		if (HX_FIELD_EQ(inName,"__equals") ) { return ::hx::Val( _hx___equals_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return ::hx::Val( redOffset ); }
		if (HX_FIELD_EQ(inName,"__combine") ) { return ::hx::Val( _hx___combine_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return ::hx::Val( blueOffset ); }
		if (HX_FIELD_EQ(inName,"__copyFrom") ) { return ::hx::Val( _hx___copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"__identity") ) { return ::hx::Val( _hx___identity_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return ::hx::Val( alphaOffset ); }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return ::hx::Val( greenOffset ); }
		if (HX_FIELD_EQ(inName,"__isDefault") ) { return ::hx::Val( _hx___isDefault_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setArrays") ) { return ::hx::Val( _hx___setArrays_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return ::hx::Val( redMultiplier ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return ::hx::Val( blueMultiplier ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return ::hx::Val( alphaMultiplier ); }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return ::hx::Val( greenMultiplier ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return ::hx::Val( _hx___toLimeColorMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorTransform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { outValue = ( _hx___limeColorMatrix ); return true; }
	}
	return false;
}

::hx::Val ColorTransform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { _hx___limeColorMatrix=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaMultiplier",7f,b4,82,9a));
	outFields->push(HX_("alphaOffset",91,8d,43,d0));
	outFields->push(HX_("blueMultiplier",bb,32,96,cf));
	outFields->push(HX_("blueOffset",cd,3d,34,bb));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("greenMultiplier",24,2c,40,6f));
	outFields->push(HX_("greenOffset",b6,0e,d9,b7));
	outFields->push(HX_("redMultiplier",32,f4,e9,4e));
	outFields->push(HX_("redOffset",c4,37,9e,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorTransform_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_("alphaMultiplier",7f,b4,82,9a)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_("alphaOffset",91,8d,43,d0)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_("blueMultiplier",bb,32,96,cf)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_("blueOffset",cd,3d,34,bb)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_("greenMultiplier",24,2c,40,6f)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_("greenOffset",b6,0e,d9,b7)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_("redMultiplier",32,f4,e9,4e)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_("redOffset",c4,37,9e,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ColorTransform_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorTransform_obj::_hx___limeColorMatrix,HX_("__limeColorMatrix",cf,d7,37,34)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &ColorTransform_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorTransform_obj_sMemberFields[] = {
	HX_("alphaMultiplier",7f,b4,82,9a),
	HX_("alphaOffset",91,8d,43,d0),
	HX_("blueMultiplier",bb,32,96,cf),
	HX_("blueOffset",cd,3d,34,bb),
	HX_("greenMultiplier",24,2c,40,6f),
	HX_("greenOffset",b6,0e,d9,b7),
	HX_("redMultiplier",32,f4,e9,4e),
	HX_("redOffset",c4,37,9e,53),
	HX_("concat",14,09,d0,c7),
	HX_("toString",ac,d0,6e,38),
	HX_("__clone",3d,6c,c1,b2),
	HX_("__copyFrom",df,7e,99,6b),
	HX_("__combine",5f,7b,7c,fb),
	HX_("__identity",5e,b8,67,5c),
	HX_("__invert",36,52,08,48),
	HX_("__equals",5f,59,22,68),
	HX_("__isDefault",d7,9e,ee,cd),
	HX_("__setArrays",dc,36,c4,45),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("__toLimeColorMatrix",94,d4,b6,78),
	::String(null()) };

static void ColorTransform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
	HX_MARK_MEMBER_NAME(ColorTransform_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorTransform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::_hx___pool,"__pool");
};

#endif

::hx::Class ColorTransform_obj::__mClass;

static ::String ColorTransform_obj_sStaticFields[] = {
	HX_("__limeColorMatrix",cf,d7,37,34),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void ColorTransform_obj::__register()
{
	ColorTransform_obj _hx_dummy;
	ColorTransform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.ColorTransform",3d,35,6d,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorTransform_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = ColorTransform_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorTransform_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorTransform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorTransform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorTransform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTransform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTransform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorTransform_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::ColorTransform _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_19_boot)
HXDLIN(  19)			return  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::ColorTransform ct){
            			HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_20_boot)
HXLINE(  20)			ct->_hx___identity();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_19_boot)
HXDLIN(  19)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom