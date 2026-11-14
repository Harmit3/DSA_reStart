/**
 * @file B_Fastest_Runner.cpp
 * @brief Contest: Arrays | Problem: B. Fastest Runner
 * 
 * Description:
 * In an Olympic race, there are N runners numbered from 1 to N.
 * You are given the time taken by each runner to complete the race.
 * The runner with the minimum time is considered the fastest.
 * If multiple runners have the same fastest time, choose the runner with the larger ID.
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (long long k = 0; k < n; k++) {
        cin >> arr[k];
    }

    int min_index = 0;
    int min_value = arr[0];

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < n; j++) {
            if (min_value >= arr[j]) {
                min_value = arr[j];
                min_index = j;
            }
        }
    }

    cout << min_index + 1 << endl;
    
    return 0;
}
