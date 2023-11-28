#include <iostream>


 namespace first{
    int x = 1;
 }
 namespace second{
    int x = 2;
 }

int main(){
    //namespaces( provides a solution for preventing name conflict)
    using std::cout;
    int x = 0;

    cout<<second::x;
}