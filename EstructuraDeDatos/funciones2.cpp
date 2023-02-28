#include <iostream>
#include <cstdlib>


using namespace std;

void FunRef(int &numA, int &numB){
    numA *= 2;
    numB += 15;
}

int main(){

    int numA, numB;

    cout << "Ingresa el primer numero: ";
    cin >> numA;

    cout << "Ingresa el segundo sumero numero: ";
    cin >> numB;

    cout << "\n";

    cout << "Valor del primer numero: " << numA;
    cout << "\nValor del segundo numero: " << numB;

    cout << "\n\n";
    cout << "Tranformando...";
    FunRef(numA, numB);
    cout << "\n\n";

    cout << "Valor del primer numero: " << numA;
    cout << "\nValor del segundo numero: " << numB;


}