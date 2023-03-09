#include <iostream>
#include <cstdlib>
#include <fstream>




using namespace std;


int main(){
    ofstream WriteFile; 
    string namefile, texto;
    cout << "Escribe el nombre del archivo: ";
    //cin >> namefile;
    getline(cin,namefile);
    cout << "\n";
    WriteFile.open(namefile);
    cout << "Escribe el texto del archivo: ";
    getline(cin,texto);
    cout << "\n";
    //cout << texto;

    //apertura archivo en modo escritura
    //WriteFile.open(namefile.c_str());
    WriteFile << texto << "\n";

    WriteFile.close();

    string inval;
    ifstream ReadFile(namefile.c_str());
    if (ReadFile.fail()){
        cout << "El archivo no se encuentra";
        exit(1);
    }
    else{
    ReadFile >> inval;
    ReadFile.close();

    cout<<"El valor escrito en el archivo es: " + inval + "\n";
    return 1;
    }
}
