//Problem Statement :
// Given an unsorted array A of size N of non-negative integers, find a continuos subarray which adds to a given number S.

// Constraints: 
// 1 < N <= 10^5
// 0 <= Ai <= 10^10

//Example:
// Input  : N = 5, S =12 A[] = [1,2,3,7,5]
// Ouput 2 4

//BruteForce Approach
//Find sum of all possible subarrays. If any of the sum equates to S, output the starting and ending index of the array. Time Complexity O(n*n)

//Optimized
//Two pointer approach , Start increasing st until currSum <= s. Time Complexity : O(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i = 0;i<n;i++){
        cin >> a[n];
    }

    int i=0, j=0, st=-1, en=-1, sum=0;

    while(j<n && sum+a[j] <=s){
        sum += a[j];
        j++;
    }
    if(sum == s){
        cout << i+1 << " "<< j << endl;
    }
    while(j<n){
        sum += a[j];
        while(sum > s){
            sum -= a[i];
            i++;
        }

        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}