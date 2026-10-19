//
// Created by Baljit Panda on 18.10.2026.
//

// Arrays and Loops

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // an array is a list of values of a certain type only
    int age[2]; // an array named `age` that can store 2 integer values

    string names[] = {"John Doe", "Ada Lovelace"};
    cout << names[0] << ", " << names[1] << endl; cout << endl;
    cout << "Name: " << names[0] << endl;

    cout << "Enter your name: ";
    cin >> names[1];
    cout << "Your name is " << names[1] << endl;

    // 2-D arrays
    int arr_2d[2][2] = {
        {10, 20},
        {30, 40}
    };
    cout << arr_2d[0][0] << endl;
    cout << endl;

    // loops - do something repeatedly for a certain period

    // for loop
    int totalNames = (sizeof(names) / sizeof(names[0])); // to find the number of values in an array

    for (int i = 0; i < totalNames; i++) // ((start), (until), (do this in the end))
    {
        cout << "Name " << i << ": " << names[i] << endl;
    }
    cout << endl;

    // to calculate the sum of a certain number of integers
    const int MAX_SIZE = 100;

    int totalNumbers;
    int numbers[MAX_SIZE]; // the array numbers can carry a maximum of 100 integer values

    cout << "How many numbers? ";
    cin >> totalNumbers;

    cout << "Enter your numbers: ";
    for (int i = 0; i < totalNumbers; i++) {
        cin >> numbers[i];
    }

    int sumOfNumbers = 0;
    for (int i = 0; i < totalNumbers; i++)
    {
        sumOfNumbers += numbers[i];
    }
    cout << "Sum = " << sumOfNumbers << endl;
    cout << endl;

    // while loop
    int x;
    cout << "Enter a number: ";
    cin >> x;
    while (x >= 0)
     {
        cout << x << endl;
        x--;
     }

    cout << endl;
    
    int a[] = {1, 5, 3, 2, 4, 6};
    // break
    for (int i = 0; i < 6; i++) {
        cout << a[i] << endl;
        if (a[i] == 2)
            break;                   // quit the loop when element == 2
        cout << 10*a[i] << endl;     // when element == 2, this line too won't execute
    }

    // continue
    for (int i = 0; i < 6; i++) {
        cout << a[i] << endl;
        if (a[i] <= 2)
            continue;               // don't execute the rest if element <= 2
        cout << 10*a[i] << endl;    // when element <= 2, this line too won't execute
    }

    return 0;
}
