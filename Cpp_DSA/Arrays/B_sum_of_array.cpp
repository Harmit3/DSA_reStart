/**
 * @file sum_of_array.cpp
 * @brief Contest: Arrays | Problem: (B) Sum of Array
 * 
 * Description:
 * Given an integer 'n' representing the number of elements, followed by 'n' 
 * space-separated integers, calculate and print the total sum of all elements 
 * in the array.
 * 
 * What We're Trying to Solve:
 * - Accumulate the sum of all 'n' elements in a single O(n) pass.
 * - Use a 64-bit integer (`long long`) for the sum (and elements) to prevent 
 *   signed 32-bit integer overflow when element values or array size are large 
 *   (which causes Wrong Answer on larger test cases).
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    long long sum = 0;
    
    for (int j = n - 1; j >= 0; j--) {
        sum = sum + arr[j];
    }
    
    cout << sum << endl;
    
    return 0;
}
