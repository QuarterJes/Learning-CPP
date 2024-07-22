#include <iostream>

using namespace std;

int main() {
    bool equal_result {false};
    bool not_equal_result {false};

    // int num1{}, num2{};

    cout << boolalpha; // Displays true or false rather than a 0 or 1

    // cout << "Enter two integers separated by a space: ";
    // cin >> num1 >> num2;

    // equal_result = num1 == num2;
    // not_equal_result = num1 != num2;
    // cout << "The comparison result (equals): " << equal_result << endl;
    // cout << "The comparison result (not equals): " << not_equal_result << endl;

    // char char1{}, char2{};
    // cout << "Enter two characters separated by a space: ";
    // cin >> char1 >> char2;
    // equal_result = char1 == char2;
    // not_equal_result = char1 != char2;
    // cout << "The comparison result (equals): " << equal_result << endl;
    // cout << "The comparison result (not equals): " << not_equal_result << endl;

    // double double1{}, double2{};
    // cout << "Enter two real numbers separated by a space: ";
    // cin >> double1 >> double2;
    // equal_result = double1 == double2;
    // not_equal_result = double1 != double2;
    // cout << "The comparison result (equals): " << equal_result << endl;
    // cout << "The comparison result (not equals): " << not_equal_result << endl;

    double double1{};
    int int1{};
    cout << "Enter an integer and a double separated by a space: ";
    cin >> int1 >> double1;
    equal_result = int1 == double1;
    not_equal_result = int1 != double1;
    cout << "The comparison result (equals): " << equal_result << endl;
    cout << "The comparison result (not equals): " << not_equal_result << endl;



    cout << endl;
    return 0;
}