#include <iostream>
using namespace std;

int factorial(int number){
    int factorial =1;
    for(int i =2 ; i <= number;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}