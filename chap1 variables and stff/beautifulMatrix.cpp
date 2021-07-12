#include <iostream>
#include <math.h>

using namespace std;

int main(){
    // Write your code here
    int arr[5][5];
    int po1, po2;
    for(int i = 0 ; i < 5; i++){
        for (int  j = 0 ; j < 5;j++){
          cin >>  arr[i][j];
          if (arr[i][j] == 1){
              po1 = i +1;
              po2 = j + 1;
          }
        }
    }

    int answer;
    // cout << "abspos1 : " << po1 << endl;
    // cout << "abspos2 : " << po2 << endl;
    answer = abs(po1 -3) + abs(po2 -3);

    cout << answer; 

    // int j;
    // cin >> j;
    // cout << abs(j);
    

    return 0;
}