#include <iostream>

void happyBirthday(std::string name,int age);

int main(){
    std::string name = "alberts";
    int age =19;

    happyBirthday(name, age);
}
void happyBirthday(std::string birthBoy,int age){
    std::cout << "happy birthday\n" << birthBoy << "and You are" << age;
}