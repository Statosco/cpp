#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "enter size A -->> ";
    std::cin >> a;

    std::cout << "enter size Ab -->> ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c;

}