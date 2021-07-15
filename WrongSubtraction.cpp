#include<iostream>


using namespace std;

int main(){
    // write your code here
    long int n;
    int k;
    cin >> n >> k;

    while ( k > 0){
        if ( n % 10 == 0 ){
            n /= 10;
        } else {
            n -= 1;
        }

        k--;
    }

    cout << n;
    return 0 ;
}