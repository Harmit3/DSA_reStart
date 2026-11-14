/**
 * @file F_Special_Factors.cpp
 * @brief Contest: Arrays | Problem: F. Special Factors
 * 
 * Description:
 * Given an integer N, print all special factors of N in increasing order.
 * A factor is called special if its last digit is 2 or 7.
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        if ((N % i) == 0) {
            if ((i % 10) == 2 || (i % 10) == 7) {
                cout << i << " ";
                count++;
            }
        }
    }
    
    if (count == 0) {
        cout << -1 << endl;
    }
    
    return 0;
}
