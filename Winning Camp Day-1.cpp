DOMAIN WINTER CAMP
(Department of Computer Science and Engineering)
Name: Ankit Vashisth UID: 22BCS13378 Section: KPIT 901-B
DAY 1
Ques 1. Calculate the sum of all natural numbers from 1 to n, where n is a
positive integer. Use the formula:
Sum=n×(n+1)/2.
Take n as input and output the sum of natural numbers from 1 to n.
Program code:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int a;
cin>>a;
cout<<"Sum of n natural number: ";
cout<< a*(a+1)/2<<endl;
return 0;
}
Output:
Ques 2. Print all odd numbers between 1 and n, inclusive. Odd numbers are
integers that are not divisible by 2. These numbers should be printed in
ascending order, separated by spaces.
This problem is a simple introduction to loops and conditional checks. The
goal is to use a loop to iterate over the numbers and check if they are odd
using the condition i%2≠0.
Program code:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;
cout << "Enter a positive integer n: ";
cin >> n;
if (n > 0) {
cout << "Odd numbers between 1 and " << n << " are: ";
for (int i = 1; i <= n; i += 2) {
cout << i << " ";
}
} else {
cout << endl;
cout << "Please enter a positive integer." << endl;
}
return 0;
}
Output:
Ques 3. Count the total number of digits in a given number n. The number
can be a positive integer. For example, for the number 12345, the count of
digits is 5. For a number like 900000, the count of digits is 6.
Given an integer n, your task is to determine how many digits are present in
n. This task will help you practice working with loops, number manipulation,
and conditional logic.
Program Code:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;
cout << "Enter a positive integer n: ";
cin >> n;
if (n > 0) {
int digitCount = 0;
while (n > 0) {
n /= 10; // Remove the last digit
digitCount++;
}
cout << "The total number of digits is: " << digitCount << endl;
} else {
cout << "Please enter a positive integer." << endl;
}
return 0;
}
Output:
Ques 4. Write a program to calculate the area of different shapes using
function overloading. Implement overloaded functions to compute the area of
a circle, a rectangle, and a triangle.
Program Code:
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
Output:
Ques 5. Write a program to demonstrate runtime polymorphism in C++ using
a base class Shape and derived classes Circle, Rectangle, and Triangle. The
program should use virtual functions to calculate and print the area of each
shape based on user input.
Program Code:
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
Output:
