/**
 * @file L_Reverse.cpp
 * @brief Contest: Strings & Characters | Problem: L. Reverse
 * 
 * Description:
 * You are given a string S consisting only of lowercase English letters.
 * Your task is to reverse the string.
 * 
 * Input:
 * - The only line contains a string S (1 <= |S| <= 1000).
 * 
 * Output:
 * Print the reversed string.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        result += s[i];
    }

    cout << result << endl;

    return 0;
}
