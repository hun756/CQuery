#ifndef CQUERY_EVENT_TYPE_HPP_1pfbyp
#define CQUERY_EVENT_TYPE_HPP_1pfbyp

#include <unordered_map>
#include <cheerp/clientlib.h>
#include "Helper.hpp"

namespace CQuery
{
    enum class EventType
    {
        Abort,
        Click,
        MouseMove,
        MouseOver,
        MouseEnter,
        Unkown
    };

#ifdef ENABLE_TO_USE_STD_MAP
    EventType getEventTypeFromClientString(const client::String &str)
        __attribute__((deprecated("Please be careful when using this method. This method can generate large sizes of javascript code.")))
    {
        std::unordered_map<const char *, EventType> _map{
            {"abort", EventType::Abort},
            {"click", EventType::Click},
            {"mouseover", EventType::MouseOver},
            {"mousemove", EventType::MouseMove},
            {"mouseenter", EventType::MouseEnter},

            // ...
        };

        auto _var = CQuery::Helper::clientStringToConstChar(str);
        // auto iter = _map.find(_var);

        for (const auto &x : _map)
            if (strcmp(_var, x.first) == 0)
                return x.second;

        return EventType::Unkown;
    }
#endif
}

#endif /* end of include guard : CQUERY_EVENT_TYPE_HPP_1pfbyp */