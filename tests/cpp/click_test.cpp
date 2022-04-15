#include <cheerp/clientlib.h>
#include "../../src/definitions.hpp"
#include "../../src/CQuery.hpp"
#include "../../src/CQueryStatic.hpp"


void webMain() {
    $(_cb  ([]{
        client::console.log("HTML Content Loaded, now script will run");
        $("#merhaba").click(_cb([]{
            client::console.log("Clicked Item...!");
        })).click(_cb([]{
            client::console.log("Clicked Again puhahahah...!");
        }));
    }));
}