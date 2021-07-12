#include<iostream>

using namespace std;

int main(){
    // Write your code here
    int stones;
    cin >> stones;

    string colour;
    cin >> colour;

    int r = 0 , g = 0 , b = 0 ;
    for (int i = 0 ; i < stones -1; i++){
        if (colour[i] == 'R' && colour[i+1] == 'R'){
            r++;
        } else if (colour[i] == 'G' && colour[i+1] == 'G'){
            g++;
        } else if (colour[i] == 'B' && colour[i+1] == 'B'){
            b++;
        }

    }

    cout << r + g + b;
    return 0;
}