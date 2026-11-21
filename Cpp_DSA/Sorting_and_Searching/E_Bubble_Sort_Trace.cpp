/**
 * @file E_Bubble_Sort_Trace.cpp
 * @brief Contest: Searching & Sorting | Problem: E. Bubble Sort Trace
 * 
 * Description:
 * You are given an array of N integers. Simulate the Bubble Sort algorithm and print the trace of each pass.
 * - Compare adjacent elements and swap them if they are in the wrong order.
 * - After each pass, print: Pass i: array_after_swap , swaps = x
 * - Stop early if a pass has 0 swaps.
 * 
 * Input:
 * - The first line contains a single integer N (1 <= N <= 500) — the size of the array.
 * - The second line contains N integers A_1, A_2, ..., A_N.
 * 
 * Output:
 * For each pass i (1 <= i <= N - 1), print the array after the pass and the number of swaps. Stop if swaps = 0.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int sizeofArray;
    cin >> sizeofArray;

    long long arr[sizeofArray];

    for (int i = 0; i < sizeofArray; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < sizeofArray - 1; i++) {
        int count = 0;
        bool flag = false;
        for (int j = 0; j < sizeofArray - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
                flag = true;
            }
        }

        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < sizeofArray; k++) {
            cout << arr[k] << " ";
        }
        cout << ", " << "swaps = " << count << "\n";

        if (flag == false) {
            break;
        }
    }

    return 0;
}
