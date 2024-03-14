#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // Necesito: longitud de una circunferencia 
    //           area de circunferencia
    // Esto con el radio ingresado.

    int r;
    cout << "Ingresa el radio de circunferencia: ";
    cin >> r;

    cout << "Perimetro: " << 2*M_PI*r<<endl;
    cout << "Area: " << M_PI*pow(r,2)<<endl;

    return 0;
}