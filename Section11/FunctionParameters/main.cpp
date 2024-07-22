#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int);
void pass_by_value2(string);
void pass_by_value3(vector<string>);
void print_vector(vector<string>);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();
}

void print_vector(vector<string> v) {
    for (auto i: v)
        cout << i << " ";
    cout << endl;
}

int main() {
    int num {10};
    string name {"Jesang"};
    vector<string> ballers {"Jesang", "Tanjok", "Romin"};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    cout << "\nstring before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "string after calling pass_by_value2: " << name << endl;

    cout << "\nBallers before calling pass_by_value3: ";
    print_vector(ballers);
    pass_by_value3(ballers);
    cout << "Ballers after calling pass_by_value3: ";
    print_vector(ballers);

    cout << endl;
    return 0;
}