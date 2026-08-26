//=============================================================================
// File Name: largestOfThree
// Author: Ryan A.
// Date: August 26, 2026
// Course: CIT-66 C++ Programming
// Instructor: Professor Mohle
// Description: Finds the largest of three integers using nested if statements
//=============================================================================

#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 0, num3 = 0, largest = 0;

    cout << "\nEnter first integer: ";
    cin >> num1;
    cout << "\nEnter second integer: ";
    cin >> num2;
    cout << "\nEnter third integer: ";
    cin >> num3;

//============================================================
//EXTRA CREDIT LOGIC: Compound Condition with logical AND (&&)
//============================================================

    if (num1>=num2 && num1>=num3) {
        largest = num1;
    }
    else if (num2>=num3) {
        largest = num2;
    }
    else {
        largest = num3;
    }

    cout << "\nThe largest integer is " << largest << "\n";

    cin.get();
    cin.ignore();
    return 0;
}
