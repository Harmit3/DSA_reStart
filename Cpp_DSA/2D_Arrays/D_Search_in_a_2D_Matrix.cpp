/**
 * @file D_Search_in_a_2D_Matrix.cpp
 * @brief Contest: 2D Arrays | Problem: D. Search in a 2D Matrix
 * 
 * Description:
 * You are given an integer matrix of size n x m and a target integer x.
 * Your task is to determine whether the value x is present in the matrix.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[m][n];
    
    int target;
    cin >> target;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    bool temp = false;
    
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (target == arr[i][j]) {
                temp = true;
            }
        }
    }
    
    if (temp) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
