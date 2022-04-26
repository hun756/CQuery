#include "../../src/CQueryStatic.hpp"

void webMain() {
    using namespace client;
    // auto arr = new TArray<String*> (
    //     new String("Banana"),
    //     new String("Cheery"),
    //     new String("Melon"),
    //     new String("WaterMelon")
    // );

    // auto val1 = $.inArray<String>(new String("Banana"), arr);
    // auto val2 = $.inArray<String>(new String("Bananax"), arr);
    
    // if(val1 != -1) {
    //     client::console.log("Banana found in index", val1);
    // } else {
    //      client::console.log("Banana not found");
    // }

    // if(val2 != -1) {
    //     client::console.log("Bananax found in index", val1);
    // } else {
    //      client::console.log("Bananax not found");
    // }


    auto arr2 = new Array (
        new String("John"),
        new String("Kral"),
        new String("Peter"),
        new String("WaterMelon"),
        new Number(5)
    );
    

    auto val3 = $.inArray(new String("John"), arr2);
    auto val4 = $.inArray(new Number(5), arr2);

    if(val3 != -1) {
        client::console.log("John found in index", val3);
    } else {
         client::console.log("John not found");
    }

    if(val4 != -1) {
        client::console.log(" Number : 5 found in index", val4);
    } else {
         client::console.log("Number : 5 not found");
    }
}