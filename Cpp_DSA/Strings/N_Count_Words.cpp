/**
 * @file N_Count_Words.cpp
 * @brief Contest: Strings & Characters | Problem: N. Count Words
 * 
 * Description:
 * You are given a string S consisting of English letters and spaces.
 * Words are separated by exactly one space, and the first character of S is not a space.
 * Your task is to count the number of words in S.
 * 
 * Input:
 * - The only line contains the string S (1 <= |S| <= 10^5).
 * 
 * Output:
 * Print one integer — the number of words in S.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            count++;
        }
    }

    cout << count + 1 << endl;

    return 0;
}
