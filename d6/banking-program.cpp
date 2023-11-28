#include <iostream>
#include <iomanip>

double showBal(double b);
double deposit();
double withdrawal(double balance);

int main(){
    double balance = 0;
    int choice = 0;

do
{
    std::cout << "**************************\n";
    std::cout << "Enter Your Choice\n";
    std::cout << "**************************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;
   switch (choice)
    {
    case 1: showBal(balance);
        break;
    case 2: balance += deposit();
        break;
    case 3: balance-= withdrawal(balance);
        break;
    case 4: std::cout << "thanks for the visit (:";
        break;

    default:
    std::cout << "invalid choice";

        break;
    }
} while (choice != 4);

}
double showBal(double b){
    std::cout << "your balance is $"<< std::setprecision(2) << std::fixed << b;
    return b;
}
double deposit(){
    double amount = 0;

    std::cout << "Enter amount to be deposited --->> ";
    std::cin >> amount;

    if(amount > 0){
    return amount;

    }else{
        std::cout << "Amount should be greater than zero\n";
        return 0;
    }

};
double withdrawal(double balance){
    double amount = 0;

    std::cout << "Enter amount to be withdrawed --->> ";
    std::cin >> amount;
     if(amount > balance){
        std::cout << "insuficient funds\n";
     }else if(amount < 0){
        std::cout << "thats not a valid amount\n";
        
     }
    return amount;
};