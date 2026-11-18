/**
 * @file J_Toggle_Case.cpp
 * @brief Contest: Strings & Characters | Problem: J. Toggle Case
 * 
 * Description:
 * You are given a word S consisting of English letters.
 * Toggle the case of every character (lowercase to uppercase, uppercase to lowercase).
 * 
 * Input:
 * - The only line contains a word S (1 <= |S| <= 10^5).
 * 
 * Output:
 * Print the resulting word after toggling the case of every character.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    cout << s << endl;

    return 0;
}
