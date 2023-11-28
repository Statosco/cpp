#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;
    switch (randNum)
    {
    case 1:
        std::cout << "roll once";
        break;
    case 2:
        std::cout << "roll twice";
        break;
    case 3:
        std::cout << "roll three times";
        break;
    case 4:
        std::cout << "roll four times";
        break;
    case 5:
        std::cout << "roll five times";
        break;
    
    default:
        break;
    }
}