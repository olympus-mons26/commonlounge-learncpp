//
// Created by Baljit Panda on 19.10.2026.
//

// Exercise - Hotter or Colder

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int inputNumber = 0;

    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    // cout << randomNumber << endl;

    while (inputNumber != randomNumber)
    {
        cout << "Enter your guess: ";
        if (!(cin >> inputNumber)) {
            cout << "Please enter a valid number!" << endl;
            cin.clear(); // Clear the error state
            cin.ignore(10000, '\n'); // Discard invalid input
            continue;
        }

        if (inputNumber == randomNumber)
        {
            cout << "Congratulations, you did it! It was " << randomNumber << "." << endl;
        }
        else if (inputNumber > randomNumber)
        {
            cout << "Guess lower. You are hot." << endl;
        }
        else if (inputNumber < randomNumber)
        {
            cout << "Guess higher. You are cold." << endl;
        }
    }

    return 0;
}
