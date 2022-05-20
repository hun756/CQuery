#include "../../src/CssStyleHelper.hpp"

int main()
{
    auto elem = client::document.getElementById("test");

    addCssStyle(
        static_cast<client::ElementCSSInlineStyle*>(elem), 
        CSSStyleHelper::BackgroundColor, 
        new client::String("red")
    );

    return 0;
}