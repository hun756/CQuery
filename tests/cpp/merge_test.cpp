#include <cheerp/clientlib.h>
#include <sstream>
#include "../../src/definitions.hpp"
#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"

void webMain()
{
    auto t1 = new client::Array {
        new client::String("Apple"),
        new client::String("Banana"),
        new client::String("Orange"),
    },
    t2 = new client::Array {
        new client::String("WaterMelon"), 
        new client::String("Cheery"), 
        new client::String("Melon")
    };

    auto i1 = new client::Array {
        1, 2, 3
    }, 
    i2 = new client::Array {
        4, 5, 6
    };

    auto res = $.merge(t1, t2);
    auto int2 = $.merge(i1, i2);

    client::console.log(res->toString());
    client::console.log(int2->toString());
}