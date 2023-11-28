#include <iostream>

int main(){
    //returns the resault of a specific arthmatic operation

    int students = 20;
    //addition operators
    students = students +1;
    students+=1;
    students ++;

    //subtruction operators

    students = students - 1;
    students-=2;
    students--;

    //multiplication operators
    students = students *2;
    students*=2;


    //division operators
    students = students / 2;
    students/=2;

    //remainders operators
    int remainder = students % 2;

    std::cout << students;
}