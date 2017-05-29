/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGViewSpec.h"

#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGElement.h"
#include "JSSVGTransformList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGTransformList.h"
#include "SVGViewSpec.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGViewSpec);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGViewSpecTableValues[10] =
{
    { "transform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewTarget", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewBoxString", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewBoxString), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatioString", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecPreserveAspectRatioString), (intptr_t)0 THUNK_GENERATOR(0) },
    { "transformString", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecTransformString), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewTargetString", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewTargetString), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecPreserveAspectRatio), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGViewSpecTable = { 33, 31, JSSVGViewSpecTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGViewSpecConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGViewSpecConstructorTable = { 1, 0, JSSVGViewSpecConstructorTableValues, 0 };
class JSSVGViewSpecConstructor : public DOMConstructorObject {
public:
    JSSVGViewSpecConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGViewSpecConstructor::s_info = { "SVGViewSpecConstructor", &DOMConstructorObject::s_info, &JSSVGViewSpecConstructorTable, 0 };

JSSVGViewSpecConstructor::JSSVGViewSpecConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGViewSpecConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGViewSpecPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGViewSpecConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewSpecConstructor, DOMObject>(exec, &JSSVGViewSpecConstructorTable, this, propertyName, slot);
}

bool JSSVGViewSpecConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGViewSpecConstructor, DOMObject>(exec, &JSSVGViewSpecConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGViewSpecPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGViewSpecPrototypeTable = { 1, 0, JSSVGViewSpecPrototypeTableValues, 0 };
const ClassInfo JSSVGViewSpecPrototype::s_info = { "SVGViewSpecPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGViewSpecPrototypeTable, 0 };

JSObject* JSSVGViewSpecPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGViewSpec>(exec, globalObject);
}

const ClassInfo JSSVGViewSpec::s_info = { "SVGViewSpec", &JSSVGZoomAndPan::s_info, &JSSVGViewSpecTable, 0 };

JSSVGViewSpec::JSSVGViewSpec(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGViewSpec> impl)
    : JSSVGZoomAndPan(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGViewSpec::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGViewSpecPrototype(globalObject, JSSVGViewSpecPrototype::createStructure(exec->globalData(), JSSVGZoomAndPanPrototype::self(exec, globalObject)));
}

bool JSSVGViewSpec::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewSpec, Base>(exec, &JSSVGViewSpecTable, this, propertyName, slot);
}

bool JSSVGViewSpec::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGViewSpec, Base>(exec, &JSSVGViewSpecTable, this, propertyName, descriptor);
}

JSValue jsSVGViewSpecTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGTransformListPropertyTearOff::create(imp->transform())));
    return result;
}

JSValue jsSVGViewSpecViewTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->viewTarget()));
    return result;
}

JSValue jsSVGViewSpecViewBoxString(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    JSValue result = jsString(exec, imp->viewBoxString());
    return result;
}

JSValue jsSVGViewSpecPreserveAspectRatioString(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    JSValue result = jsString(exec, imp->preserveAspectRatioString());
    return result;
}

JSValue jsSVGViewSpecTransformString(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    JSValue result = jsString(exec, imp->transformString());
    return result;
}

JSValue jsSVGViewSpecViewTargetString(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    JSValue result = jsString(exec, imp->viewTargetString());
    return result;
}

JSValue jsSVGViewSpecViewBox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGViewSpecPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* castedThis = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec* imp = static_cast<SVGViewSpec*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

JSValue jsSVGViewSpecConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewSpec* domObject = static_cast<JSSVGViewSpec*>(asObject(slotBase));
    return JSSVGViewSpec::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGViewSpec::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGViewSpecConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)