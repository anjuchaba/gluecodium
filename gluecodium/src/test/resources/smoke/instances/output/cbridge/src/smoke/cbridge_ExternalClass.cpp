//
//
#include "cbridge/include/smoke/cbridge_ExternalClass.h"
#include "cbridge_internal/include/BaseHandleImpl.h"
#include "cbridge_internal/include/TypeInitRepository.h"
#include "cbridge_internal/include/WrapperCache.h"
#include "foo/Bar.h"
#include "gluecodium/Optional.h"
#include "gluecodium/TypeRepository.h"
#include <memory>
#include <new>
#include <string>
void smoke_ExternalClass_release_handle(_baseRef handle) {
    auto ptr_ptr = get_pointer<std::shared_ptr<::fire::Baz>>(handle);
    auto& wrapper_cache = get_wrapper_cache();
    if (wrapper_cache_is_alive) {
        wrapper_cache.remove_cached_wrapper(ptr_ptr->get());
    }
    delete ptr_ptr;
}
_baseRef smoke_ExternalClass_copy_handle(_baseRef handle) {
    return handle
        ? reinterpret_cast<_baseRef>(checked_pointer_copy(*get_pointer<std::shared_ptr<::fire::Baz>>(handle)))
        : 0;
}
const void* smoke_ExternalClass_get_swift_object_from_wrapper_cache(_baseRef handle) {
    return handle
        ? get_wrapper_cache().get_cached_wrapper(get_pointer<std::shared_ptr<::fire::Baz>>(handle)->get())
        : nullptr;
}
void smoke_ExternalClass_cache_swift_object_wrapper(_baseRef handle, const void* swift_pointer) {
    if (!handle) return;
    get_wrapper_cache().cache_wrapper(get_pointer<std::shared_ptr<::fire::Baz>>(handle)->get(), swift_pointer);
}
_baseRef
smoke_ExternalClass_SomeStruct_create_handle( _baseRef someField )
{
    ::fire::Baz::some_Struct* _struct = new ( std::nothrow ) ::fire::Baz::some_Struct();
    _struct->some_Field = Conversion<std::string>::toCpp( someField );
    return reinterpret_cast<_baseRef>( _struct );
}
void
smoke_ExternalClass_SomeStruct_release_handle( _baseRef handle )
{
    delete get_pointer<::fire::Baz::some_Struct>( handle );
}
_baseRef
smoke_ExternalClass_SomeStruct_create_optional_handle(_baseRef someField)
{
    auto _struct = new ( std::nothrow ) ::gluecodium::optional<::fire::Baz::some_Struct>( ::fire::Baz::some_Struct( ) );
    (*_struct)->some_Field = Conversion<std::string>::toCpp( someField );
    return reinterpret_cast<_baseRef>( _struct );
}
_baseRef
smoke_ExternalClass_SomeStruct_unwrap_optional_handle( _baseRef handle )
{
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<::fire::Baz::some_Struct>*>( handle ) );
}
void smoke_ExternalClass_SomeStruct_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<::fire::Baz::some_Struct>*>( handle );
}
_baseRef smoke_ExternalClass_SomeStruct_someField_get(_baseRef handle) {
    auto struct_pointer = get_pointer<const ::fire::Baz::some_Struct>(handle);
return Conversion<std::string>::toBaseRef(struct_pointer->some_Field);
}
void smoke_ExternalClass_someMethod(_baseRef _instance, int8_t someParameter) {
    return get_pointer<std::shared_ptr<::fire::Baz>>(_instance)->get()->some_Method(someParameter);
}
_baseRef smoke_ExternalClass_someProperty_get(_baseRef _instance) {
    return Conversion<std::string>::toBaseRef(get_pointer<std::shared_ptr<::fire::Baz>>(_instance)->get()->get_Me());
}
