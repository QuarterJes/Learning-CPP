#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(int n);

int main() {
    int num {};
    cout << "Enter a number and I will output the sum of each digit: ";
    cin >> num;
    
    cout << sum_of_digits(num) << endl;
}

int sum_of_digits(int n) {
    int remaining_num {n / 10};
    int digit {n % 10};

    if (remaining_num <= 0)
        return n;

    return digit + sum_of_digits(remaining_num);
}