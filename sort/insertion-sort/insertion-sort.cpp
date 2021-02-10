#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int nums[n];
    for(int i = 0 ; i < n; i++){
        cin >> nums[i];
    }
    for(int i = 1 ; i < n;i++){
        int current = nums[i];
        int j = i-1;
        while(nums[j]>current &&  j >=0){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1] = current;
    }
    for(int i = 0;i < n;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}