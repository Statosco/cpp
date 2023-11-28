#include <iostream>

int main(){
    int number;
    
    do{
        std::cout << "enter a number --->>";
        std::cin >> number;
    }while (number < 0);
    std::cout << "this is "<< number;
    
}