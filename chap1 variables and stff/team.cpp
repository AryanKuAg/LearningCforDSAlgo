#include <iostream>

using namespace std;

int main(){
    // write your code here

    int n, a , b, confirm = 0;
    cin >> n;
    int arr[500][3];

    for (int i =0 ; i < n  ; i++){

        scanf("%d %d %d", &arr[i][0],&arr[i][1],&arr[i][2]);

    }

    for (int i = 0 ; i < n ; i++){
        int sum = arr[i][0] + arr[i][1] + arr[i][2] ; 
        if ( sum >=2 && sum  <4){
            // cout << arr[i][0] << arr[i][1] << arr[i][2] << endl;
            confirm++;
            // cout << sum << endl;
        }
    }

    cout << confirm;

    return 0;
}