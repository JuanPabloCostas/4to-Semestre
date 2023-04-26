#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    string arreglo[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    string *aptarreg;
    int i;
    aptarreg = arreglo;
    cout << "Ingrese un numero entero del 1-12: ";
    cin >> i;
    i--;

    cout << "\n";
    
    cout << "Mes: " << aptarreg[i];

    cout << "\n";
}