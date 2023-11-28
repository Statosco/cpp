#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->age = age;
        this->name = name;
        this->gpa = gpa;
    }
    
};


int main(){
    Student s1("spongbob", 23, 3.4);
}