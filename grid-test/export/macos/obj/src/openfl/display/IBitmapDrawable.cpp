// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace display{


static ::String IBitmapDrawable_obj_sMemberFields[] = {
	HX_("__blendMode",34,2d,64,3a),
	HX_("__isMask",16,71,ec,0d),
	HX_("__renderable",10,b7,2c,2b),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__transform",4c,76,bf,73),
	HX_("__worldAlpha",cc,d2,d6,c5),
	HX_("__worldColorTransform",5b,ce,21,a3),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__renderCairo",32,9e,42,55),
	HX_("__renderCairoMask",3e,0c,22,6b),
	HX_("__renderCanvas",ee,db,58,48),
	HX_("__renderCanvasMask",fa,d7,ef,51),
	HX_("__renderDOM",ac,f5,83,fb),
	HX_("__renderGL",1b,1e,14,56),
	HX_("__renderGLMask",a7,34,7c,b4),
	HX_("__update",29,f1,34,2f),
	HX_("__updateTransforms",10,f4,b0,50),
	HX_("__mask",0c,a4,4e,f7),
	HX_("__scrollRect",f1,56,fa,41),
	::String(null()) };

::hx::Class IBitmapDrawable_obj::__mClass;

void IBitmapDrawable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.IBitmapDrawable",cc,6b,fd,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IBitmapDrawable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc1c6fbe4 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
