#include <iostream>

using namespace std;

int main(){

    int i, j, k;
    float f, g;
    char c;

    //Evaludar las siguientes expresiones

    i = 1;
    // ahora i == 1
    cout << i << endl;

    j = i++;
    // ahora j == 1 y i == 2
    cout << j << i << endl;

    k = ++i;
    // ahora k == 3 y i == 3
    cout << k << i << endl;

    i = (j == 1) ? --k : k++;
    // ahora k == 2 y i == 2

    cout << i << k << endl;

    f = 2/4;
    // ahora f == 0.5

    cout << f << endl;

    g = 2.0/4;
    // ahora g == 0.5

    cout << g << endl;

    c = 'b' - 1;
    // ahora c es 'a'

    cout << c << endl;

    i = (c >= 'a') && (c <= 'z') ? 1:0;
    // como 'c' se encuentra entre 'a' y 'z' entonces el operador ternario responde con el caso verdad, en este caso 1

    cout << i << endl;

    j = (i < j && (f = k - 1) != 1);
    // como i == j y f == 1, entonces la condicion se hace falsa, devolviendo un 0.

    cout << j << endl;

    return 0;
}