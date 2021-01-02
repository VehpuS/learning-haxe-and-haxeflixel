// Generated by Haxe 4.1.4
#ifndef INCLUDED_flixel_system_VirtualInputData
#define INCLUDED_flixel_system_VirtualInputData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,VirtualInputData)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES VirtualInputData_obj : public  ::openfl::utils::ByteArrayData_obj
{
	public:
		typedef  ::openfl::utils::ByteArrayData_obj super;
		typedef VirtualInputData_obj OBJ_;
		VirtualInputData_obj();

	public:
		enum { _hx_ClassId = 0x6e35b434 };

		void __construct( ::Dynamic __o_length);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.VirtualInputData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.VirtualInputData"); }
		static ::hx::ObjectPtr< VirtualInputData_obj > __new( ::Dynamic __o_length);
		static ::hx::ObjectPtr< VirtualInputData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_length);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VirtualInputData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VirtualInputData",e9,97,59,fd); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_VirtualInputData */ 
