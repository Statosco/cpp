#include <iostream>

int main(){
    double temp;
    char unit;
    
    std::cout << "####----***************__TEMP__*************-----####\n";

    std::cout << "F - Ferhanite\nC - Celsious\n";

    std::cout << "What Unit Would You LIke To Convert To? --->>";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
    std::cout << "enter the temperature in celsius --->> ";
    std::cin >> temp;
    temp = (1.8 * temp) + 32.0;
    std::cout << temp << " Ferhanite";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "enter the temperature in Ferhanite --->> ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << temp << " Celsius";
    }

    std::cout << "\n####----*********__TEMP__**********-----####";
}