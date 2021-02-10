// Given an array a[] of size n. FOr every i from 0 to n-1 output max(a[0],a[1],...,a[i])

//Example :-
// Arrays Elements  1 0 5 4 6 8
// Indexes                0 1 2 3 4 5
// Max till i               1 1 5 4 6 8

//Approach 
// 1. Keep a variable mx which stores the maximum till i th element.
// 2. Iterate over the array and update 

//Time Complexity => O(n)

#include<iostream>
#include<limits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0; i < n ; i++){
        cin >> nums[i];
    }
    int max = nums[0];
    for(int i = 1; i < n ; i ++){
       cout << max << " ";
       if(nums[i]>max){
           max = nums[i];
       }
    }
      cout << max << endl;
}