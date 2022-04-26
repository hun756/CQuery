#include <cheerp/clientlib.h>
#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"

void webMain()
{
    auto val = 1000;

    auto time1 = client::Date::now();
    for (size_t i = 0; i < val; ++i)
    {
        $("body")
            .css("background-color", "blue")
            .css("width", "500px");
    }
    auto time2 = client::Date::now();

    client::console.log("Ellapsed time is", time2 - time1);
}