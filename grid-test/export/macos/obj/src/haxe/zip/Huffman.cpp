// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
namespace haxe{
namespace zip{

::haxe::zip::Huffman Huffman_obj::Found(int i)
{
	return ::hx::CreateEnum< Huffman_obj >(HX_("Found",22,72,c4,97),0,1)->_hx_init(0,i);
}

::haxe::zip::Huffman Huffman_obj::NeedBit( ::haxe::zip::Huffman left, ::haxe::zip::Huffman right)
{
	return ::hx::CreateEnum< Huffman_obj >(HX_("NeedBit",f7,fd,59,77),1,2)->_hx_init(0,left)->_hx_init(1,right);
}

::haxe::zip::Huffman Huffman_obj::NeedBits(int n,::Array< ::Dynamic> table)
{
	return ::hx::CreateEnum< Huffman_obj >(HX_("NeedBits",9c,3a,64,f7),2,2)->_hx_init(0,n)->_hx_init(1,table);
}

bool Huffman_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Found",22,72,c4,97)) { outValue = Huffman_obj::Found_dyn(); return true; }
	if (inName==HX_("NeedBit",f7,fd,59,77)) { outValue = Huffman_obj::NeedBit_dyn(); return true; }
	if (inName==HX_("NeedBits",9c,3a,64,f7)) { outValue = Huffman_obj::NeedBits_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Huffman_obj)

int Huffman_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Found",22,72,c4,97)) return 0;
	if (inName==HX_("NeedBit",f7,fd,59,77)) return 1;
	if (inName==HX_("NeedBits",9c,3a,64,f7)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Huffman_obj,Found,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Huffman_obj,NeedBit,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Huffman_obj,NeedBits,return)

int Huffman_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Found",22,72,c4,97)) return 1;
	if (inName==HX_("NeedBit",f7,fd,59,77)) return 2;
	if (inName==HX_("NeedBits",9c,3a,64,f7)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Huffman_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Found",22,72,c4,97)) return Found_dyn();
	if (inName==HX_("NeedBit",f7,fd,59,77)) return NeedBit_dyn();
	if (inName==HX_("NeedBits",9c,3a,64,f7)) return NeedBits_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Huffman_obj_sStaticFields[] = {
	HX_("Found",22,72,c4,97),
	HX_("NeedBit",f7,fd,59,77),
	HX_("NeedBits",9c,3a,64,f7),
	::String(null())
};

::hx::Class Huffman_obj::__mClass;

Dynamic __Create_Huffman_obj() { return new Huffman_obj; }

void Huffman_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.zip.Huffman",38,d8,1f,47), ::hx::TCanCast< Huffman_obj >,Huffman_obj_sStaticFields,0,
	&__Create_Huffman_obj, &__Create,
	&super::__SGetClass(), &CreateHuffman_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Huffman_obj::__GetStatic;
}

void Huffman_obj::__boot()
{
}


} // end namespace haxe
} // end namespace zip
