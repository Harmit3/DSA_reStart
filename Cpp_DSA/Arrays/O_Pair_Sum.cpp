/**
 * @file O_Pair_Sum.cpp
 * @brief Problem: O. Pair Sum
 * 
 * Description:
 * You have been given an integer array of size N and a number X.
 * You need to find the total number of pairs in the array which sum to X.
 * Two pairs are considered different if they involve different indices of the array, 
 * even if the values are the same.
 * 
 * Input:
 * - The first line contains an integer t (1 <= t <= 100) — the number of test cases.
 * - For each test case:
 *   - First line: integer N (0 <= N <= 1000) — the size of the array.
 *   - Second line: N integers.
 *   - Third line: integer X (0 <= X <= 10^9).
 * 
 * Output:
 * For each test case, print a single integer — the number of pairs in the array whose sum is equal to X.
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
                if (arr[j] + arr[k] == target) {
                    ct++;
                }
            }
        }

        cout << ct << endl;
    }

    return 0;
}
