//=========================
// File Name: largestOfThree.cpp
// Author: Arly Bernardino
// Date: August 26. 2026
// CIT-66 C++ Programming
// Instructor: Professor Mohle
// Description:Finds the largest of three integers uding nested if statements.
//=========================

#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	int largest = 0;

	cout << "Enter first integer: ";
	cin >> num1;

	cout << "Enter second integer: ";
	cin >> num2;

	cout << "Enter third integer: ";
	cin >> num3;

	// Determine the largest number using nested if-else statements

	if (num1 >= num2)

	{
		if (num1 >= num3)
		{
			largest = num1;

		}
		else
		{
			largest = num3;
		}
	}
	else
	{
		if (num2 >= num3)
		{
			largest = num2;
		}
		else {
			largest = num3;
		}
	}

	cout << "\nThe largest integer is:" << largest << '\n';


	return 0;


//============================================================
//EXTRA CREDIT LOGIC: Compound Condition with Logical AND (&&)
//============================================================
	if (num1 >= num2 && num1 >= num3)
	{
		largest = num1; 
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		largest = num2;
	}
	else 
	{ 
		largest = num3; 
	}
}