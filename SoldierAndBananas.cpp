#include<iostream>

using namespace std;

int main(){
    // write your code here

    int k, w;
    long int n;

    cin >> k >> n >> w;
    int totalPrice = 0;

    for (int i = 1; i <= w; i++){
        totalPrice += k * i;
    }
    if ((totalPrice - n) > 0){
    cout << totalPrice - n;
    }else{
        cout << 0;
    }
    return 0;
}