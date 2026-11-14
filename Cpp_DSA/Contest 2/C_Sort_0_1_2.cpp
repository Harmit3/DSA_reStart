/**
 * @file C_Sort_0_1_2.cpp
 * @brief Contest: Arrays | Problem: C. Sort 0 1 2
 * 
 * Description:
 * You are given an array that contains only the values {0, 1, 2}.
 * Your task is to print the array in descending order.
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int k = 0; k < n; k++) {
        cin >> arr[k];
    }

    int c01 = 0;
    int c02 = 0;
    int c03 = 0;
    
    int t1 = 0;
    int t2 = 1;
    int t3 = 2;

    for (int i = 0; i < n; i++) {
        if (t1 == arr[i]) {
            c01++;
        }
        if (t2 == arr[i]) {
            c02++;
        }
        if (t3 == arr[i]) {
            c03++;
        }
    }

    for (int i = 0; i < c03; i++) {
        cout << t3 << " ";
    }
    for (int i = 0; i < c02; i++) {
        cout << t2 << " ";
    }
    for (int i = 0; i < c01; i++) {
        cout << t1 << " ";
    }
    
    return 0;
}
