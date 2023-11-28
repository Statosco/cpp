#include <iostream>

class Stove{
    private:
        int temp = 0;
    public:
        int getTemo(){
            return temp;
        }
};

int main(){
    Stove stove;

    // stove.temp = 1000000;

    std::cout << stove.getTemo();
}