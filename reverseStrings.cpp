#include "reverseStrings.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
//labels user input as a string
    string userInput;
//prompts user for a string
    cout << "Enter a string to reverse";
//takes the input
    getline(std::cin, userInput);
//reverses the input
    reverse(userInput.begin(), userInput.end());
//final output
    cout << "Here is your string reversed: "<< userInput << endl;

    return 0;
}