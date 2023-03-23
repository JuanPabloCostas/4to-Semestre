#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;


int main(){
    double numero;
    cout << "Ingrese el numero: ";
    cin >> numero;
    double conjunto = 0;
    double exponente;

    for (size_t i = 1; i <= 20; i++)
    {
        exponente = pow(numero, i);
        conjunto = conjunto + (exponente);
        cout << "\n\n" << numero << "^" << i << " = " << exponente;
        cout << "\nLa suma con el anterior da: " << conjunto;
    }
    
}