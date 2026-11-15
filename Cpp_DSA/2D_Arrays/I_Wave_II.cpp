/**
 * @file I_Wave_II.cpp
 * @brief Contest: 2D Arrays | Problem: I. Wave - II
 * 
 * Description:
 * You are given a 2D array of size n x m containing integers.
 * Your task is to print all the elements of the matrix column by column in wave form.
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

    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
        }
        if (j % 2 == 1) {
            for (int i = m - 1; i > -1; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
