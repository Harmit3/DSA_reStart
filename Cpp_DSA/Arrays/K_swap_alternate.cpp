/**
 * @file swap_alternate.cpp
 * @brief Contest: Arrays | Problem: (K) Swap Alternate
 * 
 * Description:
 * Given multiple test cases, for each testcase read an integer 'n' and an array of 
 * size 'n'. Swap adjacent elements in pairs (i.e., swap index 0 with 1, index 2 with 3, 
 * and so on) and print the resulting array. If 'n' is odd, the last element remains 
 * in its place.
 * 
 * What We're Trying to Solve:
 * - Loop through the array from `l = 0` up to `n - 1`, incrementing by `2` (`l += 2`).
 * - Use `swap(arr[l], arr[l + 1])` to interchange every consecutive pair in O(n) time 
 *   and O(1) auxiliary space.
 */

#include <iostream>

using namespace std;

int main() {
    int no_of_array;
    cin >> no_of_array;

    for (int i = 0; i < no_of_array; i++) {
        int n;
        cin >> n;

        int arr[n];
        
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        for (int l = 0; l < n - 1; l += 2) {
            swap(arr[l], arr[l + 1]);
        }
        
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
