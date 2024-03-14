#include <iostream>

using namespace std;

int main(){

    int a,b,c,d,e,f;

    cout << "Este programa te resuelve sistemas del tipo\n ax + by = c\n dx + ey = f"  << endl;

    cout << "ingresa la variable a : ";
    cin >> a;
    cout << "ingresa la variable b : ";
    cin >> b;
    cout << "ingresa la variable c : ";
    cin >> c;
    cout << "ingresa la variable d : ";
    cin >> d;
    cout << "ingresa la variable e : ";
    cin >> e;
    cout << "ingresa la variable f : ";
    cin >> f;

    cout << "La soluciones son x: " << (c*e - b*f)/(a*e-d*b) << " y: " << (a*f-c*d)/(a*e-b*d) << endl;

    return 0;
}