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
        int o, n;
        cout << "\n\nSeleccione una opcion: \n";
        cout << "1- Insertar un valor\n";
        cout << "2- Mostrar la pila\n";
        cout << "3- Eliminar valor de pila\n";
        cin >> o;

        switch (o)
        {
        case 1:
            cout << "Ingresa un num entero\n> ";
            cin >> n;

            push(tope,n);
            
            break;
        
        case 2:
            mostrarPila(tope);
            
            break;

        case 3:
            popNodo(tope);
            
            break;

        
        default:
            loop = false;
            break;
        }
    } while (loop);

    
    
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