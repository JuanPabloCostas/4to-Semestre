/*
Universidad Autónoma De Querétaro
Facultad de informática

Estructura de datos
M.I.S.D. Erika del Río Magaña

Costas Rueda Juan Pablo
EXP: 307081
4to Semestre
*/

#include <cstdlib>
#include <iostream>


using namespace std;

int main(){
    int arreglo[10] = {0,1,2,3,4,5,6,7,8,11}, *aptarreg;
    aptarreg = arreglo;

    cout << "\n";
    for (size_t i = 0; i < 10; i++)
    {
        cout << "posicion [" << i << "] Direccion: " << &aptarreg[i];

        cout << "\n";
    }
    

    

}