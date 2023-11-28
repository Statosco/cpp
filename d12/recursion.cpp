#include <iostream>

void walk(int steps);

int main(){
    walk(100);
}
void walk(int steps){
    if(steps > 0){
        std::cout << "you take a step\n";
        walk(steps - 1);
    }
}