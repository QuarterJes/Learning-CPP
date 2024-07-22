#include <iostream>

using namespace std;

int main() {
    int num1 {10};
    int num2 {20};

    num1 = num2 = 1000; // The compiler starts from the right side and evaluate the right side's rvalue.
                        // rvalue is the value that is stored in the variable's address
                        // Subsequently, an lvalue is the memory address of where the variable is stored.

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}