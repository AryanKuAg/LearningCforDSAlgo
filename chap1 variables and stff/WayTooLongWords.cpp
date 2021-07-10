# include<iostream>

using namespace std;

int main(){
    // Your code will be here
   int numberOfLines;
   cin >> numberOfLines;

   string words[100];

   for (int i = 0 ; i < numberOfLines ; i++){
       cin >> words[i];
   }

   for (int i = 0 ; i < numberOfLines ; i++){
       string theWord = words[i];
        int stringLength = theWord.length();

        if(stringLength <= 10){
            cout << theWord << endl;
        } else {


       char first = theWord[0];
       char last = theWord[stringLength -1];
       int middle = stringLength -2;
       string finalWord = first + to_string(middle) + last;
       cout << finalWord << endl;
        }
   }
    return 0;
}