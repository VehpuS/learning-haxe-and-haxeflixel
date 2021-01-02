// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_system_FlxVersion
#define INCLUDED_flixel_system_FlxVersion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0b1354451da86295_15_new)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxVersion)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxVersion_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxVersion_obj OBJ_;
		FlxVersion_obj();

	public:
		enum { _hx_ClassId = 0x07c022f1 };

		void __construct(int Major,int Minor,int Patch);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.FlxVersion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.FlxVersion"); }

		inline static ::hx::ObjectPtr< FlxVersion_obj > __new(int Major,int Minor,int Patch) {
			::hx::ObjectPtr< FlxVersion_obj > __this = new FlxVersion_obj();
			__this->__construct(Major,Minor,Patch);
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxVersion_obj > __alloc(::hx::Ctx *_hx_ctx,int Major,int Minor,int Patch) {
			FlxVersion_obj *__this = (FlxVersion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxVersion_obj), false, "flixel.system.FlxVersion"));
			*(void **)__this = FlxVersion_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0b1354451da86295_15_new)
HXLINE(  16)		( ( ::flixel::_hx_system::FlxVersion)(__this) )->major = Major;
HXLINE(  17)		( ( ::flixel::_hx_system::FlxVersion)(__this) )->minor = Minor;
HXLINE(  18)		( ( ::flixel::_hx_system::FlxVersion)(__this) )->patch = Patch;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxVersion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxVersion",e6,a0,1d,ac); }

		static void __boot();
		static  ::Dynamic sha;
		int major;
		int minor;
		int patch;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxVersion */ 
