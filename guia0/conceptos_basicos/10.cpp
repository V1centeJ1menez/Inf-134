#include <iostream>
#include <math.h>

using namespace std;

int main(){

    // Teniendo como datos de entrada el radio y la altura de un cilindro queremos calcular: el área lateral 
    // y el volumend del cilindro

    int r, h;

    cout << "Ingresa el radio y la altura de tu cilindro, en el orden respectivo: " << endl;
    cin >> r;
    cin >> h;

    cout << "El área lateral del cilindro es: " << 2*M_PI*r*h<<" y el volumen de este es: "<< M_PI*pow(r,2)*h <<endl;


    return 0;
}