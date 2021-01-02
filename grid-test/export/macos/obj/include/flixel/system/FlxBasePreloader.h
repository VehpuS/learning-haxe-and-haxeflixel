// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_system_FlxBasePreloader
#define INCLUDED_flixel_system_FlxBasePreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader
#include <flixel/system/_FlxBasePreloader/DefaultPreloader.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,FlxBasePreloader)
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxBasePreloader,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxBasePreloader_obj : public  ::flixel::_hx_system::_FlxBasePreloader::DefaultPreloader_obj
{
	public:
		typedef  ::flixel::_hx_system::_FlxBasePreloader::DefaultPreloader_obj super;
		typedef FlxBasePreloader_obj OBJ_;
		FlxBasePreloader_obj();

	public:
		enum { _hx_ClassId = 0x2f28d986 };

		void __construct(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxBasePreloader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.FlxBasePreloader"); }
		static ::hx::ObjectPtr< FlxBasePreloader_obj > __new(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static ::hx::ObjectPtr< FlxBasePreloader_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBasePreloader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBasePreloader",73,da,54,5d); }

		static void __boot();
		static ::String LOCAL;
		Float minDisplayTime;
		::Array< ::String > allowedURLs;
		int siteLockURLIndex;
		::String siteLockTitleText;
		::String siteLockBodyText;
		Float _percent;
		int _width;
		int _height;
		bool _loaded;
		bool _urlChecked;
		bool _destroyed;
		Float _startTime;
		virtual void create();
		::Dynamic create_dyn();

		void onInit();

		void onUpdate(int bytesLoaded,int bytesTotal);

		void onEnterFrame( ::openfl::events::Event E);
		::Dynamic onEnterFrame_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual void update(Float Percent);
		::Dynamic update_dyn();

		void onLoaded();

		 ::openfl::display::Bitmap createBitmap(::hx::Class bitmapDataClass, ::Dynamic onLoad);
		::Dynamic createBitmap_dyn();

		 ::openfl::display::BitmapData loadBitmapData(::hx::Class bitmapDataClass, ::Dynamic onLoad);
		::Dynamic loadBitmapData_dyn();

		void checkSiteLock();
		::Dynamic checkSiteLock_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxBasePreloader */ 
