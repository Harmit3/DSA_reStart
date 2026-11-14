/**
 * @file H_sort_01.cpp
 * @brief Contest: Arrays | Problem: (H) Sort 01
 * 
 * Description:
 * Given an integer array of size 'n' containing only 0s and 1s, sort the array 
 * in non-decreasing order (all 0s followed by all 1s) and print the result.
 * 
 * What We're Trying to Solve:
 * - Count the total occurrences of 0s and 1s in a single pass of O(n) time.
 * - Print all the 0s first, followed by all the 1s, achieving O(n) time and O(1) space.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arrCount;
    cin >> arrCount;
    
    for (int i = 0; i < arrCount; i++) {
        int n;
        cin >> n;
        
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        
        int zero = 0;
        int one = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[j] == 0) {
                zero++;
            } else {
                one++;
            }
        }
        
        for (int j = 0; j < zero; j++) {
            cout << 0 << " ";
        }
        
        for (int j = 0; j < one; j++) {
            cout << 1 << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
