#include <iostream>

using namespace std;

/*

1 dollar = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent

Get amount of cents from users -> cents
Start with the highest value first
cents % dollar = number_of_dollars
cents -= (dollar * number_of_dollars)
cents % quarter = number_of_quarters
cents -= (quarter * number_of_quarters)
cents % dime = number_of_dimes
cents -= (dime * number_of_dimes)
cents % nickel = number_of_nickels
cents -= (nickel * number_of_nickels)
number_of_pennies = cents




*/

int main() {
    const int dollar {100}, quarter {25}, dime {10}, nickel {5};
    int cents {0};
    cout << "Enter the amount of pennies: ";
    cin >> cents;

    int number_of_dollars {};
    number_of_dollars = cents / dollar;
    cents -= (number_of_dollars * dollar);

    int number_of_quarters {};
    number_of_quarters = cents / quarter;
    cents -= (number_of_quarters * quarter);

    int number_of_dimes {};
    number_of_dimes = cents / dime;
    cents -= (number_of_dimes * dime);

    int number_of_nickels {};
    number_of_nickels = cents / nickel;
    cents -= (number_of_nickels * nickel);

    int number_of_pennies {};
    number_of_pennies = cents;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "Dollars: " << number_of_dollars << endl;
    cout << "Quarters: " << number_of_quarters << endl;
    cout << "Dimes: " << number_of_dimes << endl;
    cout << "Nickels: " << number_of_nickels << endl;
    cout << "Pennis: " << number_of_pennies << endl;

    cout << endl;
    return 0;
}