//
//
// Automatically generated. Do not modify. Your changes will be lost.
#include "cbridge/include/smoke/cbridge_EquatableInterface.h"
#include "cbridge_internal/include/BaseHandleImpl.h"
#include "genium/Optional.h"
#include "smoke/EquatableInterface.h"
#include <memory>
#include <new>
#include <string>
void smoke_EquatableInterface_release_handle(_baseRef handle) {
    delete get_pointer<std::shared_ptr<::smoke::EquatableInterface>>(handle);
}
_baseRef smoke_EquatableInterface_copy_handle(_baseRef handle) {
    return handle
        ? reinterpret_cast<_baseRef>(checked_pointer_copy(*get_pointer<std::shared_ptr<::smoke::EquatableInterface>>(handle)))
        : 0;
}
bool smoke_EquatableInterface_equal(_baseRef lhs, _baseRef rhs) {
    return **get_pointer<std::shared_ptr<::smoke::EquatableInterface>>(lhs) == **get_pointer<std::shared_ptr<::smoke::EquatableInterface>>(rhs);
}
_baseRef
smoke_EquatableInterface_EquatableStruct_create_handle( int32_t intField, _baseRef stringField )
{
    ::smoke::EquatableInterface::EquatableStruct* _struct = new ( std::nothrow ) ::smoke::EquatableInterface::EquatableStruct();
    _struct->int_field = intField;
    _struct->string_field = Conversion<std::string>::toCpp( stringField );
    return reinterpret_cast<_baseRef>( _struct );
}
void
smoke_EquatableInterface_EquatableStruct_release_handle( _baseRef handle )
{
    delete get_pointer<::smoke::EquatableInterface::EquatableStruct>( handle );
}
_baseRef
smoke_EquatableInterface_EquatableStruct_create_optional_handle(int32_t intField, _baseRef stringField)
{
    auto _struct = new ( std::nothrow ) ::genium::optional<::smoke::EquatableInterface::EquatableStruct>( ::smoke::EquatableInterface::EquatableStruct( ) );
    (*_struct)->int_field = intField;
    (*_struct)->string_field = Conversion<std::string>::toCpp( stringField );
    return reinterpret_cast<_baseRef>( _struct );
}
_baseRef
smoke_EquatableInterface_EquatableStruct_unwrap_optional_handle( _baseRef handle )
{
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::genium::optional<::smoke::EquatableInterface::EquatableStruct>*>( handle ) );
}
void smoke_EquatableInterface_EquatableStruct_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::genium::optional<::smoke::EquatableInterface::EquatableStruct>*>( handle );
}
int32_t smoke_EquatableInterface_EquatableStruct_intField_get(_baseRef handle) {
    auto struct_pointer = get_pointer<::smoke::EquatableInterface::EquatableStruct>(handle);
return struct_pointer->int_field;
}
_baseRef smoke_EquatableInterface_EquatableStruct_stringField_get(_baseRef handle) {
    auto struct_pointer = get_pointer<::smoke::EquatableInterface::EquatableStruct>(handle);
return Conversion<std::string>::toBaseRef(struct_pointer->string_field);
}