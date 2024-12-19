#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Shape {
public:
virtual void area() = 0; // Pure virtual function
virtual ~Shape() {}
};
class Circle : public Shape {
double radius;
public:
Circle(double r) : radius(r) {}
void area() override {
cout << "Area of Circle: " << M_PI * radius * radius << endl;
}
};
class Rectangle : public Shape {
double length, width;
public:
Rectangle(double l, double w) : length(l), width(w) {}
void area() override {
cout << "Area of Rectangle: " << length * width << endl;
}
};
class Triangle : public Shape {
double base, height;
public:
Triangle(double b, double h) : base(b), height(h) {}
void area() override {
cout << "Area of Triangle: " << 0.5 * base * height << endl;
}
};
int main() {
double radius, length, width, base, height;
cout << "Enter the radius of the circle: ";
cin >> radius;
Circle circle(radius);
cout << "Enter the length and width of the rectangle: ";
cin >> length >> width;
Rectangle rectangle(length, width);
cout << "Enter the base and height of the triangle: ";
cin >> base >> height;
Triangle triangle(base, height);
Shape* shapes[] = { &circle, &rectangle, &triangle };
cout << "\nCalculating areas of shapes:\n";
for (Shape* shape : shapes) {
shape->area();
}
return 0;
}
