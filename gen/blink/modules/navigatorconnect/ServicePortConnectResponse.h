// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ServicePortConnectResponse_h
#define ServicePortConnectResponse_h

#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/ScriptValue.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT ServicePortConnectResponse {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ServicePortConnectResponse();

    bool hasAccept() const { return !m_accept.isNull(); }
    bool accept() const { return m_accept.get(); }
    void setAccept(bool value) { m_accept = value; }

    bool hasData() const { return !(m_data.isEmpty() || m_data.isNull() || m_data.isUndefined()); }
    ScriptValue data() const { return m_data; }
    void setData(ScriptValue value) { m_data = value; }

    bool hasName() const { return !m_name.isNull(); }
    String name() const { return m_name; }
    void setName(String value) { m_name = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_accept;
    ScriptValue m_data;
    String m_name;

    friend class V8ServicePortConnectResponse;
};

} // namespace blink

#endif // ServicePortConnectResponse_h
