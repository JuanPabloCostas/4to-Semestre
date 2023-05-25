#include <cstdlib> 
#include <iostream>

using namespace std;


struct Nodo {
    int data;
    Nodo * next;
};

Nodo * tope = NULL;



bool push(Nodo *&, int);

void mostrarPila(Nodo *);

void popNodo(Nodo *&);

void popPila(Nodo *&);

bool buscar(Nodo *, int);

void buscarNodo(Nodo *, int);

int main(){
    bool loop = true;
    do
    {
        int o;
        cout << "\n\nSeleccione una opcion: \n";
        cout << "1- Insertar un valor\n";
        cout << "2- Mostrar la pila\n";
        cout << "3- Eliminar valor de pila\n";
        cout << "4- Buscar Nodo en pila\n";
        cout << "5- Eliminar pila\n";
        cout << "> ";
        cin >> o;

        switch (o)
        {
        case 1:
            int k;
            cout << "Cuantos elementos a ingresar\n> ";
            cin >> k;
            for (size_t i = 0; i < k; i++)
            {
                int n, p;
                cout << "Ingrese un numero entero\n> ";
                cin >> n;

                p = push(tope,n);
                if(p)
                {
                    i--;
                }
            }
            break;

        case 2:
            mostrarPila(tope);
            break;

        case 3:
            int j;
            cout << "Cuantos elementos a eliminar\n> ";
            cin >> j;
            for (size_t i = 0; i < j; i++)
            {
                popNodo(tope);
            }
            break;

        case 4:
            int n;
            cout << "Que elemento desea buscar?\n> ";
            cin >> n;
            buscarNodo(tope,n);
            break;
        case 5:
            popPila(tope);
            break;
        default:
            loop = false;
            break;
        }
    } while (loop);

}

bool push(Nodo *& tope, int n){
    if (buscar(tope,n))
    {
        return true;
    }
    Nodo * new_nodo = new Nodo();
    new_nodo -> data = n;
    new_nodo -> next = tope;

    tope = new_nodo;

    cout << "El numero se ah agregado a la pila\n";

    return false;
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

bool buscar(Nodo *, int n){
    Nodo * busca = new Nodo();
    busca = tope;
    while (busca != NULL)
    {
        if (busca->data == n)
        {
            cout << "No se pueden agregar datos repetidos\n";
            return true;
        }
        busca = busca -> next;
    }
    return false;
    
}

void buscarNodo(Nodo *, int n){
    Nodo * buscar = new Nodo();
    buscar = tope;
    do
    {
        if (buscar -> data == n)
        {
            cout << "Se ah encontrado " << buscar -> data << " en " << &buscar -> data;
            return;

        }
        buscar = buscar -> next;
    } while (buscar != NULL);

    cout << "No se ah encontrado el valor";
    
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

void popPila(Nodo *& tope){
    while (tope != NULL)
    {
        
        Nodo * aux_delte;
        aux_delte = tope;
        tope = tope -> next;
        delete aux_delte;
        cout << "Pila eliminada\n";
    }

    cout << "La pila esta vacia\n";
    
    
}