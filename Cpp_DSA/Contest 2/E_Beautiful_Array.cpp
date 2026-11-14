/**
 * @file E_Beautiful_Array.cpp
 * @brief Contest: Arrays | Problem: E. Beautiful Array
 * 
 * Description:
 * An array is said to be beautiful if all its elements are equal.
 * Given an array of integers, determine whether the array is beautiful or not.
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target = arr[0];
    int count = 0;

    for (int i = 1; i < N; i++) {
        if (target == arr[i]) {
            count++;
        }
    }

    if (count >= N - 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
