#include <iostream>
using namespace std;

int main()
{
    int m = 99, n;

    n = ++m;
    //n = 100 y m == 100

    cout << "m = " << m << " n = " << n << endl;
    //imprime m= 100 y n = 100
    n = m++;
    cout << "m = " << m << " n = " << n << endl;
    //imprime m =101, n = 100
    cout << "m = " << m++ << endl;
    // m = 101
    cout << "m = " << ++m << endl;
    //m=103
    return 0;
}
