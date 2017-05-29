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
#include "JSNode.h"

#include "Document.h"
#include "Element.h"
#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "JSElement.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSNamedNodeMap.h"
#include "JSNode.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "NamedNodeMap.h"
#include "Node.h"
#include "NodeList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeTableValues[19] =
{
    { "nodeName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNodeName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nodeValue", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNodeValue), (intptr_t)setJSNodeNodeValue THUNK_GENERATOR(0) },
    { "nodeType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNodeType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "parentNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeParentNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "childNodes", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeChildNodes), (intptr_t)0 THUNK_GENERATOR(0) },
    { "firstChild", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFirstChild), (intptr_t)0 THUNK_GENERATOR(0) },
    { "lastChild", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeLastChild), (intptr_t)0 THUNK_GENERATOR(0) },
    { "previousSibling", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePreviousSibling), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nextSibling", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNextSibling), (intptr_t)0 THUNK_GENERATOR(0) },
    { "attributes", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeAttributes), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ownerDocument", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeOwnerDocument), (intptr_t)0 THUNK_GENERATOR(0) },
    { "namespaceURI", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNamespaceURI), (intptr_t)0 THUNK_GENERATOR(0) },
    { "prefix", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePrefix), (intptr_t)setJSNodePrefix THUNK_GENERATOR(0) },
    { "localName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeLocalName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "baseURI", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeBaseURI), (intptr_t)0 THUNK_GENERATOR(0) },
    { "textContent", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeTextContent), (intptr_t)setJSNodeTextContent THUNK_GENERATOR(0) },
    { "parentElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeParentElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeTable = { 68, 63, JSNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeConstructorTableValues[19] =
{
    { "ELEMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeELEMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ATTRIBUTE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeATTRIBUTE_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TEXT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeTEXT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CDATA_SECTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCDATA_SECTION_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENTITY_REFERENCE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_REFERENCE_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENTITY_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PROCESSING_INSTRUCTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePROCESSING_INSTRUCTION_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "COMMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCOMMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_TYPE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_TYPE_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_FRAGMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_FRAGMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOTATION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNOTATION_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_DISCONNECTED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_DISCONNECTED), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_PRECEDING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_PRECEDING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_FOLLOWING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_FOLLOWING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_CONTAINS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_CONTAINED_BY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINED_BY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeConstructorTable = { 67, 63, JSNodeConstructorTableValues, 0 };

COMPILE_ASSERT(1 == Node::ELEMENT_NODE, NodeEnumELEMENT_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == Node::ATTRIBUTE_NODE, NodeEnumATTRIBUTE_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == Node::TEXT_NODE, NodeEnumTEXT_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == Node::CDATA_SECTION_NODE, NodeEnumCDATA_SECTION_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == Node::ENTITY_REFERENCE_NODE, NodeEnumENTITY_REFERENCE_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == Node::ENTITY_NODE, NodeEnumENTITY_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == Node::PROCESSING_INSTRUCTION_NODE, NodeEnumPROCESSING_INSTRUCTION_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == Node::COMMENT_NODE, NodeEnumCOMMENT_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == Node::DOCUMENT_NODE, NodeEnumDOCUMENT_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == Node::DOCUMENT_TYPE_NODE, NodeEnumDOCUMENT_TYPE_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(11 == Node::DOCUMENT_FRAGMENT_NODE, NodeEnumDOCUMENT_FRAGMENT_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(12 == Node::NOTATION_NODE, NodeEnumNOTATION_NODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0x01 == Node::DOCUMENT_POSITION_DISCONNECTED, NodeEnumDOCUMENT_POSITION_DISCONNECTEDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0x02 == Node::DOCUMENT_POSITION_PRECEDING, NodeEnumDOCUMENT_POSITION_PRECEDINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0x04 == Node::DOCUMENT_POSITION_FOLLOWING, NodeEnumDOCUMENT_POSITION_FOLLOWINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0x08 == Node::DOCUMENT_POSITION_CONTAINS, NodeEnumDOCUMENT_POSITION_CONTAINSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0x10 == Node::DOCUMENT_POSITION_CONTAINED_BY, NodeEnumDOCUMENT_POSITION_CONTAINED_BYIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0x20 == Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC, NodeEnumDOCUMENT_POSITION_IMPLEMENTATION_SPECIFICIsWrongUseDontCheckEnums);

class JSNodeConstructor : public DOMConstructorObject {
public:
    JSNodeConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSNodeConstructor::s_info = { "NodeConstructor", &DOMConstructorObject::s_info, &JSNodeConstructorTable, 0 };

JSNodeConstructor::JSNodeConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSNodeConstructor::createStructure(globalObject->globalData(), globalObject->objectPrototype()), globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeConstructor, DOMObject>(exec, &JSNodeConstructorTable, this, propertyName, slot);
}

bool JSNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNodeConstructor, DOMObject>(exec, &JSNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodePrototypeTableValues[37] =
{
    { "ELEMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeELEMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ATTRIBUTE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeATTRIBUTE_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TEXT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeTEXT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CDATA_SECTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCDATA_SECTION_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENTITY_REFERENCE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_REFERENCE_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENTITY_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PROCESSING_INSTRUCTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePROCESSING_INSTRUCTION_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "COMMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCOMMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_TYPE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_TYPE_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_FRAGMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_FRAGMENT_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOTATION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNOTATION_NODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_DISCONNECTED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_DISCONNECTED), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_PRECEDING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_PRECEDING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_FOLLOWING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_FOLLOWING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_CONTAINS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_CONTAINED_BY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINED_BY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC), (intptr_t)0 THUNK_GENERATOR(0) },
    { "insertBefore", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionInsertBefore), (intptr_t)2 THUNK_GENERATOR(0) },
    { "replaceChild", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionReplaceChild), (intptr_t)2 THUNK_GENERATOR(0) },
    { "removeChild", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionRemoveChild), (intptr_t)1 THUNK_GENERATOR(0) },
    { "appendChild", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionAppendChild), (intptr_t)1 THUNK_GENERATOR(0) },
    { "hasChildNodes", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionHasChildNodes), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cloneNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionCloneNode), (intptr_t)1 THUNK_GENERATOR(0) },
    { "normalize", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionNormalize), (intptr_t)0 THUNK_GENERATOR(0) },
    { "isSupported", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsSupported), (intptr_t)2 THUNK_GENERATOR(0) },
    { "hasAttributes", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionHasAttributes), (intptr_t)0 THUNK_GENERATOR(0) },
    { "isSameNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsSameNode), (intptr_t)1 THUNK_GENERATOR(0) },
    { "isEqualNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsEqualNode), (intptr_t)1 THUNK_GENERATOR(0) },
    { "lookupPrefix", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionLookupPrefix), (intptr_t)1 THUNK_GENERATOR(0) },
    { "isDefaultNamespace", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsDefaultNamespace), (intptr_t)1 THUNK_GENERATOR(0) },
    { "lookupNamespaceURI", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionLookupNamespaceURI), (intptr_t)1 THUNK_GENERATOR(0) },
    { "compareDocumentPosition", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionCompareDocumentPosition), (intptr_t)1 THUNK_GENERATOR(0) },
    { "addEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionAddEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "removeEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionRemoveEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "dispatchEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionDispatchEvent), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodePrototypeTable = { 134, 127, JSNodePrototypeTableValues, 0 };
const ClassInfo JSNodePrototype::s_info = { "NodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSNodePrototypeTable, 0 };

JSObject* JSNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNode>(exec, globalObject);
}

bool JSNodePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSNodePrototype, JSObject>(exec, &JSNodePrototypeTable, this, propertyName, slot);
}

bool JSNodePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSNodePrototype, JSObject>(exec, &JSNodePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSNode::s_info = { "Node", &DOMObjectWithGlobalPointer::s_info, &JSNodeTable, 0 };

JSNode::JSNode(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Node> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSNodePrototype(globalObject, JSNodePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

JSValue jsNodeNodeName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->nodeName());
    return result;
}

JSValue jsNodeNodeValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->nodeValue());
    return result;
}

JSValue jsNodeNodeType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsNumber(imp->nodeType());
    return result;
}

JSValue jsNodeParentNode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->parentNode()));
    return result;
}

JSValue jsNodeChildNodes(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->childNodes()));
    return result;
}

JSValue jsNodeFirstChild(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->firstChild()));
    return result;
}

JSValue jsNodeLastChild(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->lastChild()));
    return result;
}

JSValue jsNodePreviousSibling(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->previousSibling()));
    return result;
}

JSValue jsNodeNextSibling(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nextSibling()));
    return result;
}

JSValue jsNodeAttributes(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->attributes()));
    return result;
}

JSValue jsNodeOwnerDocument(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->ownerDocument()));
    return result;
}

JSValue jsNodeNamespaceURI(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->namespaceURI());
    return result;
}

JSValue jsNodePrefix(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->prefix());
    return result;
}

JSValue jsNodeLocalName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->localName());
    return result;
}

JSValue jsNodeBaseURI(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->baseURI());
    return result;
}

JSValue jsNodeTextContent(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->textContent());
    return result;
}

JSValue jsNodeParentElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* castedThis = static_cast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->parentElement()));
    return result;
}

JSValue jsNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNode* domObject = static_cast<JSNode*>(asObject(slotBase));
    return JSNode::getConstructor(exec, domObject->globalObject());
}

void JSNode::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSNode, Base>(exec, propertyName, value, &JSNodeTable, this, slot);
}

void setJSNodeNodeValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSNode* castedThis = static_cast<JSNode*>(thisObject);
    Node* imp = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setNodeValue(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSNodePrefix(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSNode* castedThis = static_cast<JSNode*>(thisObject);
    Node* imp = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setPrefix(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSNodeTextContent(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSNode* castedThis = static_cast<JSNode*>(thisObject);
    Node* imp = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setTextContent(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValue JSNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionInsertBefore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    return JSValue::encode(castedThis->insertBefore(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionReplaceChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    return JSValue::encode(castedThis->replaceChild(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionRemoveChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    return JSValue::encode(castedThis->removeChild(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionAppendChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    return JSValue::encode(castedThis->appendChild(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionHasChildNodes(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());


    JSC::JSValue result = jsBoolean(imp->hasChildNodes());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionCloneNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    bool deep(exec->argument(0).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->cloneNode(deep)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionNormalize(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());

    imp->normalize();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsSupported(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    const String& feature(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& version(valueToStringWithNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->isSupported(feature, version));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionHasAttributes(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());


    JSC::JSValue result = jsBoolean(imp->hasAttributes());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsSameNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->isSameNode(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsEqualNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->isEqualNode(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionLookupPrefix(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    const String& namespaceURI(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsStringOrNull(exec, imp->lookupPrefix(namespaceURI));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsDefaultNamespace(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    const String& namespaceURI(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->isDefaultNamespace(namespaceURI));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionLookupNamespaceURI(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    const String& prefix(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsStringOrNull(exec, imp->lookupNamespaceURI(prefix));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionCompareDocumentPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsNumber(imp->compareDocumentPosition(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->addEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->removeEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    Event* event(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->dispatchEvent(event, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

// Constant getters

JSValue jsNodeELEMENT_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsNodeATTRIBUTE_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsNodeTEXT_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsNodeCDATA_SECTION_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsNodeENTITY_REFERENCE_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsNodeENTITY_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsNodePROCESSING_INSTRUCTION_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsNodeCOMMENT_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsNodeDOCUMENT_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsNodeDOCUMENT_TYPE_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsNodeDOCUMENT_FRAGMENT_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsNodeNOTATION_NODE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSValue jsNodeDOCUMENT_POSITION_DISCONNECTED(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x01));
}

JSValue jsNodeDOCUMENT_POSITION_PRECEDING(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x02));
}

JSValue jsNodeDOCUMENT_POSITION_FOLLOWING(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x04));
}

JSValue jsNodeDOCUMENT_POSITION_CONTAINS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x08));
}

JSValue jsNodeDOCUMENT_POSITION_CONTAINED_BY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x10));
}

JSValue jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x20));
}

Node* toNode(JSC::JSValue value)
{
    return value.inherits(&JSNode::s_info) ? static_cast<JSNode*>(asObject(value))->impl() : 0;
}

}