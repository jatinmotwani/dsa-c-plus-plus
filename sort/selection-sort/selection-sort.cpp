#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[i]){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    for(int i =0 ;i<n;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}