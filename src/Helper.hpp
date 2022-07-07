#ifndef CQUERY_HELPER_HPP_5uhoa7
#define CQUERY_HELPER_HPP_5uhoa7

#include <cheerp/clientlib.h>

namespace CQuery::Helper
{
    /**
     * @brief
     *  This helper method converts client::String to const char*
     * @param str
     *
     * @return const char*
     */
    [[cheerp::genericjs]] const char *clientStringToConstChar(const client::String &str)
    {
        auto _len = str.get_length();
        const auto _ch = new char[_len + 1];

        for (size_t i = 0; i < _len; ++i)
            _ch[i] = str.charCodeAt(i);

        _ch[_len] = '\0';
        return _ch;
    }
}

#endif /* end of include guard : CQUERY_HELPER_HPP_5uhoa7 */