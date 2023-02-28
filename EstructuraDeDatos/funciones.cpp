#include <iostream>
#include <cstdlib>


using namespace std;

int Suma(int numA, int numB){
    return numA + numB;
}

float Promedio(int numA, int numB){
    return (float)(Suma(numA, numB))/2;
}

int main(){

    int numA, numB;

    cout << "Ingresa el primer numero: ";
    cin >> numA;

    cout << "Ingresa el segundo sumero numero: ";
    cin >> numB;

    cout << "\n";

    cout << "La suma de los 2 numeros es: " << Suma(numA, numB) << "\n";
    cout << "El promedio de los 2 numeros es: " << Promedio(numA, numB);
    

}