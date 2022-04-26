#include <cheerp/clientlib.h>
#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"

void webMain() {
    using namespace client;
    $("body").css({{new String("padding"), new String("0px")}, {new String("margin"), new String("0px")}});
    $("#appid")
        .css("background-color", "red")
        .css("color", "blue")
        .css("width", "500px")
        .css("height", "200px");
}