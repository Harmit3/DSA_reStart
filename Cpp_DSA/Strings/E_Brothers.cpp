/**
 * @file E_Brothers.cpp
 * @brief Contest: Strings & Characters | Problem: E. Brothers
 * 
 * Description:
 * You are given the names of two people, each given as two words: FirstName LastName.
 * Determine whether they are brothers (they are brothers if and only if their last names are the same).
 * 
 * Input:
 * - The input consists of two lines, each containing two strings: FirstName and LastName (length 1 to 100).
 * 
 * Output:
 * Print YES if they are brothers, otherwise print NO.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;
    
    if (s2 == t2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
