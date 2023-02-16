#include <iostream>
#include <cstdlib>
#include <cmath>

// Comentario de una linea

/*

Comentario de varias lineas

*/

using namespace std;

int main(){

    int datInt, entero = 10;
    float flotante = 1.5;
    double doble = 3.1416;
    char chatter = 'D';

    cout << "\n";
    cout << "Este es dato entero: \n " << entero << "\n";
    cout << "Este es dato flotante: \n " << flotante << "\n";
    cout << "Este es dato doble: \n " << doble << "\n";
    cout << "Este es dato caracter: \n " << chatter << "\n";
    cout << "Ingresa un numero entero: ";
    cin >> datInt;

    cout << "El dato ingresado multiplicado por 5 es: " << datInt * 5 << "\n";
    cout << "El dato ingresado elevado a la 5ta potencia es: " << pow(datInt,5) << "\n";
    
}

