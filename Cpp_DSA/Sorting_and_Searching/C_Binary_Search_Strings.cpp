/**
 * @file C_Binary_Search_Strings.cpp
 * @brief Contest: Searching & Sorting | Problem: C. Binary Search (Strings)
 * 
 * Description:
 * You are given a guest list containing names in sorted lexicographical order.
 * Given the name of a guest, determine whether the name exists in the list using binary search.
 * 
 * Input:
 * - The first line contains an integer n (1 <= n <= 10^5) — the number of names.
 * - The next n lines each contain a name S_i (lowercase English letters, length 1 to 20, non-decreasing order).
 * - The last line contains a name X — the guest to search for.
 * 
 * Output:
 * Print YES if the name exists in the list, otherwise print NO.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arrSize;
    cin >> arrSize;
    
    string arr[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    
    string target;
    cin >> target;

    int i = 0;
    int j = arrSize - 1;
    bool flag = false;

    while (i <= j) {
        int mid = (i + j) / 2;

        if (target == arr[mid]) {
            flag = true;
            break;
        }
        else if (arr[mid] > target) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
