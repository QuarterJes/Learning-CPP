#include <iostream>

using namespace std;

int main() {
    // cout << "Enter a positive number - start the countdown: ";
    // int num {};
    // cin >> num;

    // while (num > 0) {
    //     cout << num << endl;
    //     num--;
    // }
    // cout << "Blast off!" << endl;

    // int num {};
    // cout << "Enter a positive number to count up to: ";
    // cin >> num;

    // int i {1};
    // while (i <= num) {
    //     cout << i << endl;
    //     i++;
    // }

    // int num {};
    // cout << "Enter a number less than 100: ";
    // cin >> num;

    // while (num >= 100) {
    //     cout << "Enter a number less than 100: ";
    //     cin >> num;
    // }

    // cout << "Thanks" << endl;

    bool done {false};
    int number {0};

    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >= 5) {
            cout << "Try again" << endl;
        } else {
            cout << "Thanks" << endl;
            done = true;
        }
    }

    cout << endl;
    return 0;
}