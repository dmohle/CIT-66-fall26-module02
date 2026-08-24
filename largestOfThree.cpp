//=============================================================================
// File Name: largestOfThree
// Author: Ryan A
// Date: August 24, 2026
// Course: CIT-66 C++ Programming
// Instructor: Professor Mohle
// Description: Stores variable and checks if it is larger or smaller
//=============================================================================

#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 0;

    cout << "\n Is it bigger or smaller? \n";
    cin >> num1;
    cin >> num2;

    if (num1>=num2) {
        cout << "Num1 is greater or equal to Num2 \n";
    }
    else{
        cout << "Num1 is less than Num2 \n";
    }

    cin.get();
    cin.ignore();
    return 0;
}
