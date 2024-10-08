#include <iostream>

using namespace std;

double calc_volume_cylinder(double radius, double height); // Function prototype
double calc_area_circle(double radius); // Function prototype

void area_circle();
void volume_cylinder();

const double pi {3.14159};

int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius, double height) {
    // return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of circle: ";
    cin >> radius;
    
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};

    cout <<"\nEnter the radius of cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}