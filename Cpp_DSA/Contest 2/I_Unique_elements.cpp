/**
 * @file I_Unique_elements.cpp
 * @brief Contest: Arrays | Problem: I. Unique Elements
 * 
 * Description:
 * You are given an array of integers.
 * Your task is to print all elements that occur exactly once in the array, 
 * in the same order as they appear in the input.
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[N];

    for (long long i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    
    cout << endl;

    return 0;
}
