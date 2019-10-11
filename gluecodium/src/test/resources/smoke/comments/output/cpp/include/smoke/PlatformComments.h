// -------------------------------------------------------------------------------------------------
//
//
// -------------------------------------------------------------------------------------------------
#pragma once
#include "gluecodium/Export.h"
#include "gluecodium/Return.h"
#include <cstdint>
#include <string>
#include <system_error>
namespace smoke {
class _GLUECODIUM_CPP_EXPORT PlatformComments {
public:
    PlatformComments();
    virtual ~PlatformComments() = 0;
public:
    enum class SomeEnum {
        USELESS,
        USEFUL
    };
    /**
     * An error code when something goes wrong.
     */
    using Boom = ::std::error_code;
public:
    /**
     * This is some very useless method that does nothing.
     */
    virtual void do_nothing(  ) = 0;
    /**
     * Cooks very special C++ sauce.
     */
    virtual void do_magic(  ) = 0;
    /**
     * This is some very useful method that measures the usefulness of its input.
     * \param[in] input Very useful input ::smoke::PlatformComments parameter
     * \return Usefulness of the input
     * \retval ::smoke::PlatformComments::SomeEnum Sometimes it happens.
     */
    virtual ::gluecodium::Return< bool, ::std::error_code > some_method_with_all_comments( const ::std::string& input ) = 0;
};
_GLUECODIUM_CPP_EXPORT ::std::error_code make_error_code( ::smoke::PlatformComments::SomeEnum value ) noexcept;
}
namespace std
{
template <>
struct is_error_code_enum< ::smoke::PlatformComments::SomeEnum > : public std::true_type { };
}
