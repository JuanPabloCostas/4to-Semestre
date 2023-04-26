
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){
    int numeroNatural = 0;
    int contador = 0;

    int mayorA10 = 0;
    int entre20y60 = 0;
    int mayorA90 = 0;
    do
    {
        cout << "Ingrese un numero natural> ";
        cin >> numeroNatural;

        if (numeroNatural > 10)
        {
            mayorA10++;
        }
        if (numeroNatural > 90)
        {
            mayorA90++;
        }
        if (numeroNatural >= 20 && numeroNatural <= 60)
        {
            entre20y60++;
        }
        
        contador++;
    } while (contador <= 10);

    cout << "Hubo " << mayorA10 << " numeros mayores a 10" << "\n";
    cout << "Hubo " << entre20y60 << " entre 20 y 60" << "\n";
    cout << "Hubo " << mayorA90 << " numeros mayores a 90" << "\n";
    
}