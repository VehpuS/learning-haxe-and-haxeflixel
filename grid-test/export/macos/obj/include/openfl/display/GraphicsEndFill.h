// Generated by Haxe 4.1.4
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#define INCLUDED_openfl_display_GraphicsEndFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,GraphicsEndFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsEndFill_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GraphicsEndFill_obj OBJ_;
		GraphicsEndFill_obj();

	public:
		enum { _hx_ClassId = 0x32fa8c21 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display.GraphicsEndFill")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display.GraphicsEndFill"); }
		static ::hx::ObjectPtr< GraphicsEndFill_obj > __new();
		static ::hx::ObjectPtr< GraphicsEndFill_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsEndFill_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("GraphicsEndFill",53,3e,c5,a5); }

		int _hx___graphicsDataType;
		int _hx___graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsEndFill */ 
