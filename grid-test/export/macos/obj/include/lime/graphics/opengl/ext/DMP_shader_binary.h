// Generated by Haxe 4.1.4
#ifndef INCLUDED_lime_graphics_opengl_ext_DMP_shader_binary
#define INCLUDED_lime_graphics_opengl_ext_DMP_shader_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_20c611465b484b2c_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,DMP_shader_binary)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES DMP_shader_binary_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DMP_shader_binary_obj OBJ_;
		DMP_shader_binary_obj();

	public:
		enum { _hx_ClassId = 0x5d56f211 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.DMP_shader_binary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.DMP_shader_binary"); }

		inline static ::hx::ObjectPtr< DMP_shader_binary_obj > __new() {
			::hx::ObjectPtr< DMP_shader_binary_obj > __this = new DMP_shader_binary_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DMP_shader_binary_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DMP_shader_binary_obj *__this = (DMP_shader_binary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DMP_shader_binary_obj), false, "lime.graphics.opengl.ext.DMP_shader_binary"));
			*(void **)__this = DMP_shader_binary_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_20c611465b484b2c_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::DMP_shader_binary)(__this) )->SHADER_BINARY_DMP = 37456;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DMP_shader_binary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DMP_shader_binary",43,70,06,89); }

		int SHADER_BINARY_DMP;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_DMP_shader_binary */ 
