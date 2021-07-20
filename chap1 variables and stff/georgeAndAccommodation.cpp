#include<iostream>

using namespace std;

int main(){
    // write your code here
    // n rooms
    // i room has p people
    // i room can hold q people in total
    int n, m;
    cin >> n ;
    m = n;
    int arr[n][2];
    while( n > 0 ){
        cin >> arr[n - 1][0];
        cin >> arr[n - 1][1];
        n--;
    }

    int rooms = 0;

    for ( int i = 0 ; i < m; i++){
        if (arr[i][1] - arr[i][0] >= 2){
            rooms++;
        }
        
    }
    cout << rooms;
    return 0;
}