//=============================================================================
// File Name: largerThanTwo
// Author: Ryan A
// Date: August 24, 2026
// Course: CIT-66 C++ Programming
// Instructor: Professor Mohle
// Description: Stores variable and checks if it is larger or smaller than two
//=============================================================================

#include <iostream>
using namespace std;

int main() {
    int num1;

    cout << "\n Is it bigger than 2? \n";
    cin >> num1;

    if (num1>=2) {
        cout << "Your number is larger or equal to 2";
    }
    else{
        cout << "Your number is smaller than 2";
    }

    cin.get();
    cin.ignore();
    return 0;
}
