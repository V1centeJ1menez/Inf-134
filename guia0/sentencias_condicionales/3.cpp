#include <iostream>

using namespace std;

int main(){

    int x = 0;

    // primera columna, revisa las condiciones y cierra hasta que encuentra una verdadera.

    if (x >= 0)
        x++;
    
    else if (x >=1)
        x += 2;

    // deberia imprimir 1
    cout << x << endl;
    
    x = 0;

    // segunda columna, revisa cada condicion por separado, asi que siempre pasara por ambas, no como el caso anterior.

    if (x>=0)
        x++;
    
    if (x>=1)
        x += 2;

    // deberia imprimir 3
    cout << x <<endl;



    return 0;
}