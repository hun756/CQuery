# CQuery
The jquery library has been rewritten in c++/cheerp.

Usage:

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

Supported Methods