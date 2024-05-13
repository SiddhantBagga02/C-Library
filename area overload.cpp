#include <iostream>

using namespace std;

// Function to calculate area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate perimeter of a square
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    // Calculate and display area
    cout << "Area of the square: " << calculateArea(side) << endl;

    // Calculate and display perimeter
    cout << "Perimeter of the square: " << calculatePerimeter(side) << endl;

    return 0;
}