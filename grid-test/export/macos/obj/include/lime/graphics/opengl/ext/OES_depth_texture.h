// Generated by Haxe 4.1.4
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth_texture
#define INCLUDED_lime_graphics_opengl_ext_OES_depth_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_40e705a33ea3613f_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_depth_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_depth_texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_depth_texture_obj OBJ_;
		OES_depth_texture_obj();

	public:
		enum { _hx_ClassId = 0x02adc523 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_depth_texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_depth_texture"); }

		inline static ::hx::ObjectPtr< OES_depth_texture_obj > __new() {
			::hx::ObjectPtr< OES_depth_texture_obj > __this = new OES_depth_texture_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_depth_texture_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_depth_texture_obj *__this = (OES_depth_texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_depth_texture_obj), false, "lime.graphics.opengl.ext.OES_depth_texture"));
			*(void **)__this = OES_depth_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_40e705a33ea3613f_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_depth_texture_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_depth_texture",dd,ed,8f,e2); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_depth_texture */ 
