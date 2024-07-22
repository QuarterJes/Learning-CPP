#include <iostream>

using namespace std;

int main() {
    int counter {10};
    int result {0};

    // Example 1 - simple increment
    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;

    // counter++;
    // cout << "Counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter << endl;

    // Example 2 - preincrement
    // cout << "Counter: " << counter << endl;
    // result = ++counter; // Not the preincrement
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Example 3 - post increment
    // cout << "Counter: " << counter << endl;

    // result = counter++; // Not the post increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Example 4
    // cout << "Counter: " << counter << endl;

    // result = ++counter + 10;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Example 5
    cout << "Counter: " << counter << endl;

    result = counter++ + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    

    return 0;
}