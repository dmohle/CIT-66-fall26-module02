//==================================================
// File Name:    reverseAString.cpp
// Author:       Jesse McCord
// Date:         August 31, 2026
// Course:       CIT-66 C++ Programming
// Instructor:   Professor Mohle
// Description:  Using String to display string commands
//==================================================
#include <iostream>
#include <string>

using namespace std;


int main()
{
    //Initialize both strings
    string test1 = "abcdefg";
    string reversetest1 = "xxxxxxx";

    //assign each index to the matching reverse index, there MUST be matching amount of indexes in each string
    reversetest1[0]= test1[6];
    reversetest1[1]= test1[5];
    reversetest1[2]= test1[4];
    reversetest1[3]= test1[3];
    reversetest1[4]= test1[2];
    reversetest1[5]= test1[1];
    reversetest1[6]= test1[0];

    cout << "\nMy test string is: " << test1 << "\n\n";

    cout << "The 7th char of my string is: " << test1[6] << "\n";

    cout << "The total size is: " << test1.size() << "\n\n";

    cout << "Character Located at test1[1]: " << test1[1] << "\n";
    cout << "Character Located at test1.at(3): " << test1.at(3) << "\n\n";

    cout << "The reverse of my string is : " << reversetest1 << "\n";

    test1[2] = 'C';
    cout << test1 << endl;


    return 0;
}