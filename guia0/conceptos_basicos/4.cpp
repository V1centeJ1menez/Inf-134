#include <iostream>

using namespace std;

int main(){

    int x = 2, y= 1, z=4, a = 1, b = 1, c = 1, d = 1;

    cout << "a: " << x/y + 1 << endl;
    cout << "b: " << (x+y) / (x-y) << endl;
    cout << "c: " << (x + y/z) / (x - y/z) << endl;
    cout << "d: " << b/(c+ d) << endl;
    cout << "e: " << (a+b) * (c/d) << endl;
    cout << "f: " << (x*y) /(1- 4*x) << endl;
    
    return 0;
}