/**
 * @file H_Remove_Character.cpp
 * @brief Contest: Strings & Characters | Problem: H. Remove Character
 * 
 * Description:
 * You are given a string s consisting of lowercase English letters, and a character x.
 * Remove all occurrences of x from the string s and print the resulting string.
 * 
 * Input:
 * - First line contains string s (1 <= |s| <= 10^6).
 * - Second line contains a single lowercase English letter x.
 * 
 * Output:
 * Print the string obtained after removing all occurrences of x from s.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    char x;
    cin >> s >> x;

    string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != x) {
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}
