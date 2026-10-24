// Used Google Gemini for the code of this file :(

//
// Created by Baljit Panda on 21.10.2026.
//

// Exercise - Cows and Bulls

#include <iostream>
#include <string>
using namespace std;

string generate_secret_number() {
    int num = rand() % 9000 + 1000;
    return to_string(num);
}

string get_user_input() {
    string guess;
    while (true) {
        cin >> guess;
        if (guess.length() == 4) {
            int num = stoi(guess);
            if (num >= 1000 && num <= 9999) {
                return guess;
            }
        }
        cout << "Invalid input!" << endl;
    }
}

int count_bulls(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    int bulls = 0;
    for (int i = 0; i < 4; i++) {
        if (secret_string[i] == guess_string[i]) {
            bulls++;
            secret_digit_used[i] = true;
            guess_digit_used[i] = true;
        }
    }
    return bulls;
}

int count_cows(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    int cows = 0;
    for (int i = 0; i < 4; i++) {
        if (!guess_digit_used[i]) {
            for (int j = 0; j < 4; j++) {
                if (!secret_digit_used[j] && guess_string[i] == secret_string[j]) {
                    cows++;
                    guess_digit_used[i] = true;
                    secret_digit_used[j] = true;
                    break;
                }
            }
        }
    }
    return cows;
}

int main() {
    srand(time(0));

    string secret_string = generate_secret_number();

    cout << "Secret number chosen (between 1000 and 9999)." << endl;
    cout << "Start guessing! ..." << endl;

    int turns = 0;

    while (true) {
        string guess_string = get_user_input();
        turns++;

        bool secret_digit_used[4] = {false, false, false, false};
        bool guess_digit_used[4]  = {false, false, false, false};

        int bulls = count_bulls(secret_string, guess_string, secret_digit_used, guess_digit_used);
        int cows = count_cows(secret_string, guess_string, secret_digit_used, guess_digit_used);

        if (bulls == 4) {
            cout << "Congratulations, you did it!" << endl;
            cout << "You took " << turns << " to guess the number" << endl;
            cout << "Secret number is " << secret_string << endl;
            break;
        } else {
            cout << "Turn " << turns << ": Your guess " << guess_string
                 << " has " << bulls << " bulls and " << cows << " cows." << endl;
        }
    }

    return 0;
}