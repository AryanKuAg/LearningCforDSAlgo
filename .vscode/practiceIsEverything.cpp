#include<iostream>

using namespace std;

struct Vector{
    int sz;
    double * elem;
}
Vector v; 

void vector_init(Vector& v, int s)
{
    v.elem = new double(s); // new keyword stores this variable in heap of the memory
    v.sz = s;
    
}

class Arayan{

    public:
    int yo = 0;

    private:
    int jo = 78;
}

int main(){
    Arayan a = new Arayan();
    cout<<a.jo;
    // write your code here
    int list[]  {1,2,3,4,5,6,7,7,8,9};
    
    for (auto x : list){
        cout << x << endl;
    }
    auto name = "Aryan";
    auto test = 0;

    constexpr auto just = "poop";

    while (name[test]!= 0){
        cout << name << endl;
        test++;
    }
    cerr << "hey there this is an error" << endl;
    clog << "this is the log" << endl;
    return 0;
}