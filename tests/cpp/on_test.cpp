#include "../../src/CQueryStatic.hpp"


void webMain() {
    $("#app").on("click", _cb([]{
        client::console.log("clicked me..!");
    }));

    $("#testdiv").on("mouseover", _cb([]{
        client::console.log("mouse over event detected ..!");
        $("#testdiv").css("background-color", "blue");
    }));
}