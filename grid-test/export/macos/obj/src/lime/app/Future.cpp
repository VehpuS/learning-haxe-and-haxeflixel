// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_ofEvents_T_Void
#include <lime/app/_Event_ofEvents_T_Void.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_76_new,"lime.app.Future","new",0xc0e3b2bb,"lime.app.Future.new","lime/app/Future.hx",76,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_123_onComplete,"lime.app.Future","onComplete",0x3a7dc3fd,"lime.app.Future.onComplete","lime/app/Future.hx",123,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_152_onError,"lime.app.Future","onError",0xb2071604,"lime.app.Future.onError","lime/app/Future.hx",152,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_181_onProgress,"lime.app.Future","onProgress",0x40e0baf1,"lime.app.Future.onProgress","lime/app/Future.hx",181,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_213_ready,"lime.app.Future","ready",0xd4cc0f7e,"lime.app.Future.ready","lime/app/Future.hx",213,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_242_result,"lime.app.Future","result",0x69b43162,"lime.app.Future.result","lime/app/Future.hx",242,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_261_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",261,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_280_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",280,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_108_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",108,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_105_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",105,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_109_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",109,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_110_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",110,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_296_withError,"lime.app.Future","withError",0xc7ddc87d,"lime.app.Future.withError","lime/app/Future.hx",296,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_309_withValue,"lime.app.Future","withValue",0x866c7c26,"lime.app.Future.withValue","lime/app/Future.hx",309,0x058e0853)
namespace lime{
namespace app{

void Future_obj::__construct( ::Dynamic work,::hx::Null< bool >  __o_async){
            		bool async = __o_async.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_76_new)
HXDLIN(  76)		if (::hx::IsNotNull( work )) {
HXLINE(  78)			if (async) {
HXLINE(  80)				 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE(  81)				promise->future = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  83)				::lime::app::_Future::FutureWork_obj::queue( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),promise)
            					->setFixed(1,HX_("work",d1,01,fd,4e),work)));
            			}
            			else {
HXLINE(  87)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  89)					this->value = work();
HXLINE(  90)					this->isComplete = true;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(   1)						{
HXLINE(   1)							null();
            						}
HXDLIN(   1)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  93)						{
HXLINE(  94)							this->error = e;
HXLINE(  95)							this->isError = true;
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}

Dynamic Future_obj::__CreateEmpty() { return new Future_obj; }

void *Future_obj::_hx_vtable = 0;

Dynamic Future_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Future_obj > _hx_result = new Future_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Future_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x795f2f0f;
}

 ::lime::app::Future Future_obj::onComplete( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_123_onComplete)
HXLINE( 124)		if (::hx::IsNotNull( listener )) {
HXLINE( 126)			if (this->isComplete) {
HXLINE( 128)				listener(this->value);
            			}
            			else {
HXLINE( 130)				if (!(this->isError)) {
HXLINE( 132)					if (::hx::IsNull( this->_hx___completeListeners )) {
HXLINE( 134)						this->_hx___completeListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 137)					this->_hx___completeListeners->push(listener);
            				}
            			}
            		}
HXLINE( 141)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

 ::lime::app::Future Future_obj::onError( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_152_onError)
HXLINE( 153)		if (::hx::IsNotNull( listener )) {
HXLINE( 155)			if (this->isError) {
HXLINE( 157)				listener(this->error);
            			}
            			else {
HXLINE( 159)				if (!(this->isComplete)) {
HXLINE( 161)					if (::hx::IsNull( this->_hx___errorListeners )) {
HXLINE( 163)						this->_hx___errorListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 166)					this->_hx___errorListeners->push(listener);
            				}
            			}
            		}
HXLINE( 170)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

 ::lime::app::Future Future_obj::onProgress( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_181_onProgress)
HXLINE( 182)		if (::hx::IsNotNull( listener )) {
HXLINE( 184)			if (::hx::IsNull( this->_hx___progressListeners )) {
HXLINE( 186)				this->_hx___progressListeners = ::Array_obj< ::Dynamic>::__new();
            			}
HXLINE( 189)			this->_hx___progressListeners->push(listener);
            		}
HXLINE( 192)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

 ::lime::app::Future Future_obj::ready(::hx::Null< int >  __o_waitTime){
            		int waitTime = __o_waitTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_213_ready)
HXDLIN( 213)		bool _hx_tmp;
HXDLIN( 213)		if (!(this->isComplete)) {
HXDLIN( 213)			_hx_tmp = this->isError;
            		}
            		else {
HXDLIN( 213)			_hx_tmp = true;
            		}
HXDLIN( 213)		if (_hx_tmp) {
HXLINE( 215)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
            		else {
HXLINE( 219)			int time = ::lime::_hx_system::System_obj::getTimer();
HXLINE( 220)			int end = (time + waitTime);
HXLINE( 222)			while(true){
HXLINE( 222)				bool _hx_tmp;
HXDLIN( 222)				bool _hx_tmp1;
HXDLIN( 222)				if (!(this->isComplete)) {
HXLINE( 222)					_hx_tmp1 = !(this->isError);
            				}
            				else {
HXLINE( 222)					_hx_tmp1 = false;
            				}
HXDLIN( 222)				if (_hx_tmp1) {
HXLINE( 222)					_hx_tmp = (time <= end);
            				}
            				else {
HXLINE( 222)					_hx_tmp = false;
            				}
HXDLIN( 222)				if (!(_hx_tmp)) {
HXLINE( 222)					goto _hx_goto_4;
            				}
HXLINE( 225)				::Sys_obj::sleep(((Float)0.01));
HXLINE( 228)				time = ::lime::_hx_system::System_obj::getTimer();
            			}
            			_hx_goto_4:;
HXLINE( 231)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 213)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,ready,return )

 ::Dynamic Future_obj::result(::hx::Null< int >  __o_waitTime){
            		int waitTime = __o_waitTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_242_result)
HXLINE( 243)		this->ready(waitTime);
HXLINE( 245)		if (this->isComplete) {
HXLINE( 247)			return this->value;
            		}
            		else {
HXLINE( 251)			return null();
            		}
HXLINE( 245)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,result,return )

 ::lime::app::Future Future_obj::then( ::Dynamic next){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_261_then)
HXDLIN( 261)		if (this->isComplete) {
HXLINE( 263)			return ( ( ::lime::app::Future)(next(this->value)) );
            		}
            		else {
HXLINE( 265)			if (this->isError) {
HXLINE( 267)				 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 268)				future->isError = true;
HXLINE( 269)				future->error = this->error;
HXLINE( 270)				return future;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,next, ::lime::app::Promise,promise) HXARGC(1)
            				void _hx_run( ::Dynamic val){
            					HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_280_then)
HXLINE( 281)					 ::lime::app::Future future = ( ( ::lime::app::Future)(next(val)) );
HXLINE( 282)					future->onError(promise->error_dyn());
HXLINE( 283)					future->onComplete(promise->complete_dyn());
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 274)				 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 276)				this->onError(promise->error_dyn());
HXLINE( 277)				this->onProgress(promise->progress_dyn());
HXLINE( 279)				this->onComplete( ::Dynamic(new _hx_Closure_0(next,promise)));
HXLINE( 286)				return promise->future;
            			}
            		}
HXLINE( 261)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

 ::lime::app::Future Future_obj::ofEvents( ::lime::app::_Event_ofEvents_T_Void onComplete, ::lime::app::_Event_Dynamic_Void onError, ::lime::app::_Event_Int_Int_Void onProgress){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_108_ofEvents)
HXLINE( 108)			promise->complete(data);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_105_ofEvents)
HXLINE( 106)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 108)		onComplete->add( ::Dynamic(new _hx_Closure_0(promise)),true,null());
HXLINE( 109)		if (::hx::IsNotNull( onError )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run( ::Dynamic error){
            				HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_109_ofEvents)
HXLINE( 109)				promise->error(error);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 109)			onError->add( ::Dynamic(new _hx_Closure_1(promise)),true,null());
            		}
HXLINE( 110)		if (::hx::IsNotNull( onProgress )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::lime::app::Promise,promise) HXARGC(2)
            			void _hx_run(int progress,int total){
            				HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_110_ofEvents)
HXLINE( 110)				promise->progress(progress,total);
            			}
            			HX_END_LOCAL_FUNC2((void))

HXLINE( 110)			onProgress->add( ::Dynamic(new _hx_Closure_2(promise)),true,null());
            		}
HXLINE( 112)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_obj,ofEvents,return )

 ::lime::app::Future Future_obj::withError( ::Dynamic error){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_296_withError)
HXLINE( 297)		 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 298)		future->isError = true;
HXLINE( 299)		future->error = error;
HXLINE( 300)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withError,return )

 ::lime::app::Future Future_obj::withValue( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_309_withValue)
HXLINE( 310)		 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 311)		future->isComplete = true;
HXLINE( 312)		future->value = value;
HXLINE( 313)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withValue,return )


::hx::ObjectPtr< Future_obj > Future_obj::__new( ::Dynamic work,::hx::Null< bool >  __o_async) {
	::hx::ObjectPtr< Future_obj > __this = new Future_obj();
	__this->__construct(work,__o_async);
	return __this;
}

::hx::ObjectPtr< Future_obj > Future_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic work,::hx::Null< bool >  __o_async) {
	Future_obj *__this = (Future_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Future_obj), true, "lime.app.Future"));
	*(void **)__this = Future_obj::_hx_vtable;
	__this->__construct(work,__o_async);
	return __this;
}

Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
}

::hx::Val Future_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return ::hx::Val( then_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return ::hx::Val( isError ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return ::hx::Val( isComplete ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return ::hx::Val( _hx___errorListeners ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return ::hx::Val( _hx___completeListeners ); }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return ::hx::Val( _hx___progressListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Future_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofEvents") ) { outValue = ofEvents_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"withError") ) { outValue = withError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"withValue") ) { outValue = withValue_dyn(); return true; }
	}
	return false;
}

::hx::Val Future_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { _hx___errorListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { _hx___completeListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { _hx___progressListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	outFields->push(HX_("isComplete",c3,12,77,fa));
	outFields->push(HX_("isError",7e,6f,af,0f));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("__completeListeners",66,0e,5a,85));
	outFields->push(HX_("__errorListeners",b7,4b,93,70));
	outFields->push(HX_("__progressListeners",f2,98,e2,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Future_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Future_obj,error),HX_("error",c8,cb,29,73)},
	{::hx::fsBool,(int)offsetof(Future_obj,isComplete),HX_("isComplete",c3,12,77,fa)},
	{::hx::fsBool,(int)offsetof(Future_obj,isError),HX_("isError",7e,6f,af,0f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Future_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Future_obj,_hx___completeListeners),HX_("__completeListeners",66,0e,5a,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Future_obj,_hx___errorListeners),HX_("__errorListeners",b7,4b,93,70)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Future_obj,_hx___progressListeners),HX_("__progressListeners",f2,98,e2,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Future_obj_sStaticStorageInfo = 0;
#endif

static ::String Future_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("isComplete",c3,12,77,fa),
	HX_("isError",7e,6f,af,0f),
	HX_("value",71,7f,b8,31),
	HX_("__completeListeners",66,0e,5a,85),
	HX_("__errorListeners",b7,4b,93,70),
	HX_("__progressListeners",f2,98,e2,78),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onError",29,6a,67,09),
	HX_("onProgress",ec,cb,e1,63),
	HX_("ready",63,a0,ba,e6),
	HX_("result",dd,68,84,08),
	HX_("then",dd,02,fc,4c),
	::String(null()) };

::hx::Class Future_obj::__mClass;

static ::String Future_obj_sStaticFields[] = {
	HX_("ofEvents",90,8f,6b,29),
	HX_("withError",e2,2f,17,f7),
	HX_("withValue",8b,e3,a5,b5),
	::String(null())
};

void Future_obj::__register()
{
	Future_obj _hx_dummy;
	Future_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app.Future",49,39,57,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Future_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Future_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Future_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Future_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Future_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
