#include <cstdlib>
#include <iostream>


using namespace std;

int main(){
    int numero;
    int *num;

    cout << "Ingrese el numero: ";
    cin >> numero;
    cout << "\n";

    num = &numero;
    bool esPrimo = true;
    for (size_t i = 2; i < *num; i++)
    {
        if ((*num % i) == 0)
        {
            cout << "No es primo";
            esPrimo = false;
            break;
        }
    }

    if (esPrimo)
    {
        cout << "El numero es primo";
    }
}