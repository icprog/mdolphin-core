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
#include "JSMediaList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "MediaList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMediaList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaListTableValues[4] =
{
    { "mediaText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaListMediaText), (intptr_t)setJSMediaListMediaText THUNK_GENERATOR(0) },
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaListLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaListTable = { 9, 7, JSMediaListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaListConstructorTable = { 1, 0, JSMediaListConstructorTableValues, 0 };
class JSMediaListConstructor : public DOMConstructorObject {
public:
    JSMediaListConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSMediaListConstructor::s_info = { "MediaListConstructor", &DOMConstructorObject::s_info, &JSMediaListConstructorTable, 0 };

JSMediaListConstructor::JSMediaListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSMediaListConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSMediaListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSMediaListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaListConstructor, DOMObject>(exec, &JSMediaListConstructorTable, this, propertyName, slot);
}

bool JSMediaListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMediaListConstructor, DOMObject>(exec, &JSMediaListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaListPrototypeTableValues[4] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsMediaListPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "deleteMedium", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsMediaListPrototypeFunctionDeleteMedium), (intptr_t)1 THUNK_GENERATOR(0) },
    { "appendMedium", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsMediaListPrototypeFunctionAppendMedium), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaListPrototypeTable = { 8, 7, JSMediaListPrototypeTableValues, 0 };
const ClassInfo JSMediaListPrototype::s_info = { "MediaListPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSMediaListPrototypeTable, 0 };

JSObject* JSMediaListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaList>(exec, globalObject);
}

bool JSMediaListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSMediaListPrototypeTable, this, propertyName, slot);
}

bool JSMediaListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSMediaListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSMediaList::s_info = { "MediaList", &DOMObjectWithGlobalPointer::s_info, &JSMediaListTable, 0 };

JSMediaList::JSMediaList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaList> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSMediaList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSMediaListPrototype(globalObject, JSMediaListPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSMediaList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSMediaListTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSMediaList, Base>(exec, &JSMediaListTable, this, propertyName, slot);
}

bool JSMediaList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSMediaListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<MediaList*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSMediaList, Base>(exec, &JSMediaListTable, this, propertyName, descriptor);
}

bool JSMediaList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<MediaList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsMediaListMediaText(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaList* castedThis = static_cast<JSMediaList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaList* imp = static_cast<MediaList*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->mediaText());
    return result;
}

JSValue jsMediaListLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaList* castedThis = static_cast<JSMediaList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaList* imp = static_cast<MediaList*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}

JSValue jsMediaListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaList* domObject = static_cast<JSMediaList*>(asObject(slotBase));
    return JSMediaList::getConstructor(exec, domObject->globalObject());
}

void JSMediaList::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSMediaList, Base>(exec, propertyName, value, &JSMediaListTable, this, slot);
}

void setJSMediaListMediaText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSMediaList* castedThis = static_cast<JSMediaList*>(thisObject);
    MediaList* imp = static_cast<MediaList*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setMediaText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void JSMediaList::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<MediaList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSMediaList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaList::s_info))
        return throwVMTypeError(exec);
    JSMediaList* castedThis = static_cast<JSMediaList*>(asObject(thisValue));
    MediaList* imp = static_cast<MediaList*>(castedThis->impl());
    unsigned index(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsStringOrNull(exec, imp->item(index));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaListPrototypeFunctionDeleteMedium(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaList::s_info))
        return throwVMTypeError(exec);
    JSMediaList* castedThis = static_cast<JSMediaList*>(asObject(thisValue));
    MediaList* imp = static_cast<MediaList*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& oldMedium(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->deleteMedium(oldMedium, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaListPrototypeFunctionAppendMedium(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaList::s_info))
        return throwVMTypeError(exec);
    JSMediaList* castedThis = static_cast<JSMediaList*>(asObject(thisValue));
    MediaList* imp = static_cast<MediaList*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& newMedium(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->appendMedium(newMedium, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


JSValue JSMediaList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSMediaList* thisObj = static_cast<JSMediaList*>(asObject(slotBase));
    return jsStringOrNull(exec, thisObj->impl()->item(index));
}
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaList* object)
{
    return getDOMObjectWrapper<JSMediaList>(exec, globalObject, object);
}
MediaList* toMediaList(JSC::JSValue value)
{
    return value.inherits(&JSMediaList::s_info) ? static_cast<JSMediaList*>(asObject(value))->impl() : 0;
}

}