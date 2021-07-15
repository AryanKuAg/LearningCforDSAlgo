#include<iostream>

using namespace std;

int main(){
    // Write your code here
    string word, newWord;
    cin >> word;

    for(int i = 0 ; i < word.length(); i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' ||  
        word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y'  ) {

        } else{
            if( word[i] >= 65 && word[i] <= 90){
                newWord += '.'; 
                newWord += word[i] + 32; 
            }else{
                newWord += '.'; 
                newWord += word[i] ; 
            
            }
        }
    }


    cout << newWord;
    // cout << "a" + "b";

    return 0;
}