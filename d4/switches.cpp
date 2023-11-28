#include <iostream>
int main(){
    //compares values to matching cases
    int month;
    std::cout << "Enter The Month -->> ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "This is january";
        break;
    case 2:
        std::cout << "This is febuary";
        break;
    case 3:
        std::cout << "This is march";
        break;
    case 4:
        std::cout << "This is april";
        break;
    case 5:
        std::cout << "This is may";
        break;
    case 6:
        std::cout << "This is june";
        break;
    case 7:
        std::cout << "This is july";
        break;
    case 8:
        std::cout << "This is august";
        break;
    case 9:
        std::cout << "This is september";
        break;
    case 10:
        std::cout << "This is october";
        break;
    case 11:
        std::cout << "This is november";
        break;
    case 12:
        std::cout << "This is december";
        break;
    
    default:
        break;
    }
}
