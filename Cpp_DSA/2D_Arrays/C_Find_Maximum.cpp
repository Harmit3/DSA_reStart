/**
 * @file C_Find_Maximum.cpp
 * @brief Contest: 2D Arrays | Problem: C. Find Maximum
 * 
 * Description:
 * You are given an integer matrix of size n x m.
 * Your task is to find the maximum element in the entire matrix.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_val = arr[0][0];
    
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
        }
    }
    
    cout << max_val << endl;

    return 0;
}
