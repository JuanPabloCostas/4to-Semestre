#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main(){
    bool stop = false;
    int digito;
    do
    {
        
        cout << "Ingrese el digito: ";
        cin >> digito;
        if (digito > 0){
            cout << "\nEl numero tiene: " << to_string(digito).length();
        }
        else{
            stop = true;
        }
        
    } while (stop == false);
    


    
}