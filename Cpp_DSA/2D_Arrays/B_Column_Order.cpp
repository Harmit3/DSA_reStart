/**
 * @file B_Column_Order.cpp
 * @brief Contest: 2D Arrays | Problem: B. Column Order
 * 
 * Description:
 * You are given a 2D array of size n x m containing integers.
 * Your task is to print all the elements of the matrix column by column.
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
        for (int i = 0; i < m; i++) {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}
