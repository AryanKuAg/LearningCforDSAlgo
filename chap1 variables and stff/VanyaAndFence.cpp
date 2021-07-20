#include<iostream>

using namespace std;

int main(){
// write your code here
// h -> fence's height
// ith person's height is a.
// normal width = 1 , bend person's width = 2
// n is no. of friends. h is fence's height
int n, h;
cin >> n >> h;
int kids[n];

while( n > 0){
    cin >> kids[n - 1];
    n--;
}
int width = 0 ;

for ( auto x : kids){
    if ( x > h){
        width += 2;
    }else{
        width++;
    }
}

cout << width;

return 0;
}