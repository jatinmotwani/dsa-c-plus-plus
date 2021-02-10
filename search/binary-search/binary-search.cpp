// Time complexity => O(log n)
#include<iostream>
using namespace std;

int binarySearch(int array[],int length,int value){
    int start =0,end=length;
    while(start<=end){
        int mid = (start+end)/2;
        if(array[mid] == value){
            return mid;
        }else if(array[mid]>value){
            end = mid - 1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0; i<n;i++){
        cin >> nums[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(nums,n,key) << endl;
    return 0;
}