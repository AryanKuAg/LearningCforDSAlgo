#include<iostream>

using namespace std;

int main(){
    // Write your code here
    int x = 0, steps ;
    cin >> steps; 
    string operations[steps];

    for (int i  = 0 ; i < steps ; i++){
        cin >> operations[i];
    } 

    for (int i = 0 ; i < steps ; i++){
        if (operations[i] == "X++"){
            x++;
        } else if( operations[i] == "++X"){
            ++x;
        } else if( operations[i] == "--X"){
            --x;
        }else if (operations[i] == "X--"){
            x--;
        }
    }


    cout << x;



    // string just ;
    // cin >> just;
    // if ( just == "x++"){
    //     cout << just;
    // } else{
    //     cout << "not";
    // }
    return 0;
}