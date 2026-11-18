/**
 * @file I_Trim_Spaces.cpp
 * @brief Contest: Strings & Characters | Problem: I. Trim Spaces
 * 
 * Description:
 * You are given an input string S that contains multiple words separated by spaces.
 * Remove all spaces from the string.
 * 
 * Input:
 * - The input consists of a single line containing the string S (1 <= |S| <= 10^6).
 * 
 * Output:
 * Print the string S after removing all spaces.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    char x;
    cin >> x;

    string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            result += s[i];
        } 
    }

    cout << result << endl;

    return 0;
}
