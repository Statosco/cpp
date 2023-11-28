#include <iostream>


int main(){
    int age;

    std::cout << "Enter Your Age --->> ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "welcome to the site";
    }
    else if(age < 0){
        std::cout << "invalid age";
    }
    else{
        std::cout << "you are '" << age << "' is not eligable for this site";
    }
}