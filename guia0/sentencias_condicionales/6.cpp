#include <iostream>

using namespace std;

int main(){

int a, b, c;

cout << "Ingresa tres enteros" << endl;
cin >> a >> b >> c;

if (b == a + 1) {

    if (c == b + 1){

        cout << "Los numeros fueron ingresados en orden numerico" << endl;
    }

}

else {
    cout << "Los numeros no fueron ingresados en orden numerico" << endl;
}
    return 0;
}