#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    // cout << first_name << endl; Will display garbage
    // cout << "Enter your first name: ";
    // cin >> first_name;

    // cout << "Enter your last name: ";
    // cin >> last_name;

    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "And your last name is " << last_name << " and has " << strlen(last_name) << " characters" << endl;

    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);
    // cout << "Your full name is " << full_name << endl;

    // cout << "------------------------------" << endl;
    // cout << "Enter your full name: ";
    // cin >> full_name;
    // cout << "Your full name is " << full_name << endl;
    // What happened in this code?
    // The line cin >> full_name only took in a string until a whitespace was found, and thus only displayed the first name

    // Here is how to go past that
    cout << "Etner your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "-----------------------------------" << endl;
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different" << endl;
    }

    for (size_t i{0}; i < strlen(full_name); i++) {
        if (isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is " << full_name << endl;

    cout << "------------------------------------" << endl;
    if (strcmp(temp, full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different" << endl;
    }

    cout << "------------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    cout << endl;
    return 0;
}