#include <iostream>

void bakePizza();
void bakePizza(std::string toppins1);

int main(){

void bakePizza();
}
void bakePizza(){
    std::cout << "Here is Your Pizza";
}
void bakePizza(std::string toppins1){
    std::cout << "Here is Your Pizza" << toppins1;
}
void bakePizza(std::string toppins1,std::string toppins2){
    std::cout << "Here is" << toppins1 << "Your Pizza" << toppins2;
}