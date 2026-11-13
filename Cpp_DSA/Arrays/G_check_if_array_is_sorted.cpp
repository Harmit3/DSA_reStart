/**
 * @file check_if_array_is_sorted.cpp
 * @brief Contest: Arrays | Problem: (G) Check If Array is Sorted
 * 
 * Description:
 * Given an integer 'n' representing the number of elements, followed by 'n' 
 * space-separated integers, determine whether the array is sorted in 
 * non-decreasing order (each element is less than or equal to the next). 
 * Output "YES" if sorted, or "NO" otherwise.
 * 
 * What We're Trying to Solve:
 * - Compare adjacent elements across the array in O(n) time to check for any 
 *   order violations (`arr[i] > arr[i + 1]`).
 * - Note on loop bounds & condition: Looping up to `i < n - 1` avoids reading 
 *   out of bounds at `arr[n]`, and checking `count == 0` ensures strictly zero 
 *   inversions (since `i = n - 1` previously compared `arr[n - 1]` with garbage 
 *   memory `arr[n]`).
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            count++;
        }
    }
    
    if (count == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
