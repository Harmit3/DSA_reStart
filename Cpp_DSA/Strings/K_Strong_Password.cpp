/**
 * @file K_Strong_Password.cpp
 * @brief Contest: Strings & Characters | Problem: K. Strong Password
 * 
 * Description:
 * You are given a password. A password is considered strong if all of the following conditions are satisfied:
 * - It consists of exactly 10 characters.
 * - It contains at least one lowercase English letter.
 * - It contains at least one uppercase English letter.
 * - It contains at least one digit.
 * - It contains at least one special character (not lowercase, uppercase, or digit).
 * 
 * Input:
 * - The only line contains a string S (1 <= |S| <= 100, printable ASCII characters).
 * 
 * Output:
 * Print Strong if the password is strong. Otherwise, print Weak.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count10 = 0;
    int lowercase = 0;
    int uppercase = 0;
    int digit = 0;
    int specchar = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            digit++;
        }
        else {
            specchar++;
        }
    }

    if (uppercase >= 1 && lowercase >= 1 && specchar >= 1 && s.size() == 10 && digit >= 1) {
        cout << "Strong" << endl;
    }
    else {
        cout << "Weak" << endl;
    }

    return 0;
}
