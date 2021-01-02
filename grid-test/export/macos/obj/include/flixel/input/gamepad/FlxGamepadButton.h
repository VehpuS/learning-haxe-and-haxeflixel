// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#define INCLUDED_flixel_input_gamepad_FlxGamepadButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)

namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadButton_obj : public  ::flixel::input::FlxInput_obj
{
	public:
		typedef  ::flixel::input::FlxInput_obj super;
		typedef FlxGamepadButton_obj OBJ_;
		FlxGamepadButton_obj();

	public:
		enum { _hx_ClassId = 0x21c9947c };

		void __construct(int ID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepadButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.FlxGamepadButton"); }
		static ::hx::ObjectPtr< FlxGamepadButton_obj > __new(int ID);
		static ::hx::ObjectPtr< FlxGamepadButton_obj > __alloc(::hx::Ctx *_hx_ctx,int ID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGamepadButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGamepadButton",c1,6d,24,d3); }

		Float value;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadButton */ 
