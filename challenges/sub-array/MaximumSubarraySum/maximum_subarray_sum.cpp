#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    //Bruteforce approach
    // int maxSum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //             int sum = 0;
    //         for(int k=i;k<=j;k++){
    //             sum+=a[k];
    //         }cout << endl;
    //         maxSum=max(maxSum,sum);
    //     }
    // }
//    cout << maxSum << endl;

    //cumulative sum approach
    // int currentsum[n+1];
    // currentsum[0]=0;
    // for(int i=1;i<=n;i++){
    //     currentsum[i]= currentsum[i-1] + a[i-1]; 
    // }
    // int maxSum=INT_MIN;
    //  for(int i=1;i<=n;i++){
    //      int sum =0;
    //     for(int j=0;j<i;j++){
    //       sum = currentsum[i] - currentsum[j];
    //       maxSum = max(sum,maxSum);
    //     }
    // }
    // cout << maxSum << endl;

    //kadane's algorithm
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
    }

    cout << maxSum << endl;

}