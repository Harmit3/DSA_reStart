/**
 * @file B_Binary_Search.cpp
 * @brief Contest: Searching & Sorting | Problem: B. Binary Search
 * 
 * Description:
 * You are given a sorted array of integers and a number X.
 * Determine whether X exists in the array using binary search.
 * 
 * Input:
 * - The first line contains an integer n (1 <= n <= 10^5) — the size of the array.
 * - The second line contains n integers A_i (-10^9 <= A_i <= 10^9) in non-decreasing order.
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

    int i = 0;
    int j = sizeofArray - 1;
    bool flag = false;

    while (i <= j) {
        int mid = (i + j) / 2;

        if (X == arr[mid]) {
            flag = true;
            break;
        }
        else if (arr[mid] > X) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
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
