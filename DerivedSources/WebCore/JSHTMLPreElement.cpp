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
#include "JSHTMLPreElement.h"

#include "HTMLNames.h"
#include "HTMLPreElement.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLPreElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLPreElementTableValues[4] =
{
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLPreElementWidth), (intptr_t)setJSHTMLPreElementWidth THUNK_GENERATOR(0) },
    { "wrap", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLPreElementWrap), (intptr_t)setJSHTMLPreElementWrap THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLPreElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLPreElementTable = { 9, 7, JSHTMLPreElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLPreElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLPreElementConstructorTable = { 1, 0, JSHTMLPreElementConstructorTableValues, 0 };
class JSHTMLPreElementConstructor : public DOMConstructorObject {
public:
    JSHTMLPreElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLPreElementConstructor::s_info = { "HTMLPreElementConstructor", &DOMConstructorObject::s_info, &JSHTMLPreElementConstructorTable, 0 };

JSHTMLPreElementConstructor::JSHTMLPreElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLPreElementConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLPreElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLPreElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLPreElementConstructor, DOMObject>(exec, &JSHTMLPreElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLPreElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLPreElementConstructor, DOMObject>(exec, &JSHTMLPreElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLPreElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLPreElementPrototypeTable = { 1, 0, JSHTMLPreElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLPreElementPrototype::s_info = { "HTMLPreElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLPreElementPrototypeTable, 0 };

JSObject* JSHTMLPreElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLPreElement>(exec, globalObject);
}

const ClassInfo JSHTMLPreElement::s_info = { "HTMLPreElement", &JSHTMLElement::s_info, &JSHTMLPreElementTable, 0 };

JSHTMLPreElement::JSHTMLPreElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLPreElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLPreElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLPreElementPrototype(globalObject, JSHTMLPreElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLPreElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLPreElement, Base>(exec, &JSHTMLPreElementTable, this, propertyName, slot);
}

bool JSHTMLPreElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLPreElement, Base>(exec, &JSHTMLPreElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLPreElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLPreElement* castedThis = static_cast<JSHTMLPreElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLPreElement* imp = static_cast<HTMLPreElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->getIntegralAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}

JSValue jsHTMLPreElementWrap(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLPreElement* castedThis = static_cast<JSHTMLPreElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLPreElement* imp = static_cast<HTMLPreElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::wrapAttr));
    return result;
}

JSValue jsHTMLPreElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLPreElement* domObject = static_cast<JSHTMLPreElement*>(asObject(slotBase));
    return JSHTMLPreElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLPreElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLPreElement, Base>(exec, propertyName, value, &JSHTMLPreElementTable, this, slot);
}

void setJSHTMLPreElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLPreElement* castedThis = static_cast<JSHTMLPreElement*>(thisObject);
    HTMLPreElement* imp = static_cast<HTMLPreElement*>(castedThis->impl());
    imp->setIntegralAttribute(WebCore::HTMLNames::widthAttr, value.toInt32(exec));
}

void setJSHTMLPreElementWrap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLPreElement* castedThis = static_cast<JSHTMLPreElement*>(thisObject);
    HTMLPreElement* imp = static_cast<HTMLPreElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::wrapAttr, value.toBoolean(exec));
}

JSValue JSHTMLPreElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLPreElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}