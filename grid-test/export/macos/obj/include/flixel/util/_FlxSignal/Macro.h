// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_util__FlxSignal_Macro
#define INCLUDED_flixel_util__FlxSignal_Macro

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxSignal,Macro)

namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES Macro_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Macro_obj OBJ_;
		Macro_obj();

	public:
		enum { _hx_ClassId = 0x1b49bae7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxSignal.Macro")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util._FlxSignal.Macro"); }

		inline static ::hx::ObjectPtr< Macro_obj > __new() {
			::hx::ObjectPtr< Macro_obj > __this = new Macro_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Macro_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Macro_obj *__this = (Macro_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Macro_obj), false, "flixel.util._FlxSignal.Macro"));
			*(void **)__this = Macro_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Macro_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Macro",ec,df,43,96); }

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_Macro */ 
