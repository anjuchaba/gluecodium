#pragma once
#include "Export.h"
#include "OpaqueHandle.h"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_methodWithErrors_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t library_smoke_Errors_methodWithErrors_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool library_smoke_Errors_methodWithErrors_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithErrors(int32_t _isolate_id);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_methodWithExternalErrors_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t library_smoke_Errors_methodWithExternalErrors_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool library_smoke_Errors_methodWithExternalErrors_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithExternalErrors(int32_t _isolate_id);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_methodWithErrorsAndReturnValue_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithErrorsAndReturnValue_return_get_result(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t library_smoke_Errors_methodWithErrorsAndReturnValue_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool library_smoke_Errors_methodWithErrorsAndReturnValue_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithErrorsAndReturnValue(int32_t _isolate_id);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_methodWithPayloadError_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithPayloadError_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool library_smoke_Errors_methodWithPayloadError_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithPayloadError(int32_t _isolate_id);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_methodWithPayloadErrorAndReturnValue_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithPayloadErrorAndReturnValue_return_get_result(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithPayloadErrorAndReturnValue_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool library_smoke_Errors_methodWithPayloadErrorAndReturnValue_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_methodWithPayloadErrorAndReturnValue(int32_t _isolate_id);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_copy_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_get_raw_pointer(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_InternalErrorCode_create_handle_nullable(uint32_t value);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_InternalErrorCode_release_handle_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t library_smoke_Errors_InternalErrorCode_get_value_nullable(FfiOpaqueHandle handle);_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle library_smoke_Errors_ExternalErrors_create_handle_nullable(uint32_t value);
_GLUECODIUM_FFI_EXPORT void library_smoke_Errors_ExternalErrors_release_handle_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t library_smoke_Errors_ExternalErrors_get_value_nullable(FfiOpaqueHandle handle);
#ifdef __cplusplus
}
#endif
