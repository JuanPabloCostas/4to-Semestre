#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){
    ofstream WriteFile; 
    int numero;
    WriteFile.open("archivo.txt");
    cout << "Escribe numero a multiplicar: ";
    cin >> numero;
    cout << "\n";
    int valor = 0;
    for (size_t i = 1; i <= 10; i++)
    {
        valor = i*numero;
        WriteFile << i << " x " << numero << " = "<< valor << "\n";
    }
    WriteFile.close();
}