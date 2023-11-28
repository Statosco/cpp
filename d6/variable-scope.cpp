#include <iostream>
// local
void print(int num);

int main(){

    int num = 1;
    print(num);

}
void print(int num){
    num =19;
    std::cout << num;
};

//gloabal

int num = 3;
void print();

int main(){

    print();

}
void print(){
    std::cout << ::num;
};

