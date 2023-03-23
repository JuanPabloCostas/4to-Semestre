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

    }