#include <iostream>

int main()
{
    // tells user to enter numbers
    std::cout << "Enter in the following numbers: " << std::endl; // Added a colon for clarity

    int a, b, c;

    // Cin enters the users keyboard inputs 
    std::cin >> a >> b >> c;

    std::cout << a + b + c << " Is your solution!" << std::endl; // Space added before "Is your solution!"
}
