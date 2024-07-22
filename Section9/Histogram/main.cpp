#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number_of_items {};
    cout << "How many data items do you have? ";
    cin >> number_of_items;

    vector<int> data;

    for (int i{1}; i <= number_of_items; i++) {
        int data_item {};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplaying histogram" << endl;
    for (auto val: data) {
        for (int i{1}; i <= val; i++) {
            cout << ((i % 5 ==0) ? "*" : "-" );
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}