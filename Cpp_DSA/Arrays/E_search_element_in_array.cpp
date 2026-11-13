/**
 * @file search_element_in_array.cpp
 * @brief Contest: Arrays | Problem: (E) Search Element in Array
 * 
 * Description:
 * Given an integer 'n' (the number of elements) and a 'target' integer, 
 * followed by 'n' space-separated integers, determine whether 'target' 
 * exists anywhere within the array. Output "YES" if found, or "NO" otherwise.
 * 
 * What We're Trying to Solve:
 * - Perform a linear search across all 'n' elements in O(n) time.
 * - Use a boolean `flag` initialized to `false`, flipping it to `true` if 
 *   any element matches `target` (`arr[i] == target`).
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
    
    bool flag = false;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            flag = true;
        }
    }
    
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
