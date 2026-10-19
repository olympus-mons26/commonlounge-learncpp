//
// Created by Baljit Panda on 15.10.2026.
//

// User Inputs and Variables in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nameSample = "John Doe"; // a variable named name that stores a string value
    cout << nameSample << endl;
    nameSample = "Ada Lovelace";
    cout << nameSample << endl;

    int a = 5; int b = 10;
    int sum = a + b;
    cout << sum << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name; // short for 'character input'; takes input from the keyboard and assigns it to the variable
    cout << "Hello, " + name + "!" << endl;

    int x, y;
    cout << "Enter the two numbers separated by a space: ";
    cin >> x >> y;
    cout << "Their sum is " << x + y << endl;

    sum += x; // add the value of x to sum
    // same for -=, *=, /=, and %=
    cout << sum << endl;

    return 0;
}
