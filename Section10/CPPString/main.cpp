#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};
    string s7 (10, 'X');

    // cout << s0 << endl;
    // cout << s0.length() << endl;

    // Comparison
    // cout << "\nComparison " << "\n----------------------------------" << endl;
    // cout << boolalpha;
    // cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    // cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    // cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    // cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    // cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    // cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    // cout << s1 << " == Apple: " << (s1 == "Apple") << endl;

    // s1 = "Watermelon";
    // cout << "s1 is now " << s1 << endl;
    // s2 = s1;
    // cout << "s2 is now " << s2 << endl;
    // s3 = "Frank";
    // cout << "s3 is now " << s3 << endl;

    // s3[0] = 'C';
    // cout << "s3 change first letter to 'C': " << s3 << endl;
    // s3.at(0) = 'P';
    // cout << "s3 change first letter to 'P': " << s3 << endl;

    // Concatenation
    // s3 = "Watermelon";
    // cout << "\nConcatenation\n-------------------------------" << endl;
    // s3 = s5 + " and " + s2 + " juice";
    // cout << "s3 is now: " << s3 << endl;

    // Looping
    // s1 = "Apple";
    // for (size_t i{0}; i < s1.length(); i++) {
    //     cout << s1.at(i);
    // }

    // cout << endl;

    // for (char c: s1) {
    //     cout << c;
    // }

    // Substring
    // s1 = "This is a test";

    // cout << s1.substr(0, 4) << endl;
    // cout << s1.substr(5, 2) << endl;
    // cout << s1.substr(10,4) << endl;

    // Erase
    // s1 = "This is a test";
    // s1 = s1.erase(0,5);
    // cout << "s1 is now: " << s1 << endl;

    // Getline
    // string full_name {};

    // cout << "Enter your full name: ";
    // getline(cin, full_name);
    // cout << "Your full name is: " << full_name << endl;

    // Find
    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos) {
        cout << "Found " << word << " at position " << position << endl;
    } else {
        cout << "Sorry " << word << " was not found" << endl;
    }


    cout << endl;
    return 0;
}