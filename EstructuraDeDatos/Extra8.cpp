#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Mayor {
    public:
    int valor;
    int i;
    int j;
};

int main(){
    Mayor myr;
    myr.valor = 0;
    myr.i = 0;
    myr.j = 0;
    int numeroIngresado = 0;
    // Codigo para asegurarse que se ingrese un numero *hecho por Jesus*
    while ((cout << "Ingrese el tamaño de la matriz: ") && !(cin >> numeroIngresado) && !(numeroIngresado <= 10)) {
        cout << "Ingreseun numero valido (1-10); \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int matriz[10][10];
    for (int i = 0; i < numeroIngresado; i++)
    {
        for (int j = 0; j < numeroIngresado; j++)
        {
            cout << "Ingrese el valor del elemento " << i << ", " << j << "> ";
            cin >> matriz[i][j];

            if (matriz[i][j] > myr.valor)
            {
                myr.valor = matriz[i][j];
                myr.i = i;
                myr.j = j;
            }
        }
    }

    cout << "El elemento mayor es: " << myr.valor << ", en la pocision " << myr.i << ", " << myr.j;
    


}