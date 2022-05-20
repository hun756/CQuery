#include <cheerp/clientlib.h>
#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"

const char hexArr[] = {
    '0', '1', '2', '3',
    '4', '5', '6', '7',
    '8', '9', 'A', 'B',
    'C', 'D', 'E', 'F'
};

client::String* generateRandomColorString() {
    auto str = new client::String("#");
    for (int i = 0; i < 6; i++) {
        str = str->concat(client::String::fromCharCode(hexArr[(int)client::Math.floor(client::Math.random() * 16)]));
    }

    return str;
}

void webMain()
{
    auto val = 100000;

    auto time1 = client::Date::now();
    for (size_t i = 0; i < val; ++i)
    {
        $("body")
            .css(CSSStyleHelper::BackgroundColor, generateRandomColorString());
    }
    auto time2 = client::Date::now();

    client::console.log("Ellapsed time is", time2 - time1);
}