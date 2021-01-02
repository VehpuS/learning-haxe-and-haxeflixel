// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_system_debug_Tooltip
#define INCLUDED_flixel_system_debug_Tooltip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,Tooltip)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,TooltipOverlay)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES Tooltip_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tooltip_obj OBJ_;
		Tooltip_obj();

	public:
		enum { _hx_ClassId = 0x38fca8fb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.debug.Tooltip")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.debug.Tooltip"); }

		inline static ::hx::ObjectPtr< Tooltip_obj > __new() {
			::hx::ObjectPtr< Tooltip_obj > __this = new Tooltip_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tooltip_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tooltip_obj *__this = (Tooltip_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tooltip_obj), false, "flixel.system.debug.Tooltip"));
			*(void **)__this = Tooltip_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tooltip_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tooltip",e3,d4,dd,37); }

		static void __boot();
		static ::Array< ::Dynamic> _tooltips;
		static  ::openfl::display::Sprite _container;
		static void init( ::openfl::display::Sprite container);
		static ::Dynamic init_dyn();

		static  ::flixel::_hx_system::debug::TooltipOverlay add( ::openfl::display::Sprite element,::String text);
		static ::Dynamic add_dyn();

		static bool remove( ::openfl::display::Sprite element);
		static ::Dynamic remove_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Tooltip */ 
