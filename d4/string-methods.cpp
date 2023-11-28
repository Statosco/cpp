#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter Name --->> ";
    std::getline(std::cin, name);

    // returns the full length of a string
    if(name.length()){
        std::cout << "Your Name Cant Be Over 12";
    }
    // returns a boolean value
    if(name.empty()){
        std::cout << "Your Name Cant Be Over 12";
    }

    // will clear the string
    name.clear();
    //  will add a given value at the end of a string
    name.append("$fff");

    // will insert something at a given index
    name.insert(0, "FFD");

    // will return the index in which the character if found
    name.find(' ');

    // will return a charactor at given index
    std::cout << name.at(0);

    //will erase a number of charater from a given value to including the last index
    name.erase(0,3);
}