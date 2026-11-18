/**
 * @file Q_Count_Quadraplets.cpp
 * @brief Problem: Q. Count Quadraplets
 * 
 * Description:
 * You are given an array A of length n and an integer x (the target).
 * Count the number of quadruplets (i, j, k, l) such that:
 * A[i] - 2 * A[j] + 3 * A[k] - 4 * A[l] = x, where 0 < i < j < k < l < n (1-indexed).
 * Two quadruplets are considered different if they have at least one different index among them.
 * 
 * Input:
 * - The first line contains two integers n and x (1 <= n <= 100, |x| <= 10^6).
 * - The second line contains n integers A_1, A_2, ..., A_n (|A_i| <= 1000).
 * 
 * Output:
 * Print a single integer, the number of quadruplets (i, j, k, l) that satisfy the given condition.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int M;
    cin >> M;
    
    int target;
    cin >> target;

    int ct = 0;
    int arr[M];

    for (int i = 0; i < M; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < M; j++) {
        for (int k = j + 1; k < M; k++) {
            for (int l = k + 1; l < M; l++) {
                for (int m = l + 1; m < M; m++) {
                    int ans = arr[j] - 2 * arr[k] + 3 * arr[l] - 4 * arr[m];
                    if (target == ans) {
                        ct++;
                    }
                }
            }
        }
    }

    cout << ct << endl;

    return 0;
}
