/**
 * @file G_RCB_wins_again.cpp
 * @brief Contest: Arrays | Problem: G. RCB wins again
 * 
 * Description:
 * After winning the IPL, RCB is posing for a victory photo in a symmetric formation:
 * middle-left, middle-right, then expanding outward by alternating left and right.
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
    
    int i = (N / 2) - 1;
    int j = N / 2;
    
    while (j < N) {
        cout << arr[i] << " " << arr[j] << " ";
        i--;
        j++;
    }
    
    cout << endl;
    
    return 0;
}
