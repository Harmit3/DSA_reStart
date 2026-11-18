/**
 * @file B_ASCII_to_Character.cpp
 * @brief Contest: Strings & Characters | Problem: B. ASCII to Character
 * 
 * Description:
 * You are given an integer representing the ASCII value of a character.
 * Your task is to print the corresponding character.
 * 
 * Input:
 * - The only line contains an integer X (33 <= X <= 126).
 * 
 * Output:
 * Print the character corresponding to the given ASCII value.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    cout << (char)num << endl;
    
    return 0;
}
