#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nHere are the elements of vector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector1 is " << vector1.size() << endl;

    vector <int> vector2;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nHere are the elements of vector2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector2 is " << vector2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\nHere are the elements of vector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << ", ";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << ", ";
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nHere are the updated elements of vector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << ", ";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << ", ";
    cout << vector_2d.at(1).at(1) << endl;

    cout << "\nHere are the updated elements of vector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector1 is " << vector1.size() << endl;

    cout << "\nHere are the updated elements of vector2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector2 is " << vector2.size() << endl;

    return 0;
}