#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool aid";
    std::string y = "water";
    std::string temp;

    // temp = x;
    // x = y;
    // y = temp;
    swap(x, y);

    std::cout << "y: " << y << '\n';
    std::cout << "X: " << x << '\n';
    std::cout << "temp: " << temp << '\n';
}
void swap(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}