#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    
    int noLados;
    cout << "Ingrese el numero de lados: ";
    cin >> noLados;

    float lado;
    cout << "Ingrese la longitud del lado: ";
    cin >> lado;

    float apotema;
    cout << "Ingrese la longitud del apotema: ";
    cin >> apotema;

    cout << "El perimetro del poligono es: " << noLados*lado << "\n";
    cout << "El area del poligono es: " << noLados * lado * apotema / 2;

}