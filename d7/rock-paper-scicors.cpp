#include <iostream>
#include <ctime>

char getUserChoice();
char getCompChoice();
void showChoice(char choice);
void choseWinner(char p, char c);

int main(){
    char player;
    char comp;

    player = getUserChoice();
    std::cout << "your choice is: ";
    showChoice(player);

    char computer = getCompChoice();
    std::cout << " computer choice is: ";
    showChoice(computer);

    choseWinner(player,comp);
}

char getUserChoice(){
    char player;
    

    do
    {
        std::cout << "Rock-Paper-Scissors\n";
        std::cout << "*******************\n";
        std::cout << "'r' for ROCK\n";
        std::cout << "'p' for PAPER\n";
        std::cout << "'c' for SCISSORS\n";

    std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 'c');

    return player;
};
char getCompChoice(){
    srand(time(0));
    int num = rand() % 3 +1;

    switch (num)
    {
    case 1:

        return 'r';
    case 2:

        return 'p';
    case 3:

        return 'c';
    
    default:
        break;
    }
};
void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "Rock";
        break;
    case 'p':
        std::cout << "Paper";
        break;
    case 'c':
        std::cout << "Scissors";
        break;
    
    default:
        break;
    }
};
void choseWinner(char p, char c) {
    if (p == c) {
        std::cout << " It's a tie!\n";
    } else if ((p == 'r' && c == 's') || (p == 's' && c == 'p') || (p == 'p' && c == 'r')) {
        std::cout << " You win!\n";
    } else {
        std::cout << " You lose!\n";
    }
}



