/**
 * @file N_Intersection_of_Arrays.cpp
 * @brief Problem: N. Intersection of Arrays
 * 
 * Description:
 * You have been given two integer arrays of size N and M, respectively.
 * You need to print their intersection.
 * 
 * Input:
 * - The first line contains an integer t (1 <= t <= 100) — the number of test cases.
 * - For each test case:
 *   - First line: integer N (0 <= N <= 1000), size of the first array.
 *   - Second line: N integers.
 *   - Third line: integer M (0 <= M <= 1000), size of the second array.
 *   - Fourth line: M integers.
 * 
 * Output:
 * For each test case, print the intersection in one line. Elements must follow the order 
 * they appear in the first array.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int l = 0; l < t; l++) {
        int N;
        cin >> N;
        int arr1[N];
        for (int i = 0; i < N; i++) {
            cin >> arr1[i];
        }

        int M;
        cin >> M;
        int arr2[M];
        for (int j = 0; j < M; j++) {
            cin >> arr2[j];
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr1[i] == arr2[j]) {
                    cout << arr2[j] << " ";
                    arr2[j] = INT_MIN;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
