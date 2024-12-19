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
