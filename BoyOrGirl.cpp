#include <iostream>

using namespace std;

int main(){
    // Write your code here

    string name; 
    cin >> name;

    int distinct = 0;
    for (int i = 0 ; i < name.length() ; i++){
        bool repeated = false;

        for (int j = i+1 ; j < name.length() ; j++){
            if(name[i] == name[j]){
                repeated = true;
            }
        }

        if(!repeated){
            distinct++;
        }
    }


    cout << distinct << endl;
    if (distinct % 2 == 0){
        cout << "CHAT WITH HER!";
    } else{
        cout << "IGNORE HIM!";
    }

    return 0;
}