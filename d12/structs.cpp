#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enroled;
};

int main(){
    //A structrue that group realeted variable under one name
    student student1;
    student1.name = "spongbob";
    student1.gpa = 3.4;
    student1.enroled = true;
}