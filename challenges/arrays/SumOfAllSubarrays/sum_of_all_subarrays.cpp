// Given an array a[] of size n. Ouput sum of each subarray of the given array

//Example: 1 2 2
//Subarrays: 1 12 122 2 22 2
//Sums:         1  3    5  2  4  2

//Approach:
//1. Iterate over all the subarrays
    // Nested loop
    //     i= 0 to i=n
    //     j=i to j=n
    //         Output Sum[i...j]

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i<n;i++){
        cin >> a[i];
    }

    int current = 0;
    for(int i=0;i<n;i++){
        current = 0;
         for(int j=i;j<n;j++){
             current += a[j];
             cout << current << endl;
        }
    }
    return 0;
}
