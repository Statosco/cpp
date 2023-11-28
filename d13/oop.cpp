#include <iostream>

class Human
{
    public:
        std::string name;
        std::string ocupation;
        int age;

        void eat(){
            std::cout << "this person is eating";
        }
        void drink(){
            std::cout << "this person can drink";
        }
        void sleep(){
            std::cout << "this person is sleeping";

        }
};


int main(){
    Human drae;

    drae.name = "dr.drae";
    drae.age = 50;
    drae.ocupation = "dj";

    drae.eat();
    drae.drink();
    drae.sleep();
}