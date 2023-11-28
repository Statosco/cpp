#include <iostream>

int main(){
    int temp;

    std::cout << "Enter The Temperature --->> ";
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "the temperature is good";
    }

    if (temp <= 0 || temp >= 30){
        std::cout << "the temperature is good";
    }
    if (temp != 0 || temp != 30){
        std::cout << "the temperature is good";
    }
}