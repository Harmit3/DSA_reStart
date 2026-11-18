/**
 * @file P_Triplets.cpp
 * @brief Problem: P. Triplets
 * 
 * Description:
 * You have been given an integer array of size N and a number X.
 * Find the total number of triplets in the array which sum to X.
 * Two triplets are considered different if they involve different indices of the array, 
 * even if the values are the same.
 * 
 * Input:
 * - 1 <= t <= 50
 * - 0 <= N <= 10^2
 * - 0 <= X <= 10^9
 * 
 * Output:
 * Print the number of triplets.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;

        int ct = 0;
        int arr[M];

        for (int i = 0; i < M; i++) {
            cin >> arr[i];
        }

        int target;
        cin >> target;

        for (int j = 0; j < M; j++) {
            for (int k = j + 1; k < M; k++) {
                for (int l = k + 1; l < M; l++) {
                    if (arr[j] + arr[k] + arr[l] == target) {
                        ct++;
                    }
                }
            }
        }

        cout << ct << endl;
    }

    return 0;
}
