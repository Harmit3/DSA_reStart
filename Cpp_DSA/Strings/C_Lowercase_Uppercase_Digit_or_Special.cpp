/**
 * @file C_Lowercase_Uppercase_Digit_or_Special.cpp
 * @brief Contest: Strings & Characters | Problem: C. Lowercase, Uppercase, Digit or Special
 * 
 * Description:
 * You are given a single character.
 * Determine whether it is: Lowercase, Uppercase, Digit, or Special.
 * 
 * Input:
 * - The only line contains a single character c (33 <= ASCII value of c <= 126).
 * 
 * Output:
 * Print exactly one of the following: Lowercase, Uppercase, Digit, Special.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    }
    else {
        cout << "Special" << endl;
    }

    return 0;
}
