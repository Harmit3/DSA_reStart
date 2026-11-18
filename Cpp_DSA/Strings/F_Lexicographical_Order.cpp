/**
 * @file F_Lexicographical_Order.cpp
 * @brief Contest: Strings & Characters | Problem: F. Lexicographical Order
 * 
 * Description:
 * You are given two words A and B.
 * Determine which word appears first in lexicographical (dictionary) order.
 * 
 * Input:
 * - First line contains word A, second line contains word B (lowercase English letters, length 1 to 1000).
 * 
 * Output:
 * Print A if A comes before B, B if B comes before A, or Equal if A = B.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    if (B < A) {
        cout << 'B' << endl;
    }
    else if (A == B) {
        cout << "Equal" << endl;
    }
    else {
        cout << 'A' << endl;
    }

    return 0;
}
