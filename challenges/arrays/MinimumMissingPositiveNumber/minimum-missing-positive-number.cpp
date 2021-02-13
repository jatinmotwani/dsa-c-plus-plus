#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        maximum = max(maximum,a[i]);
    }
    bool checker[maximum+1];
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            checker[a[i]] = true;
        }
    }
    for(int i= 0;i<=maximum;i++){
        if(!checker[i]){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}