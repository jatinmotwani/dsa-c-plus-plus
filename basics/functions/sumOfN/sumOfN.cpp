#include<iostream>
using namespace std;

int sum (int number){
    int sum = 0;
    for(int i = 1; i<= number;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}