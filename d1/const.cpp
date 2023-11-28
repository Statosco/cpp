#include <iostream>

int main(){
    //read only variable 
    const double P1 = 3.124453;
    double radius = 10;
    double circamfrence = 2 * P1 * radius;

    std::cout << circamfrence << "cm";
}