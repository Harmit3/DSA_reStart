#include <iostream>
using namespace std;

// Problem M: Find Duplicate Number
// Idea: XOR all array elements, then XOR all numbers from 0 to n-2.
// Every number appearing once cancels out (x ^ x = 0), leaving only the duplicate.

void solve() {
    int n;
    cin >> n;               // size of the array

    int ans = 0;            // XOR accumulator (0 ^ x = x)

    // XOR every element of the input array
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        ans ^= num;
    }

    // XOR every number that should be present once: 0 to n-2
    for (int i = 0; i <= n - 2; i++) {
        ans ^= i;
    }

    // Everything cancelled except the duplicate
    cout << ans << endl;
}

int main() {
    int numofarr;           // number of test cases
    cin >> numofarr;

    for (int i = 0; i < numofarr; i++) {
        solve();
    }

    return 0;
}
