#include <iostream>

using namespace std;

int main(){

    int velocidad = 120;
    float consumo;

    if (velocidad > 80)
        consumo = 10.00;
    
    else if (velocidad > 100)
        consumo = 12.00;
    
    else if (velocidad > 120)
        consumo = 15.00;

    // esto imprime 10

    cout << consumo << endl;

    return 0;
}