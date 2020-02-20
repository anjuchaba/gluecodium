#pragma once
#include "Export.h"
#include "OpaqueHandle.h"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StandaloneProducer_call(FfiOpaqueHandle _self);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StandaloneProducer_copy_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT void smoke_StandaloneProducer_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StandaloneProducer_create_handle_nullable(FfiOpaqueHandle value);
_GLUECODIUM_FFI_EXPORT void smoke_StandaloneProducer_release_handle_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StandaloneProducer_get_value_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StandaloneProducer_create_proxy(uint64_t token, FfiOpaqueHandle f0);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StandaloneProducer_get_raw_pointer(FfiOpaqueHandle handle);
#ifdef __cplusplus
}
#endif
