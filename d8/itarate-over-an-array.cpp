#include <iostream>

int main(){
    std::string students[] = {"blob", "alsis", "brother"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i];
    }
}