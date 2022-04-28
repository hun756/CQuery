#include "../../src/CQueryStatic.hpp"


void webMain() {
    // With the element initially shown, we can hide it slowly:
    $( "#clickme" ).click(_cb([]() {
        $( "#book" ).hide();
    }));
}