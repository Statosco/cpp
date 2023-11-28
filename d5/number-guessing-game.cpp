#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries = 1;
    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "           ####### NUM G #######\n";

    do
    {
    std::cout << "Enter a Guess Between 1-100 --->> ";
    std::cin >> guess;

    if(guess > num){
        std::cout << "Too High\n";
    }
    else if(guess < num){
        std::cout << "Too Low\n";
    }
    
    else{
        std::cout << "Correct\n" << tries << '\n';
    }
    tries ++;
    } while(guess != num);
    
}