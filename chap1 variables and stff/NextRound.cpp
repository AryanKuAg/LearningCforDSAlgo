#include <iostream>

using namespace std;

int main(){
    // Write your code here

    int part, pos;
    cin >> part >> pos;
    int arr[part]; 

    for (int i = 0 ; i < part ; i++){
        cin >> arr[i];
    }

    // Number of participants for next round lsadf
    int qualify = 0;

    for (int i = 0 ; i < part ; i++){
         
        if ( arr[pos - 1] <= arr[i] && arr[i] != 0){
            // cout << arr[i] << endl;
            qualify++;
        }
    }
    

    cout << qualify ; 
    return 0;
}