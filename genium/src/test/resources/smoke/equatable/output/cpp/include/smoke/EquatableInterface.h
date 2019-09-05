// -------------------------------------------------------------------------------------------------
//
//
// -------------------------------------------------------------------------------------------------
#pragma once
#include "genium/Export.h"
#include "genium/Hash.h"
#include "smoke/PointerEquatableInterface.h"
#include <cstdint>
#include <memory>
#include <string>
namespace smoke {
    class EquatableInterface;
    class PointerEquatableInterface;
}
namespace smoke {
class _GENIUM_CPP_EXPORT EquatableInterface {
public:
    EquatableInterface();
    virtual ~EquatableInterface() = 0;
public:
    struct _GENIUM_CPP_EXPORT EquatableStruct {
        int32_t int_field;
        ::std::string string_field;
        /// \warning @NotNull
        ::std::shared_ptr< ::smoke::EquatableInterface > nested_equatable_instance;
        /// \warning @NotNull
        ::std::shared_ptr< ::smoke::PointerEquatableInterface > nested_pointer_equatable_instance;
        EquatableStruct( );
        EquatableStruct( const int32_t int_field, const ::std::string& string_field, const ::std::shared_ptr< ::smoke::EquatableInterface >& nested_equatable_instance, const ::std::shared_ptr< ::smoke::PointerEquatableInterface >& nested_pointer_equatable_instance );
        bool operator==( const EquatableStruct& rhs ) const;
        bool operator!=( const EquatableStruct& rhs ) const;
    };
public:
    bool operator==( const EquatableInterface& rhs );
    bool operator!=( const EquatableInterface& rhs );
};
}
namespace genium {
template<>
struct hash< ::smoke::EquatableInterface > {
    std::size_t operator( )( const ::smoke::EquatableInterface& t ) const;
};
template <>
struct EqualityHash< std::shared_ptr< ::smoke::EquatableInterface > >
{
    std::size_t operator( )( const std::shared_ptr< ::smoke::EquatableInterface >& t ) const;
};
template<>
struct hash< ::smoke::EquatableInterface::EquatableStruct > {
    std::size_t operator( )( const ::smoke::EquatableInterface::EquatableStruct& t ) const;
};
}