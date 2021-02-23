#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int currentsum=0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currentsum += arr[i];
        if(currentsum<0){
            currentsum = 0;
        }
        maxSum = max(maxSum,currentsum);
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int wrapsum;
    int nonwrapsum;
    int totalsum = 0;

    nonwrapsum=kadane(a,n);

    for(int i=0;i<n;i++){
        totalsum +=a[i];
        a[i] = -a[i];
    }

    wrapsum = totalsum + kadane(a,n);
    cout << wrapsum << endl;
    return 0;
}