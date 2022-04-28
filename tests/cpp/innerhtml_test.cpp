#include "../../src/CQueryStatic.hpp"

void webMain() {
    client::console.log($("#app").html()->trim());
    $("#test").html("This is for testing inner HTML");
}