#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0 ; i <n ; i++){
        cin >> nums[i];
    }
    int counter = 1;
    while(counter < n ){
        for(int i = 0;i<n-counter;i++){
            if(nums[i]>nums[i+1]){
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i = 0; i<n;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}