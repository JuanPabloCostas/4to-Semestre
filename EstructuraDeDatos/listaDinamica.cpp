#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo
{
    int data;
    Nodo *next;
};

void instertarLista ( Nodo *&, int );
void mostrarLista(Nodo *);

Nodo *head = NULL;


int main(){
    int n;
    cout << "Ingresa un numero entero: ";
    cin >> n;
    instertarLista(head,n);
    cout << "\n";

    cout << "\nLos elementos de la lista son: ";
    mostrarLista(head);
    cout << "\n";
    }


void instertarLista(Nodo *& head, int n){
    Nodo * new_nodo = new Nodo();
    new_nodo->data=n;
    Nodo * aux1 = head;
    Nodo * aux2;

    while ((aux1!=NULL)&&(aux1->data<n))
    {
     aux2=aux1;
     aux1 = aux1 -> next;   
    }

    if (head == NULL)
    {
        head = new_nodo;
    }
    else
    {
        aux2 -> next = new_nodo;
    }
    new_nodo -> next = aux1;
    
    cout << "El dato ah ingresado a la lista";
    
}

void mostrarLista(Nodo * head){
    Nodo * actual = new Nodo();
    actual = head;
    while (actual != NULL)
    {
        cout << actual -> data << " >" ;
        actual = actual ->next;
    }
    
}
