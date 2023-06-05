#include <iostream>
#include <sstream>
#include <stdexcept>
int main()
{
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    try {
        int number;
        std::istringstream stream(input);

        if(!(stream >> number)) {
            throw std::invalid_argument("That was not a valid number.");
        } else {
            std::cout << "You entered the number: " << number << std::endl;
        }

    } catch (std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

