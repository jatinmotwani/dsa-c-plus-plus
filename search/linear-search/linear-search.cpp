// Time complexity => O(n)
#include<iostream>
using namespace std;

int linearSearch(int array[],int length, int value){
    for(int i =0;i<length;i++){
        if(array[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0; i <n;i++){
        cin >> nums[i];
    }
    int key;
    cin >> key;
    cout << linearSearch(nums,n,key) << endl;
    return 0;
}