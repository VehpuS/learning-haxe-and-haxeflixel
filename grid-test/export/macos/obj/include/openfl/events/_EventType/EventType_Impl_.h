// Generated by Haxe 4.1.4
#ifndef INCLUDED_openfl_events__EventType_EventType_Impl_
#define INCLUDED_openfl_events__EventType_EventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,events,_EventType,EventType_Impl_)

namespace openfl{
namespace events{
namespace _EventType{


class HXCPP_CLASS_ATTRIBUTES EventType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventType_Impl__obj OBJ_;
		EventType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x73749af6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.events._EventType.EventType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.events._EventType.EventType_Impl_"); }

		inline static ::hx::ObjectPtr< EventType_Impl__obj > __new() {
			::hx::ObjectPtr< EventType_Impl__obj > __this = new EventType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventType_Impl__obj *__this = (EventType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventType_Impl__obj), false, "openfl.events._EventType.EventType_Impl_"));
			*(void **)__this = EventType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventType_Impl_",74,af,ce,94); }

		static bool equals(::String a,::String b);
		static ::Dynamic equals_dyn();

		static bool notEquals(::String a,::String b);
		static ::Dynamic notEquals_dyn();

};

} // end namespace openfl
} // end namespace events
} // end namespace _EventType

#endif /* INCLUDED_openfl_events__EventType_EventType_Impl_ */ 
