#include <iostream>

using namespace std;

int main(){

    /* 
        Escribir un programa para convertir una medida dada en pies a sus equivalentes: 
        a) yardas
        b) pulgadas
        c) centimetros
        d) metros

        la idea es ingresar la medida en pies e imprimir todas las conversiones inmediatamente.
    */

   int x;
   cout << "Ingresa tu medida en pies: "<<endl;
   cin >>x;
   
   cout <<"Las conversiones son: "<<endl;
   cout << "Yardas: "<< x/3 <<" Pulgadas: " << x*12 <<" Centimetros: "<< (x*12) * (2.54) <<" Metros: "<< ((x*12) * (2.54))/100 <<endl;


    return 0;
}