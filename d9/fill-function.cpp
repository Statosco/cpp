#include <iostream>

int main(){
    //fill() - fills a range of elements with a specified value
    //fill(begin, end, value)
    const int s = 100;
    std::string foods[s];

    fill(foods, foods + s/2, "pitza");
    fill(foods + s/2, foods + s, "chesse");

    for(std::string food : foods){
        std::cout << food << '\n';
    }
}