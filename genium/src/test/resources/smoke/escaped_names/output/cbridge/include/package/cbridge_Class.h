//
//
// Automatically generated. Do not modify. Your changes will be lost.
#pragma once
#ifdef __cplusplus
extern "C" {
#endif
#include "cbridge/include/BaseHandle.h"
#include "cbridge/include/Export.h"
#include "cbridge/include/package/cbridge_Types.h"
#include <stdbool.h>
typedef struct {
    bool has_value;
    union {
        package_Types_Enum error_code;
        _baseRef returned_value;
    };
} package_Class_fun_result;
_GENIUM_C_EXPORT void package_Class_release_handle(_baseRef handle);
_GENIUM_C_EXPORT _baseRef package_Class_copy_handle(_baseRef handle);
_GENIUM_C_EXPORT _baseRef package_Class_constructor();
_GENIUM_C_EXPORT package_Class_fun_result package_Class_fun(_baseRef _instance, _baseRef double);
_GENIUM_C_EXPORT package_Types_Enum package_Class_property_get(_baseRef _instance);
_GENIUM_C_EXPORT void package_Class_property_set(_baseRef _instance, package_Types_Enum newValue);
#ifdef __cplusplus
}
#endif
