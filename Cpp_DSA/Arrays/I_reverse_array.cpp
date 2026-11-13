/**
 * @file reverse_array.cpp
 * @brief Contest: Arrays | Problem: (I) Reverse
 * 
 * Description:
 * Given an integer 'n' representing the number of elements, followed by 'n' 
 * space-separated integers, reverse the elements of the array in place and print 
 * the reversed array.
 * 
 * What We're Trying to Solve:
 * - Use a two-pointer approach (`i` starting at the beginning, `j` starting at 
 *   the end).
 * - Swap elements at index `i` and `j`, moving inward (`i++`, `j--`) until the 
 *   pointers meet or cross, achieving O(n) time and O(1) auxiliary space.
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;

    while (i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
