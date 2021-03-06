// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLVideoElementPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMActivityLogger.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLVideoElement.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8VideoPlaybackQuality.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "modules/mediasource/HTMLVideoElementMediaSource.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace HTMLVideoElementPartialV8Internal {
#ifdef MINIBLINK_NOT_IMPLEMENTED
static void getVideoPlaybackQualityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, WTF::getPtr(HTMLVideoElementMediaSource::getVideoPlaybackQuality(*impl)), impl);
}

static void getVideoPlaybackQualityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLVideoElementPartialV8Internal::getVideoPlaybackQualityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}
#endif

} // namespace HTMLVideoElementPartialV8Internal

void V8HTMLVideoElementPartial::installV8HTMLVideoElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    V8HTMLVideoElement::installV8HTMLVideoElementTemplate(functionTemplate, isolate);

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::mediaEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLVideoElement", v8::Local<v8::FunctionTemplate>(), V8HTMLVideoElement::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLVideoElement", v8::Local<v8::FunctionTemplate>(), V8HTMLVideoElement::internalFieldCount,
            0, 0,
            0, 0,
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
#ifdef MINIBLINK_NOT_IMPLEMENTED
    if (RuntimeEnabledFeatures::mediaSourceExperimentalEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getVideoPlaybackQualityMethodConfiguration = {
            "getVideoPlaybackQuality", HTMLVideoElementPartialV8Internal::getVideoPlaybackQualityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getVideoPlaybackQualityMethodConfiguration);
    }
#endif
}

void V8HTMLVideoElementPartial::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8HTMLVideoElement::preparePrototypeObject(isolate, prototypeObject, interfaceTemplate);
}

void V8HTMLVideoElementPartial::initialize()
{
    // Should be invoked from initModules.
    V8HTMLVideoElement::updateWrapperTypeInfo(
        &V8HTMLVideoElementPartial::installV8HTMLVideoElementTemplate,
        &V8HTMLVideoElementPartial::preparePrototypeObject);
}

} // namespace blink
