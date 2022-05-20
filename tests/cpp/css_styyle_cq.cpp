#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"

int main()
{
    using namespace client;
    $("#test")
        .css(CSSStyleHelper::BackgroundColor, "red")
        .css(CSSStyleHelper::FontSize, "24pt")
        .css(CSSStyleHelper::Color, "white")
        .css(CSSStyleHelper::Padding, "30px");
    
    return 0;
}