/*
Name: Maximum Subarray Sum
Reference: Chapter 3.2

Input: There are t test cases. In each test case, you are given n numbers which form an array.
Your task is to find maximum subarray sum.

The first input line contains an integer t denoting the number of test cases.
The following t lines contains values of array.

Output: Print the sum of maximum subarray sum in each of arrays.

Contributer: Pranjal Upadhyay
git : PranjalUpadhyay7
*/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;
    cin.ignore();

    long long sum_missing_nrs = 0; 

    for (int i = 0; i < t; i++) {
        string line;
        getline(cin, line); 

        stringstream ss(line);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num);
        }

        int max_sum = 0;
        int current_sum = 0;

        for (int val : arr) {
            current_sum = max(val, current_sum + val);
            max_sum = max(max_sum, current_sum);
        }

        sum_missing_nrs += max_sum;
    }

    // Critical line
    cout << "20001\tDonald Knuth\t" << sum_missing_nrs << "\n";

    return 0;
}
