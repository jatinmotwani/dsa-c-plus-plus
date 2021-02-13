// Problem Statement :-
// Isyana is given the number of visitors at her local theme park on N consecutive days. The 
// number of visitors on the i-th day is Vi. A day is record breaking if it satisfies
// both of the following conditions
// => The number of visitors on the day is strictly larger than the number of visitors on
//       each of the previous days
// => Either it is the last day, or the number of visitors on the day is strictly larger than the
//       number of visitors on the following day.
// Note: the very first day could be a record breaking day!
// Please help Isyana find out the number of reacord breaking days

// Input: 
// The first line of the input gives the number of test cases, T. T test cases follow. Each test 
// case ebgins with a line containing the integer N. The second line contains N integers. 
// The i-ith integer is Vi

// Output :
// For each test case, output one line containing case #x:y, where x is the test case number
// (starting from 1) and y is the number of record breaking days.

//Constraints
// Time limit: 20 seconds per test set.
// Memory limit: 1 GB.
// 1 <= T <= 100.
// 0 <= Vi <= 2 x 10^5

// Test Set 1
// 1 <= N <= 1000.

// Test Set 2
// 2 <= N <= 2 x 10^5 for at most 10 test cases

// For the remaining cases, 1 <= N <= 1000.

// Sample Test Case:
// 1 2 0 7 2 0 2 2
// x o x o x x x x

// BruteForce Approach:
// 1. Iterate over all the elements and check if it is record breaking day or not.
// Note: To check if a[i] is record breaking day, we have to iterate over a[0],a[1],...,a[i-1]
// TIme Complexity => O(n^2)

// Optimized Approach
// Keep a maxium variable to calculate maximum value till current, update whenever v[i]>maximum
// Keep a ans variable and keep it increasing when our condition is satisfied

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n+1];
    v[n]=-1;
    for(int i =0; i<n;i++){
        cin >> v[i];
    }
    int maximum = -1;
    int ans = 0;
    for(int i=0;i<n;i++){
               if(v[i]>maximum && v[i]>v[i+1]){
                   maximum = v[i];
                   ans++;
               }
               maximum = max(maximum,v[i]);
    }
    cout << ans << endl;
}

