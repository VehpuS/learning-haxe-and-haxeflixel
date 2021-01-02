// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Mover
#define INCLUDED_flixel_system_debug_interaction_tools_Mover

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Mover)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
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
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Mover_obj : public  ::flixel::_hx_system::debug::interaction::tools::Tool_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::interaction::tools::Tool_obj super;
		typedef Mover_obj OBJ_;
		Mover_obj();

	public:
		enum { _hx_ClassId = 0x67484b98 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Mover")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.Mover"); }
		static ::hx::ObjectPtr< Mover_obj > __new();
		static ::hx::ObjectPtr< Mover_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mover_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mover",21,3c,93,9f); }

		bool _dragging;
		 ::flixel::math::FlxPoint _lastCursorPosition;
		 ::flixel::_hx_system::debug::interaction::tools::Tool init( ::flixel::_hx_system::debug::interaction::Interaction brain);

		void update();

		void stopDragging();
		::Dynamic stopDragging_dyn();

		void startDragging();
		::Dynamic startDragging_dyn();

		void doDragging();
		::Dynamic doDragging_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Mover */ 
