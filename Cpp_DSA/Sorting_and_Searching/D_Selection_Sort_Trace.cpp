/**
 * @file D_Selection_Sort_Trace.cpp
 * @brief Contest: Searching & Sorting | Problem: D. Selection Sort Trace
 * 
 * Description:
 * You are given an array of N integers. Simulate the Selection Sort algorithm and print the trace of each pass.
 * During the i-th pass (1 <= i <= N - 1):
 * - Find the minimum element from the unsorted part of the array.
 * - Swap it with the element at index i.
 * - Print: Pass i: array_after_swap , min_selected = x
 * 
 * Input:
 * - The first line contains a single integer N (1 <= N <= 500).
 * - The second line contains N integers A_1, A_2, ..., A_N.
 * 
 * Output:
 * For each pass i (1 <= i <= N - 1), print as required.
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

    for (int i = 0; i < sizeofArray - 1; i++) {
        int min = i;
        for (int j = i + 1; j < sizeofArray; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < sizeofArray; k++) {
            cout << arr[k] << " ";
        }
        cout << ", " << "min_selected = " << arr[i] << endl;
    }

    return 0;
}
