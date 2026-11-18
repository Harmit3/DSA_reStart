/**
 * @file M_Palindrome.cpp
 * @brief Contest: Strings & Characters | Problem: M. Palindrome
 * 
 * Description:
 * You are given a string S consisting only of lowercase English letters.
 * A string is called a palindrome if it reads the same from left to right and from right to left.
 * Determine whether S is a palindrome.
 * 
 * Input:
 * - The only line contains a string S (1 <= |S| <= 1000).
 * 
 * Output:
 * Print YES if S is a palindrome, otherwise print NO.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result1 = "";
    string result2 = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        result1 += s[i];
    }
    
    for (int i = 0; i < s.size(); i++) {
        result2 += s[i];
    }
    
    if (result1 == result2) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
