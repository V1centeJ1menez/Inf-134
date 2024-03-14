#include <iostream>
#include <string>

using namespace std;

int main(){

    char a[3];
    cout <<"Ingresa caracteres del 0-9: " << endl;
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];

    int x = stoi(a);

    cout << x <<endl;


    return 0;
}