#include <iostream>
#include <vector>

using namespace std;

int main() {
    char selection {};
    vector<int> numbers;

    do {
        cout << "\n===================" << endl;
        cout << "\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers"
        << "\nS - Display the smallest number\nL - Display largest number\nQ - quit"
        << "\nEnter your choice: ";
        cin >> selection;
        if (selection == 'p' || selection == 'P') {
            if (numbers.empty()) {
                cout << "\n[] - the list is empty" << endl;
            } else {
                cout << "\n[ ";
                for (int i{0}; i < numbers.size(); i++) {
                    cout << numbers.at(i) << " ";
                }
                cout << "]" << endl;
            }
        } else if (selection == 'a' || selection == 'A') {
            int num {};
            cout << "\nEnter the number you would like to add to the list: ";
            cin >> num;
            numbers.push_back(num);
        } else if (selection == 'm' || selection == 'M') {
            if (numbers.size() != 0) {
                int total {};
                for (int i{0}; i < numbers.size(); i++) {
                    total += numbers.at(i);
                }
                cout << "\nThe mean of the list is " << (total / numbers.size()) << endl;
            } else {
                cout << "\nUnable to calculate the mean - no data" << endl;
            }
        } else if (selection == 's' || selection == 's') {
            if (numbers.size() != 0) {
                int smallest {numbers.at(0)};
                for (int i{1}; i < numbers.size(); i++) {
                    if (smallest > numbers.at(i)) {
                        smallest = numbers.at(i);
                    }
                }
                cout << "\nThe smallest value in the list is " << smallest << endl;
            } else {
                cout << "\nUnable to find the smallest - no data" << endl;
            }
        } else if (selection == 'l' || selection == 'L') {
            if (numbers.size() != 0) {
                int largest {numbers.at(0)};
                for (int i{1}; i < numbers.size(); i++) {
                    if (largest < numbers.at(i)) {
                        largest = numbers.at(i);
                    }
                }
                cout << "\nThe largest value in the list is " << largest << endl;
            } else {
                cout << "\nUnable to find the largest - no data" << endl;
            }
        } else if (selection == 'q' || selection == 'Q') {
            cout << "\nThanks" << endl;
        } else {
            cout << "\nPlease enter a valid option" << endl;
        }
    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}