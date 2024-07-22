#include <iostream>

using namespace std;

int function_activation_count {0};

double a_penny_doubled_everyday(int m, double n = 0.01);

int main() {
    int n {};
    cout << "Enter the amount of days you want to double: ";
    cin >> n;

    cout << "A penny doubled every day for " << n << " days is " << a_penny_doubled_everyday(n) << endl;
}

double a_penny_doubled_everyday(int m, double n) {
    function_activation_count++;

    if (function_activation_count == m)
        return n;

    return a_penny_doubled_everyday(m, n*2);
}

