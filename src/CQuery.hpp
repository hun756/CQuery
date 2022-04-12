#ifndef CQUERY_BASE_CLASS
#define CQUERY_BASE_CLASS

#include <cheerp/clientlib.h>
#include "definitions.hpp"
#include "excepts/NotImplemented.hpp"

/* Previous declaration for CQuery CALLBACK Object */
class CQueryCallback;

/* Previous declaration for CQuery Object */
class CQUERY_API CQuery
{
    friend class CQueryStatic;

public:
    static constexpr char *version = "0.0.1";
    CQuery() noexcept
    {
    }

    CQuery &click()
    {
        elem->addEventListener(
            "click", 
            cheerp::Callback([] { 
                client::console.log("Clicked"); 
            })
        );

        return *this;
    }

    CQuery &click(client::EventListener *callback)
    {
        elem->addEventListener("click", callback);
        return *this;
    }

    CQuery &ready(client::EventListener *callback)
    {
        client::document.addEventListener("DOMContentLoaded", callback);
        return *this;
    }

private:
    [[cheerp::genericjs]] void set_elem(const client::String &str)
    {
        elem = client::document.querySelector(str);
    }

private:
    client::Element *elem;
};

#endif /* end of include guard : CQUERY_BASE_CLASS */