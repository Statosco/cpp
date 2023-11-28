#include <iostream>

int getDigit(const int number);
int sumOddDigit(const std::string cardNum);
int sumEvenDigit(const std::string cardNum);

int main(){
    std::string cardNum;
    int result = 0;

    std::cout << "Enter a credit card --->>";
    std::cin >> cardNum;

    result = sumEvenDigit(cardNum) + sumOddDigit(cardNum);
    if(result % 10 == 0){
        std::cout << cardNum << " is valid";
    }
    else{
        std::cout << cardNum << " is not valid";
    }
}

int getDigit(const int number){
    return number % 10 + (number/ 10 % 10);
}
int sumOddDigit(const std::string cardNum){
   int sum = 0;

    for(int i = cardNum.size() - 1; i >= 0; i-=2){
        sum += (cardNum[i] - '0');
    }
    return sum; 
}
int sumEvenDigit(const std::string cardNum){
    int sum = 0;

    for(int i = cardNum.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNum[i] - '0')*2);
    }
    return sum;
}