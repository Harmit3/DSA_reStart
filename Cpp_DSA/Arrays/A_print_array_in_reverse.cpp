/**
 * @file print_array_in_reverse.cpp
 * @brief Contest: Arrays | Problem: (A) Print Array In Reverse
 * 
 * Description:
 * Given an integer 'n' representing the number of elements, followed by 'n' 
 * space-separated integers, read the elements into an array and output them 
 * in reverse order.
 * 
 * What We're Trying to Solve:
 * - Store sequential input elements in a 1D array of size 'n'.
 * - Traverse the array backward from index (n - 1) down to 0 to print the 
 *   reversed sequence in O(n) time and O(n) space.
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
    
    for (int j = n - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    
    return 0;
}
