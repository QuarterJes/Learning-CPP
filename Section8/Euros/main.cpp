#include <iostream>

using namespace std;

int main() {
    const double usd_per_eur {1.08};

    cout << "Welcome to the EUR to USD converter." << endl;
    cout << "Enter the value in euros: ";

    double euros {0.00};
    double dollars {0.00};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << "Euros is equivalent to $" << dollars << endl;

    cout << endl;
    return 0;
}