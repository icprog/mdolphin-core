/*
 * Copyright (C) 2008 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"
#include "StructureStubInfo.h"

#include "JSObject.h"
#include "ScopeChain.h"

namespace JSC {

#if ENABLE(JIT)
void StructureStubInfo::deref()
{
    switch (accessType) {
    case access_get_by_id_self:
        u.getByIdSelf.baseObjectStructure->deref();
        return;
    case access_get_by_id_proto:
        u.getByIdProto.baseObjectStructure->deref();
        u.getByIdProto.prototypeStructure->deref();
        return;
    case access_get_by_id_chain:
        u.getByIdChain.baseObjectStructure->deref();
        return;
    case access_get_by_id_self_list: {
        PolymorphicAccessStructureList* polymorphicStructures = u.getByIdSelfList.structureList;
        polymorphicStructures->derefStructures(u.getByIdSelfList.listSize);
        delete polymorphicStructures;
        return;
    }
    case access_get_by_id_proto_list: {
        PolymorphicAccessStructureList* polymorphicStructures = u.getByIdProtoList.structureList;
        polymorphicStructures->derefStructures(u.getByIdProtoList.listSize);
        delete polymorphicStructures;
        return;
    }
    case access_put_by_id_transition:
        u.putByIdTransition.previousStructure->deref();
        u.putByIdTransition.structure->deref();
        return;
    case access_put_by_id_replace:
        u.putByIdReplace.baseObjectStructure->deref();
        return;
    case access_get_by_id:
    case access_put_by_id:
    case access_get_by_id_generic:
    case access_put_by_id_generic:
    case access_get_array_length:
    case access_get_string_length:
        // These instructions don't ref their Structures.
        return;
    default:
        ASSERT_NOT_REACHED();
    }
}

void StructureStubInfo::markAggregate(MarkStack& markStack)
{
    switch (accessType) {
    case access_get_by_id_self:
        u.getByIdSelf.baseObjectStructure->markAggregate(markStack);
        return;
    case access_get_by_id_proto:
        u.getByIdProto.baseObjectStructure->markAggregate(markStack);
        u.getByIdProto.prototypeStructure->markAggregate(markStack);
        return;
    case access_get_by_id_chain:
        u.getByIdChain.baseObjectStructure->markAggregate(markStack);
        markStack.append(&u.getByIdChain.chain);
        return;
    case access_get_by_id_self_list: {
        PolymorphicAccessStructureList* polymorphicStructures = u.getByIdSelfList.structureList;
        polymorphicStructures->markAggregate(markStack, u.getByIdSelfList.listSize);
        return;
    }
    case access_get_by_id_proto_list: {
        PolymorphicAccessStructureList* polymorphicStructures = u.getByIdProtoList.structureList;
        polymorphicStructures->markAggregate(markStack, u.getByIdProtoList.listSize);
        return;
    }
    case access_put_by_id_transition:
        u.putByIdTransition.previousStructure->markAggregate(markStack);
        u.putByIdTransition.structure->markAggregate(markStack);
        markStack.append(&u.putByIdTransition.chain);
        return;
    case access_put_by_id_replace:
        u.putByIdReplace.baseObjectStructure->markAggregate(markStack);
        return;
    case access_get_by_id:
    case access_put_by_id:
    case access_get_by_id_generic:
    case access_put_by_id_generic:
    case access_get_array_length:
    case access_get_string_length:
        // These instructions don't ref their Structures.
        return;
    default:
        ASSERT_NOT_REACHED();
    }
}
#endif

} // namespace JSC
