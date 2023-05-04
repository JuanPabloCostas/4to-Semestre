#include <cstdlib> 
#include <iostream>

using namespace std;

struct Nodo{

    int data;
    Nodo *next;

};

void insertarLista(Nodo *&, int);

void mostrarLista(Nodo *);

Nodo * head = NULL;

int main(){
int n, x;

cout << "Ingresa la cantidad de numeros que quieras arreglar: ";
cin >> x;
for(int y=0; y < x; y++){
cout << "Ingresa un numero entero: ";
cin >> n;
insertarLista(head, n);
}
mostrarLista(head);
cout << "\n"; 

}

void insertarLista(Nodo *& head, int n){

    Nodo * new_nodo = new Nodo();
    new_nodo -> data=n;
    Nodo * aux1 = head;
    Nodo * aux2;

    while((aux1 != NULL) && (aux1->data < n)){

        aux2 = aux1;
        aux1 = aux1->next;

    }

    if(head == NULL){
    head = new_nodo;
    }
    else{
        aux2->next = new_nodo;
    }
    new_nodo->next = aux1;

    cout << "El dato ha ingresado a la lista \n";
}

void mostrarLista(Nodo * head){
    Nodo * actual = new Nodo();
    actual = head;
    while(actual != NULL){
        cout << actual -> data << " -> ";
        actual = actual ->next;
    }
}