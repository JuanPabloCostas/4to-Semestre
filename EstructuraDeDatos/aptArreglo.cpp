#include <cstdlib>
#include <iostream>


using namespace std;

int main(){
    short arreglo[10] = {0,1,2,3,4,5,6,7,8,11}, *aptarreg;
    aptarreg = &arreglo[0];

    cout << "\n";
    cout << "La direccion del arreglo es: " << aptarreg << "\n";
    cout << "La direccion del arreglo es: " << &arreglo << "\n";
    cout << "La direccion del arreglo en la primera posicion es: " << aptarreg << "\n";
    cout << "La direccion del arreglo en la primera decima es: " << &arreglo[9] << "\n";
    cout << "El valor del arrglo en la decima pocision es: " << *(aptarreg+9) << "\n";

}