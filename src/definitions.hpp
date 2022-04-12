// definitions wil coming here...!

#ifndef CQUERY_DEFINITIONS_GENERAL_HPP
#define CQUERY_DEFINITIONS_GENERAL_HPP

#include <cheerp/client.h>

#if JS_EXPORT_ENABLED
    #define CQUERY_API [[cheerp::genericjs]][[cheerp::jsexport]]
#else
    #define CQUERY_API [[cheerp::genericjs]]
#endif

#define _cb cheerp::Callback

#endif /* end of include guard : CQUERY_DEFINITIONS_GENERAL_HPP */