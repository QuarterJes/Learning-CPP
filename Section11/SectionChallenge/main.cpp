// Analysis - more methods could be used in this solution such as when handling the display or handling the mean.
// Some methods should also take in a const vector so that it does not change value by accident when the method is not
// supposed to modify any values

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Here is a new method that shows how the solution could be improved
void handle_find(const vector<int> &v);

bool find(const vector<int> &v, int target);

char display_menu();
void print_numbers(vector<int> &v);
void add_number (vector<int> &v);
void find_mean(vector<int> &v);
void display_largest_num(vector<int> &v);
void display_smallest_num(vector<int> &v);

int main() {
    display_menu();

    cout << endl;
    return 0;
}

char display_menu() {
    char selection {};
    vector<int> v {};
    cout << "=============================" << endl;
    cout << "\nP - Print Numbers\nA - Add a number\nM - Display mean of the numbers"
    << "\nS- Display the smallest number\nL - Display the largest number\nF - Find a number\nQ - Quit"
    << "\nEnter your choice: ";

    cin >> selection;
    selection = tolower(selection);

    while (selection != 'q') {
        if (selection == 'p') {
            print_numbers(v);
        } else if (selection == 'a') {
            add_number(v);
        } else if (selection == 'm') {
            find_mean(v);
        } else if (selection == 'l') {
            display_largest_num(v);
        } else if (selection == 's') {
            display_smallest_num(v);
        } else if (selection == 'f') {
            handle_find(v);
        } else {
            cout << "\nInvalid choice." << endl;
        }

        cout << "\n=============================" << endl;
        cout << "\nP - Print Numbers\nA - Add a number\nM - Display mean of the numbers"
        << "\nS- Display the smallest number\nL - Display the largest number\nF - Find a number\nQ - Quit"
        << "\nEnter your choice: ";

        cin >> selection;
    }
    
    return selection;
}

void print_numbers (vector<int> &v) {
    if (v.size() == 0) {
        cout << "\n[] - The list is empty" << endl;
    } else {
        cout << "[ ";
        for (auto i : v)
            cout << i << " ";
        cout << "]" << endl;
    }
}

void add_number(vector<int> &v) {
    int num {};
    cout << "\nEnter the number you would like to add to the list: ";
    cin >> num;
    v.push_back(num);
}

void find_mean(vector<int> &v) {
    if (v.size() == 0) {
        cout << "\nUnable to calculate the mean - no data" << endl;
    } else {
        double total {};
        double mean {};

        for (auto i : v)
            total+= i;

        mean = total / v.size() ;
        cout << setprecision(3) << endl;
        cout << "\nThe mean of the numbers is " << mean << endl;
    }
}

void display_largest_num(vector<int> &v) {
    if (v.size() == 0) {
        cout << "No data!" << endl;
    } else {
        int largest_num {v.at(0)};
        for (auto i : v) {
            if (i > largest_num)
                largest_num = i;
        }
        cout << "The largest number in the list is: " << largest_num << endl;
    }
}

void display_smallest_num(vector<int> &v) {
    if (v.size() == 0) {
        cout << "No data!" << endl;
    } else {
        int smallest_num {v.at(0)};
        for (auto i : v) {
            if (i < smallest_num)
                smallest_num = i;
        }
        cout << "The smallest number in the list is: " << smallest_num << endl;
    }
}

void handle_find(const vector<int> &v) {
    int target {};
    cout << "Enter the number to find: ";
    cin >> target;
    
    if (find(v, target))
        cout << target << " was found";
    else
        cout << target << " wasn't found";
}

bool find(const vector<int> &v, int target) {
    for (auto item : v)
        if (item == target)
            return true;
    return false;
}