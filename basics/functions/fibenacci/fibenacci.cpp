#include <iostream>
using namespace std;

void fib(int number){
    int t1 = 0;
    int t2 = 1;
    int newTerm ;
    for(int i = 1;i <=number;i++){
        cout << t1 << " ";
        newTerm = t1 + t2;
        t1 = t2;
        t2 = newTerm;
    }
}

int main(){
    int n ;
    cin >> n;
    fib(n);
    return 0;
}