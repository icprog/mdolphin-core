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

#include "JSSVGLocatable.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "SVGElement.h"
#include "SVGLocatable.h"
#include "SVGMatrix.h"
#include "SVGRect.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLocatable);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLocatableTableValues[3] =
{
    { "nearestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLocatableNearestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "farthestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLocatableFarthestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLocatableTable = { 4, 3, JSSVGLocatableTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLocatablePrototypeTableValues[5] =
{
    { "getBBox", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGLocatablePrototypeFunctionGetBBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGLocatablePrototypeFunctionGetCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getScreenCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGLocatablePrototypeFunctionGetScreenCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getTransformToElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGLocatablePrototypeFunctionGetTransformToElement), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLocatablePrototypeTable = { 8, 7, JSSVGLocatablePrototypeTableValues, 0 };
const ClassInfo JSSVGLocatablePrototype::s_info = { "SVGLocatablePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGLocatablePrototypeTable, 0 };

JSObject* JSSVGLocatablePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLocatable>(exec, globalObject);
}

bool JSSVGLocatablePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGLocatablePrototypeTable, this, propertyName, slot);
}

bool JSSVGLocatablePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGLocatablePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGLocatable::s_info = { "SVGLocatable", &DOMObjectWithGlobalPointer::s_info, &JSSVGLocatableTable, 0 };

JSSVGLocatable::JSSVGLocatable(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGLocatable> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGLocatable::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGLocatablePrototype(globalObject, JSSVGLocatablePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGLocatable::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLocatable, Base>(exec, &JSSVGLocatableTable, this, propertyName, slot);
}

bool JSSVGLocatable::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLocatable, Base>(exec, &JSSVGLocatableTable, this, propertyName, descriptor);
}

JSValue jsSVGLocatableNearestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLocatable* castedThis = static_cast<JSSVGLocatable*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}

JSValue jsSVGLocatableFarthestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLocatable* castedThis = static_cast<JSSVGLocatable*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}

EncodedJSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetBBox(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGLocatable::s_info))
        return throwVMTypeError(exec);
    JSSVGLocatable* castedThis = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGLocatable::s_info))
        return throwVMTypeError(exec);
    JSSVGLocatable* castedThis = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetScreenCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGLocatable::s_info))
        return throwVMTypeError(exec);
    JSSVGLocatable* castedThis = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetTransformToElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGLocatable::s_info))
        return throwVMTypeError(exec);
    JSSVGLocatable* castedThis = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThis->impl());
    ExceptionCode ec = 0;
    SVGElement* element(toSVGElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getTransformToElement(element, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGLocatable* object)
{
    return getDOMObjectWrapper<JSSVGLocatable>(exec, globalObject, object);
}
SVGLocatable* toSVGLocatable(JSC::JSValue value)
{
    return value.inherits(&JSSVGLocatable::s_info) ? static_cast<JSSVGLocatable*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
