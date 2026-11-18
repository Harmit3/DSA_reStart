/**
 * @file D_Convert_to_Lowercase.cpp
 * @brief Contest: Strings & Characters | Problem: D. Convert to Lowercase
 * 
 * Description:
 * You are given a single English alphabet character.
 * Your task is to convert it to lowercase.
 * 
 * Input:
 * - The only line contains a single character c (A <= c <= Z or a <= c <= z).
 * 
 * Output:
 * Print the lowercase version of the given character.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        int num = 32 + int(ch);
        cout << char(num) << endl;
    } else {
        cout << ch << endl;
    }

    return 0;
}
