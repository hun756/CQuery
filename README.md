# CQuery
The jquery library has been rewritten in c++/cheerp.

#### Usage:

```cpp
void webMain() {
    $(_cb([]{
        client::console.log("HTML Content Loaded, now script will run");
        $("#merhaba").click(_cb([]{
            client::console.log("Clicked Item...!");
        })).click(_cb([]{
            client::console.log("Clicked Again puhahahah...!");
        }));
    }));
}
```

#### Change CSS using Cquery
```html
<div id="appid">
    Lorem ipsum dolor sit amet consectetur adipisicing elit....
</div>
```

```cpp
#include <CQuery.hpp>
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
```

Output : 
![alt](https://link)

#### Performance ?
Let's look at a performance comparison for the .css method.

C++ version:
```cpp
auto val = 1000;

    auto time1 = client::Date::now();
    for (size_t i = 0; i < val; ++i)
    {
        $("body")
            .css("background-color", "blue")
            .css("width", "500px");
    }
    auto time2 = client::Date::now();

    client::console.log("Ellapsed time is", time2 - time1);
```

Javascript/Jquery version :
```js

var iteration_size = 1000;

var time1 = +Date.now();
for(var i = 0; i < iteration_size; ++i) {
	$("body")
        .css("background-color", "blue")
        .css("width", "500px");
}
var time2 = +Date.now();

console.log("ellapsed time is : ", time2 - time1);
```

| Browser/Plaform | c++/cquery | js/jquery |
| --------------- | ---------- | --------- |
| Firefox         | ~4ms       | ~11ms     |
| Chrome          | ~6ms       | ~12ms     |


Note: After 1500 the javascript engines can also cut the repeating loops. For higher iterations you can assign values  with math.random.

#### Supported Methods

# LICENSE :
See at cheerp license [here](https://github.com/leaningtech/cheerp-utils/blob/master/COPYING)