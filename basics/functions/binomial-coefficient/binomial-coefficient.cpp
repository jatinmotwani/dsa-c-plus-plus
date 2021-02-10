// Formula For Binomial Co-efficient
// nCr = n! / (r! * (n-r)!)

#include<iostream>
using namespace std;

int factorial(int number){
    int factorial = 1;
    for(int i = 1 ; i<= number; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n, r;
    cin >> n >> r;
    cout << factorial(n)/(factorial(r)*factorial(n-r)) << endl;
    return 0;
}