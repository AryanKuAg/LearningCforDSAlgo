#include<iostream>

using namespace std;

int main(){
    // write your code here
    string players;
    cin >> players;
    int counter = 0;
    for (int i = 0 ; i < players.length() - 1; i++){
        if (players[i] == players[i + 1]){
            counter++;
        }else {
            counter = 0;
        }

        if ( counter >= 6){
            cout << "YES";
            break;
        }
    }
 if ( counter < 6){
            cout << "NO";
           
        }

    return 0;
}

// 1 1 1 1 1 1 1 