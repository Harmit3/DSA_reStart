/**
 * @file A_Print_Array_In_Reverse.cpp
 * @brief Contest: Arrays | Problem: A. Print Array In Reverse
 * 
 * Description:
 * You are given an array of integers. Print the elements of the array in reverse order.
 * 
 * Input:
 * - First line contains integer N (1 <= N <= 10^5) - size of the array.
 * - Second line contains N integers A_1, A_2, ..., A_N (-10^9 <= A_i <= 10^9).
 * 
 * Output:
 * Print the elements of the array in reverse order.
 */

#include <iostream>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    int arr[n];
    
    for(long long k = 0 ; k < n ; k++){
        cin >> arr[k] ;
    }
    
    int target;
    cin >> target ;
    
    int pass = 0;
    int fail = 0;
    
    for(long long i = 0; i < n ; i++){
       if(target <= arr[i]){
            pass++ ;
        } else {
            fail++ ;
        }
    }
    
    cout << "Pass: " << pass << endl;
    cout << "Fail: " << fail << endl;
    
    return 0;
}
