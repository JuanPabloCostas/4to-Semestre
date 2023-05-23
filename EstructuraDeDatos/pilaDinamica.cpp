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
    int n;
    cout << "Ingresa un num entero\n> ";
    cin >> n;

    push(tope,n);

    cout << "Ingresa un num entero\n> ";
    cin >> n;

    push(tope,n);

    mostrarPila(tope);

    popNodo(tope);

    mostrarPila(tope);
   

}

void push(Nodo *& tope, int n){
    Nodo * new_nodo = new Nodo();
    new_nodo -> data = n;
    new_nodo -> next = tope;

    tope = new_nodo;

    cout << "El numero se ah agregado a la pila\n";
}

void mostrarPila(Nodo *){
    Nodo * actual = new Nodo();
    actual = tope;
    cout << "Los datos de la pila son: \n";
    while (actual != NULL)
    {
        cout << "|" << actual -> data << "|\n";
        actual = actual -> next;
    }
    
}

void popNodo(Nodo *& tope){
    if (tope != NULL)
    {
        Nodo * aux_delte;
        aux_delte = tope;
        tope = tope -> next;
        delete aux_delte;
        cout << "Pila eliminada\n";
    }
    else
    {
        cout << "La pila esta vacia\n";
    }
    
    
}