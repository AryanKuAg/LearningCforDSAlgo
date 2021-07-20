#include<iostream>

using namespace std;

int memo[1000];

int fib(int n){
    if ( n <= 1){
        return 1;
    }
    if ( memo[n] != 0){
        return memo[n];
    }

    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}


int main(){
    // write your code here
    cout << fib(3000000);
    return 0;
}