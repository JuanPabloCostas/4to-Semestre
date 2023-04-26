#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){

    string* diaSemana[7] = {
        new string("Lunes"),
        new string("Martes"),
        new string("Miercoles"),
        new string("Jueves"),
        new string("Viernes"),
        new string("Sabado"),
        new string("Domingo")
    };

    int numeroIngresado = 0;
    // Codigo para asegurarse que se ingrese un numero *hecho por Jesus*
    while ((cout << "Ingrese el numero: ") && !(cin >> numeroIngresado) && !(numeroIngresado >= 1 && numeroIngresado <= 7)) {
        cout << "Eso no es un numero adecuado (1-7); \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "El dia es " << *diaSemana[numeroIngresado-1];
}