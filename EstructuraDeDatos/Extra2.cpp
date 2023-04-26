#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){
    int n[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el numero " << i + 1 << "> ";
        cin >> n[i];
    }

    if ( n[0] > n[1] && n[0] > n[2] && n[0] > n[3] ){
        cout << n[0] << " es el mayor";
    } else if ( n[1] > n[2] && n[1] > n[3]){
        cout << n[1] << " es el mayor";
    } else if ( n[2] > n[3]){
        cout << n[2] << " es el mayor";
    } else {
        cout << n[3] << " es el mayor";
    }
}