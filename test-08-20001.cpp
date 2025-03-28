/*
Name: Tower of Hanoi
Reference: https://cses.fi/problemset/task/2165

The Tower of Hanoi game consists of three stacks (left, middle and right)
and n round disks of different sizes.
Initially, the left stack has all the disks, 
in increasing order of size from top to bottom.
The goal is to move all the disks to the right stack 
using the middle stack. 
On each move you can move the uppermost disk from a stack 
to another stack.
In addition, it is not allowed to place a larger disk on a smaller disk.
Your task is to find a solution that minimizes the number of moves.

Input: There are t test cases. In each test case, you are given an intger n.

Output: For each case, first print an integer k: the minimum number of moves.
After this, print k lines that describe the moves. 
Each line has two integers a and b: you move a disk from stack a to stack b. 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {    
    int t;
    cin >> t;   
    long long sum_missing_nrs = 0;
    
    /*

    Code is not complete
    */
    
    //Critical line
    cout << "20001\t" << "Donald Knuth\t" << sum_missing_nrs <<"\n";
    return 0;
}
