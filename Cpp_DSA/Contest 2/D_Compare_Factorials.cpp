/**
 * @file D_Compare_Factorials.cpp
 * @brief Contest: Arrays | Problem: D. Compare Factorials
 * 
 * Description:
 * You are given two non-negative integers A and B.
 * Your task is to determine whether A! = B!.
 */

#include <iostream>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    if (A == B || (A == 0 && B == 1) || (A == 1 && B == 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
