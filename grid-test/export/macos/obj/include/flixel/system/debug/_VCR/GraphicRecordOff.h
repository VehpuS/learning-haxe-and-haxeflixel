// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRecordOff
#define INCLUDED_flixel_system_debug__VCR_GraphicRecordOff

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,_VCR,GraphicRecordOff)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace _VCR{


class HXCPP_CLASS_ATTRIBUTES GraphicRecordOff_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicRecordOff_obj OBJ_;
		GraphicRecordOff_obj();

	public:
		enum { _hx_ClassId = 0x12fe2664 };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug._VCR.GraphicRecordOff")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug._VCR.GraphicRecordOff"); }
		static ::hx::ObjectPtr< GraphicRecordOff_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static ::hx::ObjectPtr< GraphicRecordOff_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicRecordOff_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicRecordOff",b6,51,bf,4a); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR

#endif /* INCLUDED_flixel_system_debug__VCR_GraphicRecordOff */ 
