#include <iostream>

enum Day{monday = 0,tesday = 1,wednesday = 2,thursday = 3,today = 4};

int main(){
    Day date = today;

    switch (date)
    {
    case monday:
        std::cout << "today is on a monday";
        break;
    
    case tesday:
        std::cout << "today is on a tuesday";
        break;
    
    case wednesday:
        std::cout << "today is on a wednesday";
        break;
    
    case thursday:
        std::cout << "today is on a thursday";
        break;
    
    case today:
        std::cout << "today is on a tuday";
        break;
    
    default:
        break;
    }
}