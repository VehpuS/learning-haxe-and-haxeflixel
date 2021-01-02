// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_packed_depth_stencil
#include <lime/graphics/opengl/ext/EXT_packed_depth_stencil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cab1116d5a570d04_4_new,"lime.graphics.opengl.ext.EXT_packed_depth_stencil","new",0x6fb5d70b,"lime.graphics.opengl.ext.EXT_packed_depth_stencil.new","lime/graphics/opengl/ext/EXT_packed_depth_stencil.hx",4,0xea41a563)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_packed_depth_stencil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cab1116d5a570d04_4_new)
HXLINE(   9)		this->TEXTURE_STENCIL_SIZE_EXT = 35057;
HXLINE(   8)		this->DEPTH24_STENCIL8_EXT = 35056;
HXLINE(   7)		this->UNSIGNED_INT_24_8_EXT = 34042;
HXLINE(   6)		this->DEPTH_STENCIL_EXT = 34041;
            	}

Dynamic EXT_packed_depth_stencil_obj::__CreateEmpty() { return new EXT_packed_depth_stencil_obj; }

void *EXT_packed_depth_stencil_obj::_hx_vtable = 0;

Dynamic EXT_packed_depth_stencil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_packed_depth_stencil_obj > _hx_result = new EXT_packed_depth_stencil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_packed_depth_stencil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78e06975;
}


EXT_packed_depth_stencil_obj::EXT_packed_depth_stencil_obj()
{
}

::hx::Val EXT_packed_depth_stencil_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_EXT") ) { return ::hx::Val( DEPTH_STENCIL_EXT ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_EXT") ) { return ::hx::Val( DEPTH24_STENCIL8_EXT ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_EXT") ) { return ::hx::Val( UNSIGNED_INT_24_8_EXT ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_STENCIL_SIZE_EXT") ) { return ::hx::Val( TEXTURE_STENCIL_SIZE_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_packed_depth_stencil_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_EXT") ) { DEPTH_STENCIL_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_EXT") ) { DEPTH24_STENCIL8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_EXT") ) { UNSIGNED_INT_24_8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_STENCIL_SIZE_EXT") ) { TEXTURE_STENCIL_SIZE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_packed_depth_stencil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEPTH_STENCIL_EXT",c2,bc,08,29));
	outFields->push(HX_("UNSIGNED_INT_24_8_EXT",b7,c3,d4,cf));
	outFields->push(HX_("DEPTH24_STENCIL8_EXT",b8,9e,e0,3a));
	outFields->push(HX_("TEXTURE_STENCIL_SIZE_EXT",0a,e4,57,e3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_packed_depth_stencil_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,DEPTH_STENCIL_EXT),HX_("DEPTH_STENCIL_EXT",c2,bc,08,29)},
	{::hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,UNSIGNED_INT_24_8_EXT),HX_("UNSIGNED_INT_24_8_EXT",b7,c3,d4,cf)},
	{::hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,DEPTH24_STENCIL8_EXT),HX_("DEPTH24_STENCIL8_EXT",b8,9e,e0,3a)},
	{::hx::fsInt,(int)offsetof(EXT_packed_depth_stencil_obj,TEXTURE_STENCIL_SIZE_EXT),HX_("TEXTURE_STENCIL_SIZE_EXT",0a,e4,57,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_packed_depth_stencil_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_packed_depth_stencil_obj_sMemberFields[] = {
	HX_("DEPTH_STENCIL_EXT",c2,bc,08,29),
	HX_("UNSIGNED_INT_24_8_EXT",b7,c3,d4,cf),
	HX_("DEPTH24_STENCIL8_EXT",b8,9e,e0,3a),
	HX_("TEXTURE_STENCIL_SIZE_EXT",0a,e4,57,e3),
	::String(null()) };

::hx::Class EXT_packed_depth_stencil_obj::__mClass;

void EXT_packed_depth_stencil_obj::__register()
{
	EXT_packed_depth_stencil_obj _hx_dummy;
	EXT_packed_depth_stencil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_packed_depth_stencil",99,f5,8c,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_packed_depth_stencil_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_packed_depth_stencil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_packed_depth_stencil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_packed_depth_stencil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
