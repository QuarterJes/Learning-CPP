#include <iostream>

using namespace std;

int main() {
    // Character type
    char middle_name {'K'};
    cout << "My middle initial is " << middle_name << endl;

    // Integer types
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_london {9'748'000};
    cout << "There are " << people_in_london << " people in London" << endl;

    long people_on_earth {8'107'875'600};
    cout << "There are " << people_on_earth << " people on Earth" << endl;

    long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometres" << endl;

    // Floating types
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very large number" << endl;

    // Boolean type
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;

    // Overflow examples
    // short value1 {30000};
    // short value2 {1000};
    // short product {value1 * value2};

    // cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;

    return 0;
}