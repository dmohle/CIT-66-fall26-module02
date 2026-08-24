//=================================
// File Name:    largestofThree.cpp
// Author:       Jesse McCord
// Date:         August 24, 2026
// Course:       CIT-66 C++ Programming
// Instructor:   Professor Mohle
// Description:  Prompts for name entry, prints greeting, and pauses
//=================================

#include <iostream>
using namespace std;

int main() {

    int Num1=12;
    int Num2=0;
    int Num3=-45;

    if(Num1>Num2)
    {
        if (Num1>Num3)
        {
            cout<<"\n Num1 is greater than Num3 \n"<<endl;
        }
        cout<<"\n Num1 > Num2 \n";
    }
    else
    {
        if (Num2>Num3)
        {
            cout<<"\n Num2 is greater than Num3 \n"<<endl;
        }
        cout<<"\n Num1 < Num2 \n";
    }
}