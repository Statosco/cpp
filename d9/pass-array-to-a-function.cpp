#include <iostream>
double getTotal(double p[], int s);

int main(){
    double prices[] = {69.4, 35.4, 434.43};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << '$' << total;
}
double getTotal(double p[], int s){
    double total = 0;

    for(int i = 0; i < s; i++){
        total+= p[i];
    }
    return total;

}