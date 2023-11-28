#include <iostream>

int searchArray(int a[], int s, int l);

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,9};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;


    std::cout << "Enter element to search for\n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }else{
        std::cout << myNum << " is not in the array ";
    }
     
}
int searchArray(int a[], int s, int l){
    for(int i = 0; i < s; i++){
        if(a[i] == l){
            return i;
        }
    }
    return -1;
}
