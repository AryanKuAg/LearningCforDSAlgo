#include <iostream>

using namespace std;

int main() {
    // Write your program here
    string word;
    cin >> word;
    int wordInt;
    char wordChar;

    wordInt  = word[0];
    if (wordInt >= 65 && wordInt <= 90){
    }else if(wordInt >= 97 && wordInt <= 122) {
        wordInt -= 32;
    }
    wordChar = wordInt;
    cout << wordChar;
    for(int i = 1; i < word.length(); i++){
        cout << word[i];
    }

    return 0;
}