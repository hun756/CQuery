#include <cheerp/clientlib.h>
#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"

void webMain() {
    $("body")
        .css("padding", "0px")
        .css("margin", "0px");
    $("#appid")
        .css("background-color", "red")
        .css("color", "blue")
        .css("width", "500px")
        .css("height", "200px");
}