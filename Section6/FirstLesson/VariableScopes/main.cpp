#include <iostream>

using namespace std;

int age {18}; // Global variable

int main() {
    int age {16}; // Local variable

    cout << age << endl;

    return 0;
}