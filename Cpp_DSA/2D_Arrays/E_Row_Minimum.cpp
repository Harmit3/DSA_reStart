/**
 * @file E_Row_Minimum.cpp
 * @brief Contest: 2D Arrays | Problem: E. Row Minimum
 * 
 * Description:
 * You are given an integer matrix of size n x m.
 * Your task is to compute the minimum element of each row.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        int min_val = arr[i][0];

        for (int j = 0; j < m; j++) {
            if (min_val > arr[i][j]) {
                min_val = arr[i][j];
            }
        }
        
        cout << min_val << " ";
    }

    return 0;
}
