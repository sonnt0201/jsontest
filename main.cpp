#include "json/json.h"
#include "json/json-forwards.h"

#include <iostream>

// g++ main.cpp jsoncpp.cpp -o main; ./main

int main() {
    Json::Value root;
    // std::cin>>root;
    root["name"] = "son";
   
    const Json::Value value = root["name"];
    std::cout<<"- Init json: \n"<<root<<"\n\n";
    Json::Value sub;
    sub["age"] = 20;
    sub["job"] = "engineering";

    root["infor"] = sub;
    std::cout<<"- Json with nested object: \n" <<root; 
    return 0;
}