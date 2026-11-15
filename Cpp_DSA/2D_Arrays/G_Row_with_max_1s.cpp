/**
 * @file G_Row_with_max_1s.cpp
 * @brief Contest: 2D Arrays | Problem: G. Row with max 1s
 * 
 * Description:
 * You are given a binary matrix of size n x m (each element is either 0 or 1).
 * Your task is to find the index (0-based) of the first row that contains the maximum number of 1s.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    int bestRow = -1;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            bestRow = i;
        }
    }
   
    cout << bestRow << endl;

    return 0;
}
