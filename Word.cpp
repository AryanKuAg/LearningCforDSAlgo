#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // write your code here
    string word;
    cin >> word;
    int upper = 0 , lower = 0 ;
    for (auto x : word){
        if ( x >= 65 && x <= 92){
            ++upper;
        }else if ( x >= 97 && x <= 122){
            ++lower;
        }}

string finalWord;
// cout << upper << " " << lower << endl;
    if ( upper == lower){
        for (auto x : word){
           if ( x >= 65 && x <= 92){
               finalWord += x + 32;
        }else if ( x >= 97 && x <= 122){
                finalWord += x;
        }
        }
    } else if ( upper > lower){
        for (auto x : word){
           if ( x >= 65 && x <= 92){
               finalWord += x ;
        }else if ( x >= 97 && x <= 122){
                finalWord += x - 32;
        }
        }
    } else if ( upper < lower){
        for (auto x : word){
           if ( x >= 65 && x <= 92){
               finalWord += x + 32;
        }else if ( x >= 97 && x <= 122){
                finalWord += x;
        }
        }
    } 
    
    cout << finalWord;
    return 0;
}