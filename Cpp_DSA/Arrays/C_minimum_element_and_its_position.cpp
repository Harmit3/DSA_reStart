/**
 * @file minimum_element_and_its_position.cpp
 * @brief Contest: Arrays | Problem: (C) Minimum Element and Its Position
 * 
 * Description:
 * Given an integer 'n' representing the number of elements, followed by 'n' 
 * space-separated integers, find the smallest element in the array and its 
 * 1-based position (the first occurrence if there are ties).
 * 
 * What We're Trying to Solve:
 * - Initialize the minimum value to the first element (`arr[0]`) at 1-based 
 *   position `1`.
 * - Scan the remaining elements in O(n) time, updating the minimum and its 
 *   1-based index (`i + 1`) only when a strictly smaller element (`min > arr[i]`) 
 *   is found so the earliest position is preserved.
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
    
    long long min = arr[0];
    long long location = 1;
    
    for (int i = 1; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            location = i + 1;
        }
    }
    
    cout << min << " " << location << endl;
    
    return 0;
}
