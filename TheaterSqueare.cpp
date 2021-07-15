#include<iostream>
#include<cmath>

using namespace std;

int main(){
    // write your code here
    long double n , m , a ;
    cin >> n >> m >> a;
    unsigned long long int result ; 

   
cout <<  fixed;
result = ceil(n / a) * ceil(m / a);
cout << result; 
  
    return 0;
}