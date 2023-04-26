#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int numeroIngresado = 0;
    // Codigo para asegurarse que se ingrese un numero *hecho por Jesus*
    while ((cout << "Ingrese un numero entero: ") && !(cin >> numeroIngresado)) {
        cout << "<Ingrese un numero valido>; \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    string nombreArchivo;
    cout << "Ingrese un nombre para el archivo: ";
    cin >> nombreArchivo;
    
    
    ofstream archivo(nombreArchivo + ".txt");
    for (int i = 1; i <= 10; i++) {
        archivo << numeroIngresado << " x " << i << " = " << numeroIngresado * i << "\n";
    }
    cout << "Tabla de multiplicar escrita en el archivo " << nombreArchivo << ".txt" << "\n";

    
    archivo.close();
}