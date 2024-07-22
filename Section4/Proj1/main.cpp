/*********************
 * author Jesang
 * 
 * 
*********************/

#include <iostream>

using namespace std;

int main() {
    int number; // this is where the number is stored

    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> number;
    std::cout << "That's my favourite number!" << std::endl;
    std::cout << "No really, " << number << " is my favourite number!" << std::endl;

    return 0;
}