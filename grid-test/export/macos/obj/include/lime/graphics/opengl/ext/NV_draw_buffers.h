// Generated by Haxe 4.1.4
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_draw_buffers
#define INCLUDED_lime_graphics_opengl_ext_NV_draw_buffers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1e712ceb2a038135_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_draw_buffers)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_draw_buffers_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_draw_buffers_obj OBJ_;
		NV_draw_buffers_obj();

	public:
		enum { _hx_ClassId = 0x752e9bfd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_draw_buffers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_draw_buffers"); }

		inline static ::hx::ObjectPtr< NV_draw_buffers_obj > __new() {
			::hx::ObjectPtr< NV_draw_buffers_obj > __this = new NV_draw_buffers_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_draw_buffers_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_draw_buffers_obj *__this = (NV_draw_buffers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_draw_buffers_obj), false, "lime.graphics.opengl.ext.NV_draw_buffers"));
			*(void **)__this = NV_draw_buffers_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1e712ceb2a038135_4_new)
HXLINE(  38)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT15_NV = 36079;
HXLINE(  37)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT14_NV = 36078;
HXLINE(  36)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT13_NV = 36077;
HXLINE(  35)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT12_NV = 36076;
HXLINE(  34)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT11_NV = 36075;
HXLINE(  33)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT10_NV = 36074;
HXLINE(  32)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT9_NV = 36073;
HXLINE(  31)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT8_NV = 36072;
HXLINE(  30)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT7_NV = 36071;
HXLINE(  29)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT6_NV = 36070;
HXLINE(  28)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT5_NV = 36069;
HXLINE(  27)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT4_NV = 36068;
HXLINE(  26)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT3_NV = 36067;
HXLINE(  25)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT2_NV = 36066;
HXLINE(  24)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT1_NV = 36065;
HXLINE(  23)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->COLOR_ATTACHMENT0_NV = 36064;
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER15_NV = 34868;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER14_NV = 34867;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER13_NV = 34866;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER12_NV = 34865;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER11_NV = 34864;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER10_NV = 34863;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER9_NV = 34862;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER8_NV = 34861;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER7_NV = 34860;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER6_NV = 34859;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER5_NV = 34858;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER4_NV = 34857;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER3_NV = 34856;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER2_NV = 34855;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER1_NV = 34854;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->DRAW_BUFFER0_NV = 34853;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::NV_draw_buffers)(__this) )->MAX_DRAW_BUFFERS_NV = 34852;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_draw_buffers_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_draw_buffers",8f,0e,de,94); }

		int MAX_DRAW_BUFFERS_NV;
		int DRAW_BUFFER0_NV;
		int DRAW_BUFFER1_NV;
		int DRAW_BUFFER2_NV;
		int DRAW_BUFFER3_NV;
		int DRAW_BUFFER4_NV;
		int DRAW_BUFFER5_NV;
		int DRAW_BUFFER6_NV;
		int DRAW_BUFFER7_NV;
		int DRAW_BUFFER8_NV;
		int DRAW_BUFFER9_NV;
		int DRAW_BUFFER10_NV;
		int DRAW_BUFFER11_NV;
		int DRAW_BUFFER12_NV;
		int DRAW_BUFFER13_NV;
		int DRAW_BUFFER14_NV;
		int DRAW_BUFFER15_NV;
		int COLOR_ATTACHMENT0_NV;
		int COLOR_ATTACHMENT1_NV;
		int COLOR_ATTACHMENT2_NV;
		int COLOR_ATTACHMENT3_NV;
		int COLOR_ATTACHMENT4_NV;
		int COLOR_ATTACHMENT5_NV;
		int COLOR_ATTACHMENT6_NV;
		int COLOR_ATTACHMENT7_NV;
		int COLOR_ATTACHMENT8_NV;
		int COLOR_ATTACHMENT9_NV;
		int COLOR_ATTACHMENT10_NV;
		int COLOR_ATTACHMENT11_NV;
		int COLOR_ATTACHMENT12_NV;
		int COLOR_ATTACHMENT13_NV;
		int COLOR_ATTACHMENT14_NV;
		int COLOR_ATTACHMENT15_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_draw_buffers */ 
