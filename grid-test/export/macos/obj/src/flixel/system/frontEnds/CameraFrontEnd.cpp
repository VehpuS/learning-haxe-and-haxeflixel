// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_10_new,"flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",10,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_51_add,"flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",51,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_66_remove,"flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",66,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_100_reset,"flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",100,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_123_flash,"flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",123,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_140_fade,"flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",140,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_157_shake,"flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",157,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_175_lock,"flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",175,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_217_render,"flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",217,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_235_unlock,"flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",235,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_262_update,"flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",262,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_277_resize,"flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",277,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_285_get_bgColor,"flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",285,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_289_set_bgColor,"flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",289,0x7a57d3ec)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void CameraFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_10_new)
HXLINE(  41)		this->_cameraRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  36)		this->useBufferLocking = false;
HXLINE(  30)		this->cameraResized =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  27)		this->cameraRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  24)		this->cameraAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  16)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 166)		::flixel::FlxCamera_obj::defaultCameras = this->list;
            	}

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return new CameraFrontEnd_obj; }

void *CameraFrontEnd_obj::_hx_vtable = 0;

Dynamic CameraFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraFrontEnd_obj > _hx_result = new CameraFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x683a772d;
}

 ::Dynamic CameraFrontEnd_obj::add( ::Dynamic NewCamera){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_51_add)
HXLINE(  52)		 ::flixel::FlxGame _hx_tmp = ::flixel::FlxG_obj::game;
HXDLIN(  52)		 ::openfl::display::Sprite NewCamera1 = ( ( ::flixel::FlxCamera)(NewCamera) )->flashSprite;
HXDLIN(  52)		_hx_tmp->addChildAt(NewCamera1,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer));
HXLINE(  53)		::flixel::FlxG_obj::cameras->list->push(NewCamera);
HXLINE(  54)		( ( ::flixel::FlxBasic)(NewCamera) )->ID = (::flixel::FlxG_obj::cameras->list->length - 1);
HXLINE(  55)		this->cameraAdded->dispatch(NewCamera);
HXLINE(  56)		return NewCamera;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add,return )

void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_66_remove)
HXLINE(  67)		int index = this->list->indexOf(Camera,null());
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		if (::hx::IsNotNull( Camera )) {
HXLINE(  68)			_hx_tmp = (index != -1);
            		}
            		else {
HXLINE(  68)			_hx_tmp = false;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  70)			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
HXLINE(  71)			this->list->removeRange(index,1);
            		}
            		else {
HXLINE(  75)			::flixel::FlxG_obj::log->advanced(HX_("FlxG.cameras.remove(): The camera you attempted to remove is not a part of the game.",63,6f,2b,31),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE(  76)			return;
            		}
HXLINE(  79)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			int _g1 = this->list->length;
HXDLIN(  81)			while((_g < _g1)){
HXLINE(  81)				_g = (_g + 1);
HXDLIN(  81)				int i = (_g - 1);
HXLINE(  83)				this->list->__get(i).StaticCast<  ::flixel::FlxCamera >()->ID = i;
            			}
            		}
HXLINE(  87)		if (Destroy) {
HXLINE(  88)			Camera->destroy();
            		}
HXLINE(  90)		this->cameraRemoved->dispatch(Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_100_reset)
HXLINE( 101)		while((this->list->length > 0)){
HXLINE( 102)			this->remove(this->list->__get(0).StaticCast<  ::flixel::FlxCamera >(),null());
            		}
HXLINE( 104)		if (::hx::IsNull( NewCamera )) {
HXLINE( 105)			NewCamera =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
            		}
HXLINE( 107)		::flixel::FlxG_obj::camera = ( ( ::flixel::FlxCamera)(this->add(NewCamera)) );
HXLINE( 108)		NewCamera->ID = 0;
HXLINE( 110)		::flixel::FlxCamera_obj::defaultCameras = this->list;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

void CameraFrontEnd_obj::flash(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-1);
            		Float Duration = __o_Duration.Default(1);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_123_flash)
HXDLIN( 123)		int _g = 0;
HXDLIN( 123)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 123)		while((_g < _g1->length)){
HXDLIN( 123)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 123)			_g = (_g + 1);
HXLINE( 125)			camera->flash(Color,Duration,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

void CameraFrontEnd_obj::fade(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration,::hx::Null< bool >  __o_FadeIn, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-16777216);
            		Float Duration = __o_Duration.Default(1);
            		bool FadeIn = __o_FadeIn.Default(false);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_140_fade)
HXDLIN( 140)		int _g = 0;
HXDLIN( 140)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 140)		while((_g < _g1->length)){
HXDLIN( 140)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 140)			_g = (_g + 1);
HXLINE( 142)			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

void CameraFrontEnd_obj::shake(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force, ::flixel::util::FlxAxes Axes){
            		Float Intensity = __o_Intensity.Default(((Float)0.05));
            		Float Duration = __o_Duration.Default(((Float)0.5));
            		bool Force = __o_Force.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_157_shake)
HXDLIN( 157)		int _g = 0;
HXDLIN( 157)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 157)		while((_g < _g1->length)){
HXDLIN( 157)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 157)			_g = (_g + 1);
HXLINE( 159)			camera->shake(Intensity,Duration,OnComplete,Force,Axes);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

void CameraFrontEnd_obj::lock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_175_lock)
HXDLIN( 175)		int _g = 0;
HXDLIN( 175)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 175)		while((_g < _g1->length)){
HXDLIN( 175)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 175)			_g = (_g + 1);
HXLINE( 177)			bool _hx_tmp;
HXDLIN( 177)			bool _hx_tmp1;
HXDLIN( 177)			if (::hx::IsNotNull( camera )) {
HXLINE( 177)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 177)				_hx_tmp1 = true;
            			}
HXDLIN( 177)			if (!(_hx_tmp1)) {
HXLINE( 177)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 177)				_hx_tmp = true;
            			}
HXDLIN( 177)			if (_hx_tmp) {
HXLINE( 179)				continue;
            			}
HXLINE( 182)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 184)				camera->checkResize();
HXLINE( 186)				if (this->useBufferLocking) {
HXLINE( 188)					camera->buffer->lock();
            				}
            			}
HXLINE( 192)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 194)				camera->clearDrawStack();
HXLINE( 195)				camera->canvas->get_graphics()->clear();
HXLINE( 198)				camera->debugLayer->get_graphics()->clear();
            			}
HXLINE( 202)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 204)				camera->fill(camera->bgColor,camera->useBgAlphaBlending,null(),null());
HXLINE( 205)				camera->screen->dirty = true;
            			}
            			else {
HXLINE( 209)				camera->fill((camera->bgColor & 16777215),camera->useBgAlphaBlending,(( (Float)(((camera->bgColor >> 24) & 255)) ) / ( (Float)(255) )),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

void CameraFrontEnd_obj::render(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_217_render)
HXDLIN( 217)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 219)			int _g = 0;
HXDLIN( 219)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 219)			while((_g < _g1->length)){
HXLINE( 219)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 219)				_g = (_g + 1);
HXLINE( 221)				bool _hx_tmp;
HXDLIN( 221)				bool _hx_tmp1;
HXDLIN( 221)				if (::hx::IsNotNull( camera )) {
HXLINE( 221)					_hx_tmp1 = camera->exists;
            				}
            				else {
HXLINE( 221)					_hx_tmp1 = false;
            				}
HXDLIN( 221)				if (_hx_tmp1) {
HXLINE( 221)					_hx_tmp = camera->visible;
            				}
            				else {
HXLINE( 221)					_hx_tmp = false;
            				}
HXDLIN( 221)				if (_hx_tmp) {
HXLINE( 223)					camera->render();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

void CameraFrontEnd_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_235_unlock)
HXDLIN( 235)		int _g = 0;
HXDLIN( 235)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 235)		while((_g < _g1->length)){
HXDLIN( 235)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 235)			_g = (_g + 1);
HXLINE( 237)			bool _hx_tmp;
HXDLIN( 237)			bool _hx_tmp1;
HXDLIN( 237)			if (::hx::IsNotNull( camera )) {
HXLINE( 237)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 237)				_hx_tmp1 = true;
            			}
HXDLIN( 237)			if (!(_hx_tmp1)) {
HXLINE( 237)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 237)				_hx_tmp = true;
            			}
HXDLIN( 237)			if (_hx_tmp) {
HXLINE( 239)				continue;
            			}
HXLINE( 242)			camera->drawFX();
HXLINE( 244)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 246)				if (this->useBufferLocking) {
HXLINE( 248)					camera->buffer->unlock(null());
            				}
HXLINE( 251)				camera->screen->dirty = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

void CameraFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_262_update)
HXDLIN( 262)		int _g = 0;
HXDLIN( 262)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 262)		while((_g < _g1->length)){
HXDLIN( 262)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 262)			_g = (_g + 1);
HXLINE( 264)			bool _hx_tmp;
HXDLIN( 264)			bool _hx_tmp1;
HXDLIN( 264)			if (::hx::IsNotNull( camera )) {
HXLINE( 264)				_hx_tmp1 = camera->exists;
            			}
            			else {
HXLINE( 264)				_hx_tmp1 = false;
            			}
HXDLIN( 264)			if (_hx_tmp1) {
HXLINE( 264)				_hx_tmp = camera->active;
            			}
            			else {
HXLINE( 264)				_hx_tmp = false;
            			}
HXDLIN( 264)			if (_hx_tmp) {
HXLINE( 266)				camera->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

void CameraFrontEnd_obj::resize(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_277_resize)
HXDLIN( 277)		int _g = 0;
HXDLIN( 277)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 277)		while((_g < _g1->length)){
HXDLIN( 277)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 277)			_g = (_g + 1);
HXLINE( 279)			camera->onResize();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

int CameraFrontEnd_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_285_get_bgColor)
HXDLIN( 285)		if (::hx::IsNull( ::flixel::FlxG_obj::camera )) {
HXDLIN( 285)			return -16777216;
            		}
            		else {
HXDLIN( 285)			return ::flixel::FlxG_obj::camera->bgColor;
            		}
HXDLIN( 285)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor(int Color){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_289_set_bgColor)
HXLINE( 290)		{
HXLINE( 290)			int _g = 0;
HXDLIN( 290)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 290)			while((_g < _g1->length)){
HXLINE( 290)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 290)				_g = (_g + 1);
HXLINE( 292)				camera->bgColor = Color;
            			}
            		}
HXLINE( 295)		return Color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


::hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new() {
	::hx::ObjectPtr< CameraFrontEnd_obj > __this = new CameraFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CameraFrontEnd_obj *__this = (CameraFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraFrontEnd_obj), true, "flixel.system.frontEnds.CameraFrontEnd"));
	*(void **)__this = CameraFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_MARK_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_MARK_MEMBER_NAME(cameraResized,"cameraResized");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_VISIT_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_VISIT_MEMBER_NAME(cameraResized,"cameraResized");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

::hx::Val CameraFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"fade") ) { return ::hx::Val( fade_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"flash") ) { return ::hx::Val( flash_dyn() ); }
		if (HX_FIELD_EQ(inName,"shake") ) { return ::hx::Val( shake_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return ::hx::Val( unlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bgColor() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { return ::hx::Val( cameraAdded ); }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return ::hx::Val( _cameraRect ); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return ::hx::Val( get_bgColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return ::hx::Val( set_bgColor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { return ::hx::Val( cameraRemoved ); }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { return ::hx::Val( cameraResized ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return ::hx::Val( useBufferLocking ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CameraFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bgColor(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { cameraAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { cameraRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { cameraResized=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("bgColor",5e,81,83,f7));
	outFields->push(HX_("cameraAdded",db,c7,89,10));
	outFields->push(HX_("cameraRemoved",7b,4f,fd,fa));
	outFields->push(HX_("cameraResized",cb,8b,70,6b));
	outFields->push(HX_("useBufferLocking",f0,43,3c,76));
	outFields->push(HX_("_cameraRect",88,43,4f,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CameraFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CameraFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraAdded),HX_("cameraAdded",db,c7,89,10)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraRemoved),HX_("cameraRemoved",7b,4f,fd,fa)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraResized),HX_("cameraResized",cb,8b,70,6b)},
	{::hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_("useBufferLocking",f0,43,3c,76)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_("_cameraRect",88,43,4f,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CameraFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraFrontEnd_obj_sMemberFields[] = {
	HX_("list",5e,1c,b3,47),
	HX_("cameraAdded",db,c7,89,10),
	HX_("cameraRemoved",7b,4f,fd,fa),
	HX_("cameraResized",cb,8b,70,6b),
	HX_("useBufferLocking",f0,43,3c,76),
	HX_("_cameraRect",88,43,4f,84),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("reset",cf,49,c8,e6),
	HX_("flash",b0,35,8c,02),
	HX_("fade",7c,b5,b5,43),
	HX_("shake",c6,de,1c,7c),
	HX_("lock",eb,9b,b7,47),
	HX_("render",56,6b,29,05),
	HX_("unlock",c4,a2,8c,65),
	HX_("update",09,86,05,87),
	HX_("resize",f4,59,7b,08),
	HX_("get_bgColor",75,e1,7d,7d),
	HX_("set_bgColor",81,e8,ea,87),
	::String(null()) };

::hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	CameraFrontEnd_obj _hx_dummy;
	CameraFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.CameraFrontEnd",31,94,3d,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CameraFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CameraFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
