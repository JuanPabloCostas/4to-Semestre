#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){
    while (1==1)
    {
        int suma = 0;
        int n;
        cout << "\n" << "Ingrese el numero a verificar (0 para cerrar) >";
        cin >> n;

        if (n == 0){
            break;
        }

        // cout << typeid(n).name();
        for (size_t i = 1; i < n; i++)
        {
            if(n % i == 0){
                suma += i;
            }
        }

        if (suma == n)
        {
            cout << n << " es perfecto";
        }
        else
        {
            cout << n << " no es perfecto";
        }
        
    }
    
    
    
}