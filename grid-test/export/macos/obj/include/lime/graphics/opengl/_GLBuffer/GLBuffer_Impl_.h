// Generated by Haxe 4.1.4
#ifndef INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_
#define INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLBuffer,GLBuffer_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLBuffer{


class HXCPP_CLASS_ATTRIBUTES GLBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLBuffer_Impl__obj OBJ_;
		GLBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x74fd3192 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLBuffer.GLBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLBuffer.GLBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< GLBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< GLBuffer_Impl__obj > __this = new GLBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLBuffer_Impl__obj *__this = (GLBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLBuffer_Impl__obj), false, "lime.graphics.opengl._GLBuffer.GLBuffer_Impl_"));
			*(void **)__this = GLBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLBuffer_Impl_",65,67,13,98); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLBuffer

#endif /* INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_ */ 
