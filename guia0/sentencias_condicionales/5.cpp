#include <iostream>
using namespace std;

int main() {
    char inputChar;
    cout << "Introduce un carácter: ";
    cin >> inputChar;

    // Verificar si es un carácter alfabético
    if ((inputChar >= 'A' && inputChar <= 'Z') || (inputChar >= 'a' && inputChar <= 'z')) {
        cout << "Es un carácter alfabético." << endl;
    }
    // Verificar si es un dígito
    else if (inputChar >= '0' && inputChar <= '9') {
        cout << "Es un dígito." << endl;
    }
    // Verificar si es un signo de puntuación
    else if (inputChar == '!' || inputChar == ',' || inputChar == '.' || inputChar == ';') {
        cout << "Es un signo de puntuación." << endl;
    }
    // Verificar si es un carácter especial
    else if (inputChar == '@' || inputChar == '#' || inputChar == '$' || inputChar == '%') {
        cout << "Es un carácter especial." << endl;
    }
    // Si no se cumple ninguna de las condiciones anteriores, es un carácter no imprimible
    else {
        cout << "Es un carácter no imprimible." << endl;
    }

    return 0;
}
