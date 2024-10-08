#include <iostream>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

int main() {
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "\nanother_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    string name {"Jesang"};
    cout << "\nname before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;

    vector<string> names {"Jesang", "Tanjok", "Kaizen"};
    cout << "\nNames before calling pass_by_ref3: ";
    print_vector(names);
    pass_by_ref3(names);
    cout << "Names after calling pass_by_ref3: ";
    print_vector(names);
    cout << endl;

    cout << endl;
    return 0;
}

void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();
}

void print_vector(const vector<string> &v) {
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}