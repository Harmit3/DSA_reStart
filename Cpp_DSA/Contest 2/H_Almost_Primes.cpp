/**
 * @file H_Almost_Primes.cpp
 * @brief Contest: Arrays | Problem: H. Almost Primes
 * 
 * Description:
 * A number x is called almost prime if it has at most 4 positive divisors.
 * Given an integer N, print all almost prime numbers in the range [1, N] in increasing order.
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int count = 0;
        for (int j = 1; j <= N; j++) {
            if ((i % j) == 0) {
                count++;
            }
        }
        if (count < 5) {
            cout << i << " ";
        }
    }
    
    cout << endl;

    return 0;
}
