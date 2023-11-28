#include <iostream>

int main(){
    //cin >> (extraction operator)
    //cout << (extraction operator)
    std::string name;
    int age;

    std::cout << "what is your full name --> ";
    //to get a full text with white spaces we will use the syntax bellow 
    //and if we had cin above our getline we would use the extraction operator followd by ws fo whitespaces 
    std::getline(std::cin >> std::ws, name);

    std::cout << "what is your age ---> ";
    std::cin >> age;

    std::cout << "hello " << name;
    std::cout << " you are " << age;
}