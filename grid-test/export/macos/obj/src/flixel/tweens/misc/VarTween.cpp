// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a4370a0a6fec63c7_16_new,"flixel.tweens.misc.VarTween","new",0x19cf09e4,"flixel.tweens.misc.VarTween.new","flixel/tweens/misc/VarTween.hx",16,0x836bddcb)
HX_LOCAL_STACK_FRAME(_hx_pos_a4370a0a6fec63c7_27_tween,"flixel.tweens.misc.VarTween","tween",0xf3504cef,"flixel.tweens.misc.VarTween.tween","flixel/tweens/misc/VarTween.hx",27,0x836bddcb)
HX_LOCAL_STACK_FRAME(_hx_pos_a4370a0a6fec63c7_44_update,"flixel.tweens.misc.VarTween","update",0x50d41705,"flixel.tweens.misc.VarTween.update","flixel/tweens/misc/VarTween.hx",44,0x836bddcb)
HX_LOCAL_STACK_FRAME(_hx_pos_a4370a0a6fec63c7_65_initializeVars,"flixel.tweens.misc.VarTween","initializeVars",0x0a5a5e18,"flixel.tweens.misc.VarTween.initializeVars","flixel/tweens/misc/VarTween.hx",65,0x836bddcb)
HX_LOCAL_STACK_FRAME(_hx_pos_a4370a0a6fec63c7_102_destroy,"flixel.tweens.misc.VarTween","destroy",0xef76787e,"flixel.tweens.misc.VarTween.destroy","flixel/tweens/misc/VarTween.hx",102,0x836bddcb)
namespace flixel{
namespace tweens{
namespace misc{

void VarTween_obj::__construct( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_a4370a0a6fec63c7_16_new)
HXDLIN(  16)		super::__construct(options,manager);
            	}

Dynamic VarTween_obj::__CreateEmpty() { return new VarTween_obj; }

void *VarTween_obj::_hx_vtable = 0;

Dynamic VarTween_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VarTween_obj > _hx_result = new VarTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VarTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x104846c5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
	} else {
		return inClassId==(int)0x6894b914;
	}
}

 ::flixel::tweens::misc::VarTween VarTween_obj::tween( ::Dynamic object, ::Dynamic properties,Float duration){
            	HX_STACKFRAME(&_hx_pos_a4370a0a6fec63c7_27_tween)
HXLINE(  29)		if (::hx::IsNull( object )) {
HXLINE(  30)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot tween variables of an object that is null.",4e,3a,13,2f)));
            		}
            		else {
HXLINE(  31)			if (::hx::IsNull( properties )) {
HXLINE(  32)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot tween null properties.",74,80,03,52)));
            			}
            		}
HXLINE(  35)		this->_object = object;
HXLINE(  36)		this->_properties = properties;
HXLINE(  37)		this->_propertyInfos = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  38)		this->duration = duration;
HXLINE(  39)		this->start();
HXLINE(  40)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(VarTween_obj,tween,return )

void VarTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a4370a0a6fec63c7_44_update)
HXLINE(  45)		Float delay;
HXDLIN(  45)		if ((this->executions > 0)) {
HXLINE(  45)			delay = this->loopDelay;
            		}
            		else {
HXLINE(  45)			delay = this->startDelay;
            		}
HXLINE(  48)		if ((this->_secondsSinceStart < delay)) {
HXLINE(  49)			this->super::update(elapsed);
            		}
            		else {
HXLINE(  54)			if ((this->_propertyInfos->length == 0)) {
HXLINE(  55)				this->initializeVars();
            			}
HXLINE(  57)			this->super::update(elapsed);
HXLINE(  59)			{
HXLINE(  59)				int _g = 0;
HXDLIN(  59)				::Array< ::Dynamic> _g1 = this->_propertyInfos;
HXDLIN(  59)				while((_g < _g1->length)){
HXLINE(  59)					 ::Dynamic info = _g1->__get(_g);
HXDLIN(  59)					_g = (_g + 1);
HXLINE(  60)					::Reflect_obj::setProperty( ::Dynamic(info->__Field(HX_("object",bf,7e,3f,15),::hx::paccDynamic)),( (::String)(info->__Field(HX_("field",ba,94,93,00),::hx::paccDynamic)) ), ::Dynamic((info->__Field(HX_("startValue",af,57,cf,4d),::hx::paccDynamic) + (( (Float)(info->__Field(HX_("range",bd,a5,1f,e4),::hx::paccDynamic)) ) * this->scale))));
            				}
            			}
            		}
            	}


void VarTween_obj::initializeVars(){
            	HX_STACKFRAME(&_hx_pos_a4370a0a6fec63c7_65_initializeVars)
HXLINE(  66)		::Array< ::String > fieldPaths;
HXLINE(  67)		if (::Reflect_obj::isObject(this->_properties)) {
HXLINE(  68)			fieldPaths = ::Reflect_obj::fields(this->_properties);
            		}
            		else {
HXLINE(  70)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported properties container - use an object containing key/value pairs.",0b,19,89,5b)));
            		}
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			while((_g < fieldPaths->length)){
HXLINE(  72)				::String fieldPath = fieldPaths->__get(_g);
HXDLIN(  72)				_g = (_g + 1);
HXLINE(  74)				 ::Dynamic target = this->_object;
HXLINE(  75)				::Array< ::String > path = fieldPath.split(HX_(".",2e,00,00,00));
HXLINE(  76)				::String field = ( (::String)(path->pop()) );
HXLINE(  77)				{
HXLINE(  77)					int _g1 = 0;
HXDLIN(  77)					while((_g1 < path->length)){
HXLINE(  77)						::String component = path->__get(_g1);
HXDLIN(  77)						_g1 = (_g1 + 1);
HXLINE(  79)						target = ::Reflect_obj::getProperty(target,component);
HXLINE(  80)						if (!(::Reflect_obj::isObject(target))) {
HXLINE(  81)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("The object does not have the property \"",5c,e6,6d,12) + component) + HX_("\" in \"",e5,cf,af,4a)) + fieldPath) + HX_("\"",22,00,00,00))));
            						}
            					}
            				}
HXLINE(  84)				if (::hx::IsNull( ::Reflect_obj::getProperty(target,field) )) {
HXLINE(  85)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("The object does not have the property \"",5c,e6,6d,12) + field) + HX_("\"",22,00,00,00))));
            				}
HXLINE(  87)				 ::Dynamic value = ::Reflect_obj::getProperty(target,field);
HXLINE(  88)				if (::Math_obj::isNaN(( (Float)(value) ))) {
HXLINE(  89)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("The property \"",06,e3,80,a4) + field) + HX_("\" is not numeric.",66,4f,2a,cf))));
            				}
HXLINE(  91)				 ::Dynamic targetValue = ::Reflect_obj::getProperty(this->_properties,fieldPath);
HXLINE(  92)				this->_propertyInfos->push( ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("range",bd,a5,1f,e4),(( (Float)(targetValue) ) - ( (Float)(value) )))
            					->setFixed(1,HX_("field",ba,94,93,00),field)
            					->setFixed(2,HX_("object",bf,7e,3f,15),target)
            					->setFixed(3,HX_("startValue",af,57,cf,4d),( (Float)(value) ))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VarTween_obj,initializeVars,(void))

void VarTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a4370a0a6fec63c7_102_destroy)
HXLINE( 103)		this->super::destroy();
HXLINE( 104)		this->_object = null();
HXLINE( 105)		this->_properties = null();
HXLINE( 106)		this->_propertyInfos = null();
            	}



::hx::ObjectPtr< VarTween_obj > VarTween_obj::__new( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< VarTween_obj > __this = new VarTween_obj();
	__this->__construct(options,manager);
	return __this;
}

::hx::ObjectPtr< VarTween_obj > VarTween_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::flixel::tweens::FlxTweenManager manager) {
	VarTween_obj *__this = (VarTween_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VarTween_obj), true, "flixel.tweens.misc.VarTween"));
	*(void **)__this = VarTween_obj::_hx_vtable;
	__this->__construct(options,manager);
	return __this;
}

VarTween_obj::VarTween_obj()
{
}

void VarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarTween);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_properties,"_properties");
	HX_MARK_MEMBER_NAME(_propertyInfos,"_propertyInfos");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_properties,"_properties");
	HX_VISIT_MEMBER_NAME(_propertyInfos,"_propertyInfos");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VarTween_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return ::hx::Val( _object ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { return ::hx::Val( _properties ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyInfos") ) { return ::hx::Val( _propertyInfos ); }
		if (HX_FIELD_EQ(inName,"initializeVars") ) { return ::hx::Val( initializeVars_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VarTween_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { _properties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyInfos") ) { _propertyInfos=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_object",5e,90,b6,83));
	outFields->push(HX_("_properties",12,c9,98,33));
	outFields->push(HX_("_propertyInfos",f1,eb,ad,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VarTween_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VarTween_obj,_object),HX_("_object",5e,90,b6,83)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VarTween_obj,_properties),HX_("_properties",12,c9,98,33)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(VarTween_obj,_propertyInfos),HX_("_propertyInfos",f1,eb,ad,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VarTween_obj_sStaticStorageInfo = 0;
#endif

static ::String VarTween_obj_sMemberFields[] = {
	HX_("_object",5e,90,b6,83),
	HX_("_properties",12,c9,98,33),
	HX_("_propertyInfos",f1,eb,ad,46),
	HX_("tween",6b,aa,70,19),
	HX_("update",09,86,05,87),
	HX_("initializeVars",1c,71,d8,51),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class VarTween_obj::__mClass;

void VarTween_obj::__register()
{
	VarTween_obj _hx_dummy;
	VarTween_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.misc.VarTween",f2,87,4b,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VarTween_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VarTween_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VarTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VarTween_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
