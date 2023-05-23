#include <cstdlib> 
#include <iostream>

using namespace std;


struct Nodo {
    int data;
    Nodo * next;
};

Nodo * tope = NULL;



void push(Nodo *&, int);

void mostrarPila(Nodo *);

void popNodo(Nodo *&);

int main(){
    bool loop = true;
    do
    {
        int o;
        switch (o)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
    } while (loop);
    
}