#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    
    float celcius;
    cout << "Ingrese la temperatura en grados Celcius: ";
    cin >> celcius;

    cout << "La temperatura en grados Fahrenheit: " << (celcius * 9/5) + 32 << "F" << "\n";
    cout << "La temperatura en grados Kelvin: " << celcius + 273.15 << "K" << "\n";
}