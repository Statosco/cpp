#include <iostream>

int main(){
    std::string name = "states";

    std::string *pName = &name;

    std::cout << *pName;

}