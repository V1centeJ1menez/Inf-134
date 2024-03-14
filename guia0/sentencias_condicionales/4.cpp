#include <iostream>

using namespace std;

int main(){

    int x, y, a;

    cout << "Introduce dos numeros: " << endl;

    cin >> x >> y;

    a = (x > y) ? x: y;

    cout << "El numero mayor es " << a << endl;



    return 0;
}