#include<iostream>

using namespace std;

int main(){
    // write your code here
    unsigned int x;
    cin >> x;
    int remainder, quotient;

    remainder = x % 5;
    quotient = x / 5;

    if ( remainder >0){
 cout << 1+ quotient;
    }else {
        cout << quotient;
    }
   
    return 0;
}