// Generated by Haxe 4.1.4
#ifndef INCLUDED_openfl_utils_IDataOutput
#define INCLUDED_openfl_utils_IDataOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES IDataOutput_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (::hx::Object :: *_hx_get_endian)(); 
		static inline  ::Dynamic get_endian( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_get_endian)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_endian)( ::Dynamic value); 
		static inline  ::Dynamic set_endian( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_set_endian)(value);
		}
		void (::hx::Object :: *_hx_writeBoolean)(bool value); 
		static inline void writeBoolean( ::Dynamic _hx_,bool value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeBoolean)(value);
		}
		void (::hx::Object :: *_hx_writeByte)(int value); 
		static inline void writeByte( ::Dynamic _hx_,int value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeByte)(value);
		}
		void (::hx::Object :: *_hx_writeBytes)( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length); 
		static inline void writeBytes( ::Dynamic _hx_, ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeBytes)(bytes,offset,length);
		}
		void (::hx::Object :: *_hx_writeDouble)(Float value); 
		static inline void writeDouble( ::Dynamic _hx_,Float value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeDouble)(value);
		}
		void (::hx::Object :: *_hx_writeFloat)(Float value); 
		static inline void writeFloat( ::Dynamic _hx_,Float value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeFloat)(value);
		}
		void (::hx::Object :: *_hx_writeInt)(int value); 
		static inline void writeInt( ::Dynamic _hx_,int value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeInt)(value);
		}
		void (::hx::Object :: *_hx_writeMultiByte)(::String value,::String charSet); 
		static inline void writeMultiByte( ::Dynamic _hx_,::String value,::String charSet) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeMultiByte)(value,charSet);
		}
		void (::hx::Object :: *_hx_writeObject)( ::Dynamic object); 
		static inline void writeObject( ::Dynamic _hx_, ::Dynamic object) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeObject)(object);
		}
		void (::hx::Object :: *_hx_writeShort)(int value); 
		static inline void writeShort( ::Dynamic _hx_,int value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeShort)(value);
		}
		void (::hx::Object :: *_hx_writeUnsignedInt)(int value); 
		static inline void writeUnsignedInt( ::Dynamic _hx_,int value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeUnsignedInt)(value);
		}
		void (::hx::Object :: *_hx_writeUTF)(::String value); 
		static inline void writeUTF( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeUTF)(value);
		}
		void (::hx::Object :: *_hx_writeUTFBytes)(::String value); 
		static inline void writeUTFBytes( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x948d2d33)))->_hx_writeUTFBytes)(value);
		}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_IDataOutput */ 
