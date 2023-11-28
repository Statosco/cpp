#include <iostream>

template <typename Thing, typename U>

auto max(Thing x,U y){
    return (x > y) ? x : y;
}
int main(){
    std::cout << max(1,2);
}