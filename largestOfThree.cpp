//===================================================================================
//File Name: largestOfThree.cpp
//Author: Cade Shubin
//August 26, 2026
//Course: CIT-66 C++ Programming
//Instructor: Professor Mohle
//Description: Prompts the user for 3 integers, then finds the largest of the three integers
//====================================================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my largestOfThree program :) " << std::endl;
    {
        //introduces the num integers, then defines the num integers as zero
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        {
            //prompts the user for three integers, which then replace the zeros of num1, num2 and num3
            cout << "Please input three numbers with spaces in between: ";
            cin >> num1 >> num2 >> num3;
        }
        {
            {
                //finds if num1 is greatest
                if (num1 > num2 && num1 > num3) {
                    cout << num1 << " is greatest ";
                }
                //finds if num2 is greatest
                else if (num2 > num1 && num2 > num3) {
                    cout << num2 << " is greatest ";
                }
                //finds if num3 is greatest
                else if (num3 > num1 && num3 > num2) {
                    cout << num3 << " is greatest ";
                }
            }
        }
    return 0;
    }
}
