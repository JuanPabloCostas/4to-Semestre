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
#include <cstring>


using namespace std;

struct Data
{
    char Nombre[15];
    int Edad;
};


int main(){
    Data *aptData = new Data();
    if(aptData!=NULL){
        strcpy(aptData->Nombre,"Lucy");
        aptData->Edad=21;

        cout << "El nombre es: " << aptData->Nombre << "\n";
        cout << "La edad es: " << aptData->Edad;
        cout << "\n\n";
    }

    Data *aptData2 = new Data[15]();
    if(aptData2!=NULL){
        strcpy(aptData->Nombre,"Lucy");
        aptData2->Edad=21;
        for (size_t i = 0; i < 2; i++)
        {
            cout << "\n" << "Ingresa un nombre: ";
            cin >> aptData2[i].Nombre;
            cout << "\n" << "Ingresa la edad: ";
            cin >> aptData2[i].Edad;
            cout << "\n\n";
        }

        for (size_t i = 0; i < 2; i++)
        {
            cout << "El nombre es: " << aptData2[i].Nombre << "\n";
            cout << "La edad es: " << aptData2[i].Edad;
            cout << "\n\n";
        }
        
        
    }

    }