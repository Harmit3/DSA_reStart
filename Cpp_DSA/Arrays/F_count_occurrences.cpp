/**
 * @file count_occurrences.cpp
 * @brief Contest: Arrays | Problem: (F) Count Occurrences
 * 
 * Description:
 * Given an integer 'n' (the number of elements) and a 'target' integer, 
 * followed by 'n' space-separated integers, count and print how many times 
 * 'target' appears in the array.
 * 
 * What We're Trying to Solve:
 * - Traverse all 'n' elements of the array in a single O(n) pass.
 * - Maintain a counter initialized to `0`, incrementing `count` each time an 
 *   element equals `target` (`target == arr[i]`).
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int target;
    cin >> target;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (target == arr[i]) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
