#include <cheerp/clientlib.h>


[[cheerp::jsexport]] void $(client::EventListener* __fn) {
    client::document.addEventListener("DOMContentLoaded", __fn);
}


void webMain() {
    client::console.log("Hi from CQuery Project");
}