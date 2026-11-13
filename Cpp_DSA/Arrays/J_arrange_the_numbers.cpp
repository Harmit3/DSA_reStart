/**
 * @file arrange_the_numbers.cpp
 * @brief Contest: Arrays | Problem: (J) Arrange the Numbers
 * 
 * Description:
 * Given multiple test cases, for each test case read an integer 'n'. Construct and 
 * print an array of length 'n' containing numbers from 1 to 'n' arranged such that 
 * odd numbers are placed sequentially from the left (beginning) and even numbers 
 * are placed sequentially from the right (end) moving inward.
 * 
 * What We're Trying to Solve:
 * - Use two pointers (`k` starting from the left at 0, `j` starting from the right 
 *   at n - 1).
 * - Iterate `num` from 1 up to 'n': place odd numbers at index `k` and increment `k`, 
 *   while placing even numbers at index `j` and decrementing `j`.
 */

#include <iostream>

using namespace std;

int main() {
    int no_of_array;
    cin >> no_of_array;

    for (int i = 0; i < no_of_array; i++) {
        int n;
        cin >> n;

        int arr[n];

        int k = 0;
        int j = n - 1;
        int num = 1;

        while (k <= j) {
            if (num % 2 == 1) {
                arr[k] = num;
                k++;
            }

            if (num % 2 == 0) {
                arr[j] = num;
                j--;
            }
            
            num++;
        }

        for (int l = 0; l < n; l++) {
            cout << arr[l] << " ";
        }

        cout << endl;
    }
    
    return 0;
}
