#include <iostream>
#include <cstdlib>
#include <fstream>




using namespace std;


int main(){
    int outval = 19;
    string namefile;
    cout << "Escribe el nombre del archivo: ";
    cin >> namefile;
    cout << "\n";

    ofstream WriteFile(namefile); //apertura archivo en modo escritura
    WriteFile << outval << "\n";

    WriteFile.close();

    int inval;
    ifstream ReadFile(namefile);
    ReadFile >> inval;

    ReadFile.close();

    cout<<"El valor escrito en el archivo es: " << inval << "\n";
    return 1;

}
