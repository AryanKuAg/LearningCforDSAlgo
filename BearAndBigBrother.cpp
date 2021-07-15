#include<iostream>

using namespace std;

int main(){
    // write your code here
    // limik = a , bob = b
    // limik <= bob
    // limik's weight * 3 per year
    // bob's weight * 2 per year
    // print year when limit become larger than bob

    int a, b;
    cin >> a >> b;

    int year = 0;

    do{
        a *= 3;
        b *= 2;

        year++;
    } while( a <= b);

    cout << year;
    return 0;
}