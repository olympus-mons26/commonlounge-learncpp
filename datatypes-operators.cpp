//
// Created by Baljit Panda on 14.10.2026.
//

// Data types and operators in C++

#include <iostream>
using namespace std;

int main()
{
    // number-containing data types

    int integer_number_1 = 26; // int holds an integer value
    float float_number_1 = 3.14159; // float holds a real number

    cout << "integer_number = " << integer_number_1 << " and float_number = " << float_number_1 << endl;

    cout << endl; // leaves a line of space

    cout << 3 + 2 << endl; // addition

    cout << 3 - 2 << endl; // subtraction

    cout << 3 * 2 << endl; // multiplication

    cout << 3 / 2 << endl; // integer division. prints 1 instead of 1.5 as integer division "deletes" the decimal part
    cout << 3 / 2.0 << endl; // float-point division retains the decimal part. any number can be a decimal.

    cout << 3 % 2 << endl; // remainder of the division

    cout  << endl;

    // type-casting
    float float_number_2 = 2.78;

    cout << "float_number_2 as a decimal = " << float_number_2;
    cout << "float_number_2 as an integer = " << (int) float_number_2 << endl;
    cout << endl;

    // other data types
    char char_number_1 = 'a'; // a single character
    cout << "char_number_1 = " << char_number_1 << endl;
    // NOTE: There is no data type for text other than a single character in the <iostream>
    cout << "ASCII value of char_number_1: " << (int) char_number_1 << endl;

    bool bool_number_1 = true; // either true or false
    cout << "bool_number_1 = " << bool_number_1 << endl;

    return 0;
}
