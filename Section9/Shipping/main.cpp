#include <iostream>
#include <iomanip>

using namespace std;

/*
Shipping cost calculator

Ask the user for package dimensions in inches
length, width, and height - these should be integers

All dimensions must be 10 inches or less or we cannot ship it

Base cost £2.50
If package volume is greater than 100 cubic inches then there is a 10% surcharge
If package volume is greater than 500 cubic inches then there is a 25% surcharge

*/

int main() {
    int length{}, width{}, height{}, package_volume{};
    double base_cost {2.50};

    const int max_dimension_length {10};
    const int tier1_threshold {100};
    const int tier2_threshold {500};

    const double tier1_surcharge {0.1};
    const double tier2_surchage {0.25};
    cout << "Enter your package dimensions in inches separated by spaces (length width height): ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected. Dimensions exceeded." << endl;
    } else {
        double package_cost {};
        package_volume = (length * width * height);
        package_cost = base_cost;

        if (package_volume > tier2_threshold) {
            package_cost += (package_cost * tier2_surchage);
        } else if (package_volume > tier1_threshold) {
            package_cost += (package_cost * tier1_surcharge);
        }

        cout << fixed << setprecision(2); // Prints gbp nicely
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost £" << package_cost << " to ship" << endl;
    }
    

    cout << endl;
    return 0;
}