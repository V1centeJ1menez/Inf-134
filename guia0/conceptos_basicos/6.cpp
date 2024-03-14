#include <iostream>

using namespace std;
const int M = 6;

int main(){

    int a, b, c;
    cout << "Introduzca el valor de a y de b: ";
    cin >> a;
    cin >>b;

    // si a=5 y b=8
    c = 2 * a - b;
    // c=2
    c -= M;
    //c=-4
    b = a + c - M;
    //b=-5
    a = b * M;
    //a=-30
    cout << "\n a = " << a << endl;
    // imprime "a = -30"
    b = -1;
    cout << b << c << endl;
    // imprime "-1 -4"

    return 0;
}