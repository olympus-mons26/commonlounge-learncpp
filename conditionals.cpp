//
// Created by Baljit Panda on 18.10.2026.
//

// Conditionals

#include <iostream>
using namespace std;

int main()
{
    int volume;
    cout << "Enter the volume: ";
    cin >> volume;

    if (volume > 100 || volume <= 0) // if this statement is true, do this
    {
        cout << "The volume must be between 0 and 100." << endl;
    }
    else // if that statement is not true, do this
    {
        if (volume <= 20)
        {
            cout << "The volume is low." << endl;
        }
        else if (volume <= 40) // if that statement iss not true, but this one is
        {
            cout << "The volume is for background music." << endl;
        }
        else if (volume <= 60)
        {
            cout << "The volume is for high music." << endl;
        }
        else if (volume <= 80)
        {
            cout << "The volume is perfect for videos." << endl;
        }
        else // if no statement is true
        {
            cout << "The volume is too high." << endl;
        }
    }

    return 0;
}

/* `markdown`
 * - List of comparison operators:
 * 1. `==` - equal to
 * 2. `!=` - not equal to
 * 3. `>`  - greater than
 * 4. `<`  - less than
 * 5. `>=` - greater than or equal to
 * 6. `>=` - less than or equal to
*/

/* `markdown`
 * - List of boolean operators -
 * 1. && - and; True if both the conditions are truthy values
 * 2. || - or; True if at least one condition is a truthy
 * 3. !  - not; if True, then changes it to False, and vice-versa
*/
