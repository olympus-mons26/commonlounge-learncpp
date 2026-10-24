//
// Created by Baljit Panda on 20.10.2026.
//

// Functions in C++

#include <iostream>
#include <string>
using namespace std;

// a function
void greet(string name="John Doe") // a function that uses a variable which has a default value
{
    cout << "Hello, " << name << "!" << endl;
}

string age_group(int &age) // string is the type of variable the function returns, and the & before `age` changes it in main()
{
    string age_group_type = "";

    if (age < 0)
    {
        age_group_type = "You are not born yet";
    }
    else if (age >= 0 && age <= 13)
    {
        age_group_type = "You are a child";
    }
    else if (age > 13 && age < 18)
    {
        age_group_type = "You are a teenager";
    }
    else if (age >= 18 && age <= 24)
    {
        age_group_type = "You are a young adult";
    }
    else if (age >= 25 && age <= 40)
    {
        age_group_type = "You are an adult";
    }
    else if (age > 40 && age < 60)
    {
        age_group_type = "You are a middle-aged adult";
    }
    else if (age >= 60 && age < 100)
    {
        age_group_type = "You are a senior citizen";
    }
    else if (age >= 100 && age < 110)
    {
        age_group_type = "You are a centenarian";
    }
    else if (age >= 110 && age < 120)
    {
        age_group_type = "You are a super-centenarian";
    }
    else
    {
        age_group_type = "Are you a vampire?";
    }

    return age_group_type;
}

int main()
{
    string name = "John Doe";
    int age = 0;

    cout << "What is your name? ";
    cin >> name;
    greet(name);
    cout << endl;

    cout << "Enter your age: ";
    cin >> age;

    string type = age_group(age);
    cout << type << "." <<  endl;

    return 0;
}