#include <iostream>
#include <ctime> // Include the ctime library for srand and rand

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));

    int num = (std::rand() % 6) + 1;
    int num1 = (std::rand() % 6) + 1;
    int num2 = (std::rand() % 6) + 1;
    int num3 = (std::rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    std::cout << num;

    return 0; // Ensure to return an integer from the main function
}
