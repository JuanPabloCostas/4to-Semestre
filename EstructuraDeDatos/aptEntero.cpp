#include <cstdlib>
#include <iostream>


using namespace std;

int main(){
    int x = 10;
    int *apt = &x;

    cout << "\n";
    cout << "El valor de x es: " << x << "\n";
    cout << "El valor de x es: " << *apt << "\n";
    cout << "La direccion de x es: " << apt << "\n";
    cout << "La direccion de x es: " << &x << "\n";
    cout << "La direccion del apuntador es: " << &apt << "\n";


}