//===========================================
// File Name:friendlyGreeting.cpp
// Student: Daniel Avila
// Date: August 17, 2026
// Course: CIT 66 C++ Programming
// Instructor: Professor Mohle
// Description: Prompts user for their name, prints greeting, and pauses
//============================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;

    cout << "Please enter your name:";
    getline(cin, username);
    cout <<"Welcome to CIT--66 C++ Programming," << username << "!" << '\n';
    cout << "Press Enter to exit...";
    cin.get(); // Pauses console execution before closing
    return 0;

}
