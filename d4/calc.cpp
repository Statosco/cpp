#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "###--************__CALC__**************----###\n";

    std::cout << "Enter operator --->>";
    std::cin >> op;

    std::cout << ".... --->>";
    std::cin >> num1;
    std::cout << ".... --->>";
    std::cin >> num2;

    switch (op)
    {
    case '+':;
       result = num1 + num2;
       std::cout << result;
        break;
    case '*':;
       result = num1 * num2;
       std::cout << result;
        break;
    case '/':;
       result = num1 / num2;
       std::cout << result;
        break;
    case '-':;
       result = num1 - num2;
       std::cout << result;
        break;
    
    default:
        break;
    }


    std::cout << "###--**************************----###";
}