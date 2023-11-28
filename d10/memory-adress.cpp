#include <iostream>

int main(){

    //memory adress - a location in memory where data is stored
    //a memory adress can be accesed with & (adress-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name;
    std::cout << &student;
}