#include <bits/stdc++.h>
using namespace std;
#define ll long long
double area(double radius) {
return M_PI * radius * radius;
}
double area(double length, double width) {
return length * width;
}
double area(double base, double height, bool isTriangle) {
return 0.5 * base * height;
}
int main() {
double radius, length, width, base, height;
cout << "Enter the radius of the circle: ";
cin >> radius;
cout << "Enter the length and width of the rectangle: ";
cin >> length >> width;
cout << "Enter the base and height of the triangle: ";
cin >> base >> height;
cout << "\nAreas of the shapes:\n";
cout << "Circle: " << area(radius) << endl;
cout << "Rectangle: " << area(length, width) << endl;
cout << "Triangle: " << area(base, height, true) << endl;
return 0;
