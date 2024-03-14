#include <iostream>

using namespace std;

int main(){
    int x, y, z;

    z = 1;

    while (z == 1)
    {
        cout << "Ingresa valor de x: "<<endl;
        cin >> x;

        cout << "Ingresa valor de y: "<<endl;
        cin >> y;

        cout << "valor de x/y: " << x/y << endl;
        cout << "valor de x%y: " << x%y << endl;    

        cout << "Quieres seguir intentado(1/0): ";
        int temp;
        cin >> temp;
        if (temp == 0)
        {
            z = 0;
        }
        
    }
    

    return 0;
}