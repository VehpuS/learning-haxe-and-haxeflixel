// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_17_destroy,"flixel.util.FlxDestroyUtil","destroy",0xd7e4dd50,"flixel.util.FlxDestroyUtil.destroy","flixel/util/FlxDestroyUtil.hx",17,0xaf22421a)
HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_32_destroyArray,"flixel.util.FlxDestroyUtil","destroyArray",0xa1a3be29,"flixel.util.FlxDestroyUtil.destroyArray","flixel/util/FlxDestroyUtil.hx",32,0xaf22421a)
HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_49_put,"flixel.util.FlxDestroyUtil","put",0xdd93b025,"flixel.util.FlxDestroyUtil.put","flixel/util/FlxDestroyUtil.hx",49,0xaf22421a)
HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_65_putArray,"flixel.util.FlxDestroyUtil","putArray",0x60ff8734,"flixel.util.FlxDestroyUtil.putArray","flixel/util/FlxDestroyUtil.hx",65,0xaf22421a)
HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_83_dispose,"flixel.util.FlxDestroyUtil","dispose",0x6eab30f5,"flixel.util.FlxDestroyUtil.dispose","flixel/util/FlxDestroyUtil.hx",83,0xaf22421a)
HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_95_disposeIfNotEqual,"flixel.util.FlxDestroyUtil","disposeIfNotEqual",0x591337f3,"flixel.util.FlxDestroyUtil.disposeIfNotEqual","flixel/util/FlxDestroyUtil.hx",95,0xaf22421a)
HX_LOCAL_STACK_FRAME(_hx_pos_4843de95e9d2f53c_110_removeChild,"flixel.util.FlxDestroyUtil","removeChild",0x08da1a0e,"flixel.util.FlxDestroyUtil.removeChild","flixel/util/FlxDestroyUtil.hx",110,0xaf22421a)
namespace flixel{
namespace util{

void FlxDestroyUtil_obj::__construct() { }

Dynamic FlxDestroyUtil_obj::__CreateEmpty() { return new FlxDestroyUtil_obj; }

void *FlxDestroyUtil_obj::_hx_vtable = 0;

Dynamic FlxDestroyUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDestroyUtil_obj > _hx_result = new FlxDestroyUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDestroyUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d00ba88;
}

 ::Dynamic FlxDestroyUtil_obj::destroy(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_17_destroy)
HXLINE(  18)		if (::hx::IsNotNull( object )) {
HXLINE(  20)			::flixel::util::IFlxDestroyable_obj::destroy(object);
            		}
HXLINE(  22)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroy,return )

::cpp::VirtualArray FlxDestroyUtil_obj::destroyArray(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_32_destroyArray)
HXLINE(  33)		if (::hx::IsNotNull( array )) {
HXLINE(  35)			{
HXLINE(  35)				int _g = 0;
HXDLIN(  35)				while((_g < array->get_length())){
HXLINE(  35)					 ::Dynamic e = array->__get(_g);
HXDLIN(  35)					_g = (_g + 1);
HXLINE(  36)					::flixel::util::FlxDestroyUtil_obj::destroy(e);
            				}
            			}
HXLINE(  37)			array->splice(0,array->get_length());
            		}
HXLINE(  39)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroyArray,return )

 ::Dynamic FlxDestroyUtil_obj::put(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_49_put)
HXLINE(  50)		if (::hx::IsNotNull( object )) {
HXLINE(  52)			::flixel::util::IFlxPooled_obj::put(object);
            		}
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,put,return )

::cpp::VirtualArray FlxDestroyUtil_obj::putArray(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_65_putArray)
HXLINE(  66)		if (::hx::IsNotNull( array )) {
HXLINE(  68)			{
HXLINE(  68)				int _g = 0;
HXDLIN(  68)				while((_g < array->get_length())){
HXLINE(  68)					 ::Dynamic e = array->__get(_g);
HXDLIN(  68)					_g = (_g + 1);
HXLINE(  69)					::flixel::util::FlxDestroyUtil_obj::put(e);
            				}
            			}
HXLINE(  70)			array->splice(0,array->get_length());
            		}
HXLINE(  72)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,putArray,return )

 ::openfl::display::BitmapData FlxDestroyUtil_obj::dispose( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_83_dispose)
HXLINE(  84)		if (::hx::IsNotNull( bitmapData )) {
HXLINE(  86)			bitmapData->dispose();
            		}
HXLINE(  88)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,dispose,return )

 ::openfl::display::BitmapData FlxDestroyUtil_obj::disposeIfNotEqual( ::openfl::display::BitmapData bitmapData,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_95_disposeIfNotEqual)
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		if (::hx::IsNotNull( bitmapData )) {
HXLINE(  96)			if ((bitmapData->width == width)) {
HXLINE(  96)				_hx_tmp = (bitmapData->height != height);
            			}
            			else {
HXLINE(  96)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  98)			bitmapData->dispose();
HXLINE(  99)			return null();
            		}
            		else {
HXLINE( 101)			if (::hx::IsNotNull( bitmapData )) {
HXLINE( 103)				return bitmapData;
            			}
            		}
HXLINE( 106)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDestroyUtil_obj,disposeIfNotEqual,return )

 ::Dynamic FlxDestroyUtil_obj::removeChild( ::openfl::display::DisplayObjectContainer parent, ::Dynamic child){
            	HX_STACKFRAME(&_hx_pos_4843de95e9d2f53c_110_removeChild)
HXLINE( 111)		bool _hx_tmp;
HXDLIN( 111)		bool _hx_tmp1;
HXDLIN( 111)		if (::hx::IsNotNull( parent )) {
HXLINE( 111)			_hx_tmp1 = ::hx::IsNotNull( child );
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = false;
            		}
HXDLIN( 111)		if (_hx_tmp1) {
HXLINE( 111)			_hx_tmp = parent->contains(( ( ::openfl::display::DisplayObject)(child) ));
            		}
            		else {
HXLINE( 111)			_hx_tmp = false;
            		}
HXDLIN( 111)		if (_hx_tmp) {
HXLINE( 113)			parent->removeChild(( ( ::openfl::display::DisplayObject)(child) ));
            		}
HXLINE( 115)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDestroyUtil_obj,removeChild,return )


FlxDestroyUtil_obj::FlxDestroyUtil_obj()
{
}

bool FlxDestroyUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putArray") ) { outValue = putArray_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { outValue = removeChild_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyArray") ) { outValue = destroyArray_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disposeIfNotEqual") ) { outValue = disposeIfNotEqual_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxDestroyUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxDestroyUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxDestroyUtil_obj::__mClass;

static ::String FlxDestroyUtil_obj_sStaticFields[] = {
	HX_("destroy",fa,2c,86,24),
	HX_("destroyArray",3f,66,8f,17),
	HX_("put",cf,62,55,00),
	HX_("putArray",4a,ec,83,21),
	HX_("dispose",9f,80,4c,bb),
	HX_("disposeIfNotEqual",1d,80,c0,4f),
	HX_("removeChild",b8,86,ed,43),
	::String(null())
};

void FlxDestroyUtil_obj::__register()
{
	FlxDestroyUtil_obj _hx_dummy;
	FlxDestroyUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxDestroyUtil",c4,ca,9f,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDestroyUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDestroyUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxDestroyUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDestroyUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDestroyUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
