#include <iostream>

int main(){
    //dynamic memory = memory that is allocated after a programm
                     //is already compiled & running.
                     //Use the 'new' operator to alocate
                     //memory in heap rather rhan stack
    int *pNum = NULL;

    pNum = new int;


    *pNum = 21;

    delete pNum;                 
}