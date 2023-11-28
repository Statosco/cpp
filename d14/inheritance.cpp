#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "this animal is eating";
    }
};
class Dog : public Animal{};

int main(){
    Dog dog;

    std::cout << dog.alive;
}