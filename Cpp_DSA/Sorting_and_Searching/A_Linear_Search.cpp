/**
 * @file A_Linear_Search.cpp
 * @brief Contest: Searching & Sorting | Problem: A. Linear Search
 * 
 * Description:
 * You are given an array of integers and a number X.
 * Determine whether X exists in the array.
 * 
 * Input:
 * - The first line contains an integer n (1 <= n <= 10^5) — the size of the array.
 * - The second line contains n integers A_i (-10^9 <= A_i <= 10^9).
 * - The third line contains an integer X (-10^9 <= X <= 10^9).
 * 
 * Output:
 * Print YES if X exists in the array, otherwise print NO.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int sizeofArray;
    cin >> sizeofArray;
    
    int arr[sizeofArray];
    
    for (int i = 0; i < sizeofArray; i++) {
        cin >> arr[i];
    }
    
    int X;
    cin >> X;
    
    bool flag = false;
    
    for (int i = 0; i < sizeofArray; i++) {
        if (arr[i] == X) {
            flag = true;
        }
    }
    
    if (flag) {
        cout << "YES" << endl; 
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
