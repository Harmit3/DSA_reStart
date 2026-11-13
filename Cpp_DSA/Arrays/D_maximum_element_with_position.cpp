/**
 * @file maximum_element_with_position.cpp
 * @brief Contest: Arrays | Problem: (D) Maximum Element with Position
 * 
 * Description:
 * Given an integer 'n' representing the number of elements, followed by 'n' 
 * space-separated integers, find the largest element in the array and its 
 * 1-based position (the first occurrence if there are ties).
 * 
 * What We're Trying to Solve:
 * - Initialize the maximum value to the first element (`arr[0]`) at 1-based 
 *   position `1`.
 * - Scan the remaining elements in O(n) time, updating the maximum and its 
 *   1-based index (`i + 1`) only when a strictly larger element (`max < arr[i]`) 
 *   is found so the earliest position is preserved.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long arr[n];
    
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    long long max = arr[0];
    long long location = 1;
    
    for (long long i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            location = i + 1;
        }
    }
    
    cout << max << " " << location << endl;
    
    return 0;
}
