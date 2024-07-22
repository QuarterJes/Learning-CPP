#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    // Seed the random number generator
    // If you don't seed the generator, you will get the same sequence of random numbers every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); // Seeds the random number generator

    for (size_t i {1}; i <= count; i++) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    cout << endl;
    return 0;
}