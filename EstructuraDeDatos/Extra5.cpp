#include <iostream>
#include <string>
#include <limits>

using namespace std;

void Fibonacci(int n) {
    int pivoteAntepasado = 0;
    int pivotePasado = 0;
    int suma = 1;
    for (size_t i = 1; i <= n; i++)
    {
        cout << suma << "\n";
        pivoteAntepasado = pivotePasado;
        pivotePasado = suma;
        suma = pivoteAntepasado + pivotePasado;
        
        
    }
}


int main(){
    int numeroIngresado = 0;
    // Codigo para asegurarse que se ingrese un numero *hecho por Jesus*
    while ((cout << "Ingrese el numero: ") && !(cin >> numeroIngresado)) {
        cout << "Eso no es un numero; \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Fibonacci(numeroIngresado);


}


