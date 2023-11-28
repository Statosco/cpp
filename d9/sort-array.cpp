#include <iostream>
void sort(int arr[],int size);
 
int main(){
    int arr[] = {5,6,3,4,5,6,8,9,0,10};
    int size = sizeof(arr)/sizeof(arr[1]);

    sort(arr, size);

    for(int el: arr){
        std::cout << el << " ";
    }
}
void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
