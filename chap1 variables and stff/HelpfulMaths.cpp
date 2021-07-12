#include <iostream>

using namespace std;

 
int main(){
    // Write your code here

    string disorder;
    
    cin >> disorder;
string disarr[100];
    for (int i = 0,j =0 ; i < disorder.length(); i+= 2,j++){
        disarr[j] = disorder[i];
    }

    
   // Algorithm for sorting the array

    int one = 0, two = 0, three = 0 ; 


for (int i = 0; i < disorder.length() /2 +1; i++){
        // cout << disarr[i] << endl;
        if (disarr[i] == "1"){
            one++;
        }else if (disarr[i] == "2"){
            two++;
        }else if( disarr[i] == "3"){
            three++;
        }

    }

    // cout << one << endl;
    // cout << two << endl;
    // cout << three << endl;
   for (int i  = 0 ; i < disorder.length() /2 +1; i++){
       if ( one >= 1 ){
           cout << 1 ;
           one--;
       } else if ( two >= 1){
           cout << 2 ;
           two--;
       }else if ( three >= 1){
           cout << 3;
           three--;
       }
        if ( !(one == 0 && two == 0 && three == 0)){
       cout << '+';
        }
   }


// cout << disarr;

    return 0;
}