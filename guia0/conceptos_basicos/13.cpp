#include <iostream>

using namespace std;

int main(){

    int m=45, n = 75;
    cout << "m= " << m << "n= " << n <<endl;
    // imprime m = 45 y n =75

    cout << "m= " << ++m << "n= " << n-- <<endl;
    // imprime m = 46 y n =75

    cout << "m= " << m++ << "n= " << ++n <<endl;
    // m = 46 y n =75
    return 0;
}