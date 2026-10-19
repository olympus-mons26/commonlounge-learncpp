//
// Created by Baljit Panda on 15.10.2026.
//

// Basics of strings in C++

#include <iostream>
#include <string> // needed for strings
using namespace std;

int main()
{
    string name = "John Doe"; // a string can store text longer than a single character
    cout << "He said, " << "\"Hello, " + name + "!\"" << endl << endl; // the backslash is used as an escape character to print the literal sign "
    // the + her is used to join strings and NOT addition

    cout << "There are " << name.length() << " characters in the variable name." << endl << endl;

    // what if I want to find the length of an integer?
    int num = 123456789;
    cout << to_string(num).length() << endl;

    // what about conversion of a string?
    string str = "some random string";

    return 0;
}
