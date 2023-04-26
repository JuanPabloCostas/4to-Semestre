#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){
    int pivote = 0;
    string caracterIngresado;
    cout << "Ingrese un caracter> ";
    cin >> caracterIngresado;
    
    string vocalesMinusuclas[5] = {"a","e","i","o","u"};
    string vocalesMayusuclas[5] = {"A","E","I","O","U"};

    for (size_t i = 0; i < 5; i++)
    {
        if ( vocalesMinusuclas[i] == caracterIngresado )
        {
            pivote = 1;
            break;
        }
        
    }

    for (size_t i = 0; i < 5; i++)
    {
        if ( vocalesMayusuclas[i] == caracterIngresado )
        {
            pivote = 2;
            break;
        }
        
    }
    
    switch (pivote)
    {
    case 1:
        cout << "Es una vocal minuscula";
        break;
    case 2:
        cout << "Es una vocal mayuscula";
        break;
    
    default:
        cout << "No es una vocal";
        break;
    }


}