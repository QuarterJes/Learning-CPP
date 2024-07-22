#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string word {};
    cout << "Enter text with no spaces to make a nice pyramid: ";
    cin >> word;
    size_t n {word.length()};
    
    for (size_t i {0}; i < n; i++) {
        size_t letters {};
        size_t half_way {};
        letters = (2 * i) + 1;
        half_way = letters / 2;
        for (size_t j {1}; j < n - i; j++) {
            cout << " ";
        }
        for (size_t j {0}; j <= half_way; j++) {
            cout << word.at(j);
        }
        if (half_way != 0) {
            for (size_t j {half_way}; j > 0; j--) {
                cout << word.at(j-1);
            }
        }
        cout << endl;
    }

    return 0;
}