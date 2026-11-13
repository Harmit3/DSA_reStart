/**
 * @file missing_number.cpp
 * @brief Contest: Arrays | Problem: (L) Missing Number
 * 
 * Description:
 * Given multiple test cases, for each test case read an integer 'n' and an array of 
 * size 'n' where every element appears twice except for one unique element that 
 * appears only once. Find and print that single element.
 * 
 * What We're Trying to Solve:
 * - Find the unique element by checking the frequency of each element (or using 
 *   bitwise XOR for O(n) time and O(1) space). The current implementation uses nested 
 *   loops to find the element with a count of 1.
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

        for (int l = 0; l < n; l++) {
            int target = arr[l];
            int count = 0;
            for (int k = 0; k < n; k++) {
                if (target == arr[k]) {
                    count++;
                }
            }
            if (count == 1) {
                cout << arr[l] << endl;
                break;
            }
        }
    }
    
    return 0;
}
