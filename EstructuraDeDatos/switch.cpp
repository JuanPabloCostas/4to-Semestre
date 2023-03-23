#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    int valor;
    cout << "Ingrese el valor del color: ";
    cin >> valor;

    switch (valor)
    {
    case 1:
        cout << "El numero corresponde al color rojo";
        break;

    case 2:
        cout << "El numero corresponde al color azul";
        break;

    case 3:
        cout << "El numero corresponde al color blanco";
        break;

    case 4:
        cout << "El numero corresponde al color amarillo";
        break;

    case 5:
        cout << "El numero corresponde al color morado";
        break;

    case 6:
        cout << "El numero corresponde al color gris";
        break;

    case 7:
        cout << "El numero corresponde al color verde";
        break;
    
    default:
        cout << "El numero no corresponde a este conjunto";
        break;
    }
}