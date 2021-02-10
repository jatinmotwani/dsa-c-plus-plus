//Problem:-
// An Arithmetic array is an array that contains at least two integers and the differences
// between consecutive integers are equal. For example, [9,10], [3,3,3] and [9,7,5,3] are 
// arithmetic arrays, while [1,3,3,7], [1,2,4] are not arithmetic arrays
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She 
// wants to choose a contiguous arithmetic subarray from her array that has the maximum 
// length. Please help her to determine the length of the longest contiguos arithmetic
// subarray.

// Input :
// The first line of the input gives the number of test cases, T. T test cases follow. Each test 
// case begins with a line containing the integer N. The second line contains N integers. The
// i-th integer is Ai.

//Output: 
// For each test case, output one line containing Case #x:y, where x is the test case number
// (starting from 1) and y is the length of the lonest contiguos arithmetic subarray

//Constraints
// Time limit: 20 seconds per test set.
// Memory limit: 1 GB.
// 1 <= T <= 100.
// 0 <= Ai <= 10^9

// Test Set 1
// 2 <= N <= 2000.

// Test Set 
// 2 <= N <= 2 x 10^5 for at most 10 test cases

// For the remaining cases, 2 <= N <= 2000.

// Sample Test Case :
// 10 7 4 6 8 10 11
// -3 -3 2 2 2 1

// Intuition and Approach
// => Loop over the array and find the answer

// Maintain
//     => Previous Commong Difference(pd)
//     => Current Arithmetic Subarray length (curr)
//     => Max arithmetic subarray length (ans)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0;i < n;i++){
        cin >> nums[i];
    }
    int pd = nums[1]-nums[0];
    int curr = 2 ;
    int ans = 2;
    for(int i = 2; i< n ;i++){
        if(pd == nums[i]-nums[i-1]){
            curr++;
        }else{
            pd = nums[i]-nums[i-1];
            curr = 2;
        }
         if(curr>ans){
                ans = curr;
            }
    } 
    cout << ans << endl;
    return 0;
}


