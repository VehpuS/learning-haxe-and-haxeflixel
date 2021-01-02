// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_Deflate
#include <lime/_internal/format/Deflate.h>
#endif
#ifndef INCLUDED_lime__internal_format_GZip
#include <lime/_internal/format/GZip.h>
#endif
#ifndef INCLUDED_lime__internal_format_LZMA
#include <lime/_internal/format/LZMA.h>
#endif
#ifndef INCLUDED_lime__internal_format_Zlib
#include <lime/_internal/format/Zlib.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_utils_Bytes
#include <lime/net/_HTTPRequest_lime_utils_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_18__new,"lime.utils._Bytes.Bytes_Impl_","_new",0x0e8a4e50,"lime.utils._Bytes.Bytes_Impl_._new","lime/utils/Bytes.hx",18,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_34_alloc,"lime.utils._Bytes.Bytes_Impl_","alloc",0xcffa3ca6,"lime.utils._Bytes.Bytes_Impl_.alloc","lime/utils/Bytes.hx",34,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_39_compress,"lime.utils._Bytes.Bytes_Impl_","compress",0xf1eb2411,"lime.utils._Bytes.Bytes_Impl_.compress","lime/utils/Bytes.hx",39,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_60_decompress,"lime.utils._Bytes.Bytes_Impl_","decompress",0x10439e52,"lime.utils._Bytes.Bytes_Impl_.decompress","lime/utils/Bytes.hx",60,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_81_fastGet,"lime.utils._Bytes.Bytes_Impl_","fastGet",0xe584c5cb,"lime.utils._Bytes.Bytes_Impl_.fastGet","lime/utils/Bytes.hx",81,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_85_fromBytes,"lime.utils._Bytes.Bytes_Impl_","fromBytes",0x6a55f752,"lime.utils._Bytes.Bytes_Impl_.fromBytes","lime/utils/Bytes.hx",85,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_92_fromFile,"lime.utils._Bytes.Bytes_Impl_","fromFile",0x0fb37975,"lime.utils._Bytes.Bytes_Impl_.fromFile","lime/utils/Bytes.hx",92,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_108_loadFromBytes,"lime.utils._Bytes.Bytes_Impl_","loadFromBytes",0x2f7a74cc,"lime.utils._Bytes.Bytes_Impl_.loadFromBytes","lime/utils/Bytes.hx",108,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_112_loadFromFile,"lime.utils._Bytes.Bytes_Impl_","loadFromFile",0xcbb4c93b,"lime.utils._Bytes.Bytes_Impl_.loadFromFile","lime/utils/Bytes.hx",112,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_118_ofData,"lime.utils._Bytes.Bytes_Impl_","ofData",0x35174d90,"lime.utils._Bytes.Bytes_Impl_.ofData","lime/utils/Bytes.hx",118,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_124_ofString,"lime.utils._Bytes.Bytes_Impl_","ofString",0x125d45b7,"lime.utils._Bytes.Bytes_Impl_.ofString","lime/utils/Bytes.hx",124,0x9fbf972b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ebd2a3b5b6c79d1_131___fromNativePointer,"lime.utils._Bytes.Bytes_Impl_","__fromNativePointer",0x287bf4ed,"lime.utils._Bytes.Bytes_Impl_.__fromNativePointer","lime/utils/Bytes.hx",131,0x9fbf972b)
namespace lime{
namespace utils{
namespace _Bytes{

void Bytes_Impl__obj::__construct() { }

Dynamic Bytes_Impl__obj::__CreateEmpty() { return new Bytes_Impl__obj; }

void *Bytes_Impl__obj::_hx_vtable = 0;

Dynamic Bytes_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bytes_Impl__obj > _hx_result = new Bytes_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Bytes_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0007f847;
}

 ::haxe::io::Bytes Bytes_Impl__obj::_new(int length,::Array< unsigned char > bytesData){
            	HX_GC_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_18__new)
HXDLIN(  18)		 ::haxe::io::Bytes this1 =  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,length,bytesData);
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,_new,return )

 ::haxe::io::Bytes Bytes_Impl__obj::alloc(int length){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_34_alloc)
HXDLIN(  34)		return ::haxe::io::Bytes_obj::alloc(length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,alloc,return )

 ::haxe::io::Bytes Bytes_Impl__obj::compress( ::haxe::io::Bytes this1, ::lime::utils::CompressionAlgorithm algorithm){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_39_compress)
HXDLIN(  39)		switch((int)(algorithm->_hx_getIndex())){
            			case (int)0: {
HXLINE(  42)				return ::lime::_internal::format::Deflate_obj::compress(this1);
            			}
            			break;
            			case (int)1: {
HXLINE(  45)				return ::lime::_internal::format::GZip_obj::compress(this1);
            			}
            			break;
            			case (int)2: {
HXLINE(  48)				return ::lime::_internal::format::LZMA_obj::compress(this1);
            			}
            			break;
            			case (int)3: {
HXLINE(  51)				return ::lime::_internal::format::Zlib_obj::compress(this1);
            			}
            			break;
            		}
HXLINE(  39)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,compress,return )

 ::haxe::io::Bytes Bytes_Impl__obj::decompress( ::haxe::io::Bytes this1, ::lime::utils::CompressionAlgorithm algorithm){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_60_decompress)
HXDLIN(  60)		switch((int)(algorithm->_hx_getIndex())){
            			case (int)0: {
HXLINE(  63)				return ::lime::_internal::format::Deflate_obj::decompress(this1);
            			}
            			break;
            			case (int)1: {
HXLINE(  66)				return ::lime::_internal::format::GZip_obj::decompress(this1);
            			}
            			break;
            			case (int)2: {
HXLINE(  69)				return ::lime::_internal::format::LZMA_obj::decompress(this1);
            			}
            			break;
            			case (int)3: {
HXLINE(  72)				return ::lime::_internal::format::Zlib_obj::decompress(this1);
            			}
            			break;
            		}
HXLINE(  60)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,decompress,return )

int Bytes_Impl__obj::fastGet(::Array< unsigned char > b,int pos){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_81_fastGet)
HXDLIN(  81)		return ( (int)(_hx_array_unsafe_get(b,pos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,fastGet,return )

 ::haxe::io::Bytes Bytes_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_85_fromBytes)
HXLINE(  86)		if (::hx::IsNull( bytes )) {
HXLINE(  86)			return null();
            		}
HXLINE(  88)		return ::lime::utils::_Bytes::Bytes_Impl__obj::_new(bytes->length,bytes->b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Bytes_Impl__obj::fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_92_fromFile)
HXLINE(  95)		 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc(0);
HXLINE(  96)		::lime::_internal::backend::native::NativeCFFI_obj::lime_bytes_read_file(path,::hx::DynamicPtr(bytes));
HXLINE(  97)		if ((bytes->length > 0)) {
HXLINE(  97)			return bytes;
            		}
HXLINE( 103)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,fromFile,return )

 ::lime::app::Future Bytes_Impl__obj::loadFromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_108_loadFromBytes)
HXDLIN( 108)		return ::lime::app::Future_obj::withValue(::lime::utils::_Bytes::Bytes_Impl__obj::fromBytes(bytes));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,loadFromBytes,return )

 ::lime::app::Future Bytes_Impl__obj::loadFromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_112_loadFromFile)
HXLINE( 113)		 ::lime::net::_HTTPRequest_lime_utils_Bytes request =  ::lime::net::_HTTPRequest_lime_utils_Bytes_obj::__alloc( HX_CTX ,null());
HXLINE( 114)		return request->load(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,loadFromFile,return )

 ::haxe::io::Bytes Bytes_Impl__obj::ofData(::Array< unsigned char > b){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_118_ofData)
HXLINE( 119)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(b);
HXLINE( 120)		return ::lime::utils::_Bytes::Bytes_Impl__obj::_new(bytes->length,bytes->b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,ofData,return )

 ::haxe::io::Bytes Bytes_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_124_ofString)
HXLINE( 125)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s,null());
HXLINE( 126)		return ::lime::utils::_Bytes::Bytes_Impl__obj::_new(bytes->length,bytes->b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_Impl__obj,ofString,return )

 ::haxe::io::Bytes Bytes_Impl__obj::_hx___fromNativePointer( ::Dynamic data,int length){
            	HX_STACKFRAME(&_hx_pos_3ebd2a3b5b6c79d1_131___fromNativePointer)
HXLINE( 132)		 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc(0);
HXLINE( 133)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_bytes_from_data_pointer(( (Float)(data) ),length,::hx::DynamicPtr(bytes))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_Impl__obj,_hx___fromNativePointer,return )


Bytes_Impl__obj::Bytes_Impl__obj()
{
}

bool Bytes_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastGet") ) { outValue = fastGet_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__fromNativePointer") ) { outValue = _hx___fromNativePointer_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Bytes_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Bytes_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Bytes_Impl__obj::__mClass;

static ::String Bytes_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("alloc",75,a4,93,21),
	HX_("compress",a2,47,bf,83),
	HX_("decompress",23,88,14,da),
	HX_("fastGet",5a,ff,22,de),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("ofData",e1,ba,b8,49),
	HX_("ofString",48,69,31,a4),
	HX_("__fromNativePointer",fc,c8,91,68),
	::String(null())
};

void Bytes_Impl__obj::__register()
{
	Bytes_Impl__obj _hx_dummy;
	Bytes_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Bytes.Bytes_Impl_",df,cd,f1,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Bytes_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Bytes_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bytes_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bytes_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _Bytes
