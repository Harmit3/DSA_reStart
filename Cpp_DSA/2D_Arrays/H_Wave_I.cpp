/**
 * @file H_Wave_I.cpp
 * @brief Contest: 2D Arrays | Problem: H. Wave - I
 * 
 * Description:
 * You are given a 2D array of size n x m containing integers.
 * Your task is to print all the elements of the matrix row by row in wave form.
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

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        if (i % 2 == 1) {
            for (int j = n - 1; j > -1; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
