#include <Ark/FFI.hpp>

#include <cmath>

namespace Ark
{
    namespace FFI
    {
        #define FFI_MAKE_EXTERNS_SRC

        #include <Ark/MakeFFI.hpp>

        #undef FFI_MAKE_EXTERNS_SRC
    }
}