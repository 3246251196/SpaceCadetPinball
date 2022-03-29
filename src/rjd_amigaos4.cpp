/* rjd_amigso4.h is implicitly included when using 'makefile.os4' */
#include <math.h>

namespace std
{
        /* Reason: there is no definition for std::round, forward this to C's round */
        float round(float f)
        {
                return ::round(f);
        }
}
