// -------------------------------------------------------------------------------------------------
//
//
// -------------------------------------------------------------------------------------------------
#pragma once
#include "gluecodium/ExportGluecodiumCpp.h"
#include <string>
namespace smoke {
/**
 * \deprecated
 */
class _GLUECODIUM_CPP_EXPORT [[OnClass]] AttributesWithDeprecated {
public:
    AttributesWithDeprecated();
    virtual ~AttributesWithDeprecated() = 0;
public:
    struct _GLUECODIUM_CPP_EXPORT SomeStruct {
        /**
         * \deprecated
         */
        [[OnField]]
        ::std::string field = "";
        SomeStruct( );
        explicit SomeStruct( ::std::string field );
    };
    /**
     * \deprecated
     */
    [[OnConstInClass]]
    static const bool PI;
public:
    /**
     *
     * \deprecated
     */
    [[OnFunctionInClass]]
    virtual void very_fun(  ) = 0;
    /**
     *
     * \deprecated
     * \return
     */
    [[OnPropertyInClass]]
    virtual ::std::string get_prop(  ) const = 0;
    /**
     *
     * \deprecated
     * \param[in] value
     */
    [[OnPropertyInClass]]
    virtual void set_prop( const ::std::string& value ) = 0;
};
}
