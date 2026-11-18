/**
 * @file G_Replace_Character.cpp
 * @brief Contest: Strings & Characters | Problem: G. Replace Character
 * 
 * Description:
 * You are given a string s consisting of lowercase English letters, and two characters c1 and c2.
 * Replace every occurrence of c1 in the string s with c2 and print the resulting string.
 * 
 * Input:
 * - First line contains non-empty string s (1 <= |s| <= 10^6).
 * - Second line contains two lowercase English letters c1 and c2, separated by a space.
 * 
 * Output:
 * Print the required string.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    char c1, c2;
    cin >> s >> c1 >> c2;
  
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c1) {
            s[i] = c2;
        }
    }
  
    cout << s << endl;

    return 0;
}
