#include <iostream>

int main(){
    std::string name;
    while(name.empty()){
        std::cout << "Enter your name --->>";
        std::cin >> name;
    }
    std::cout << "hello " << name;
}