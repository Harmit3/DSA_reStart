/**
 * @file F_Insertion_Sort_Trace.cpp
 * @brief Contest: Searching & Sorting | Problem: F. Insertion Sort Trace
 * 
 * Description:
 * You are given an array of N integers. Simulate the Insertion Sort algorithm and print the trace after inserting each element.
 * - Insert each element into its correct position in the sorted portion.
 * - Print: Pass i: array_after_insertion, sorted portion | unsorted portion, shifts = x
 * 
 * Input:
 * - The first line contains a single integer N (1 <= N <= 500) — the size of the array.
 * - The second line contains N integers A_1, A_2, ..., A_N.
 * 
 * Output:
 * For each insertion pass i (1 <= i <= N - 1), print the array, sorted/unsorted split, and shifts required.
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

    for (int i = 1; i < sizeofArray; i++) {
        int count = 0;
        bool flag = false;
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
            count++;
            flag = true;
        }
        arr[j + 1] = temp;

        cout << "Pass " << i << ": ";
        for (int k = 0; k < sizeofArray; k++) {
            cout << arr[k] << " ";
        }
        cout << ", ";
        for (int l = 0; l <= i; l++) {
            cout << arr[l] << " ";
        }
        cout << "| ";
        for (int l = i + 1; l < sizeofArray; l++) {
            cout << arr[l] << " ";
        }
        cout << ", shifts = " << count << "\n";
    }

    return 0;
}
