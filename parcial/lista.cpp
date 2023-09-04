#include <iostream>

using namespace std;
class Nodo {
public:
    int dato;
    Nodo* sgte;

    Nodo(int valor) : dato(valor), sgte(NULL) {}
};

class ListaCircular {
private:
    Nodo* cabeza;
	public:
	void insert(int dato);
	Nodo newNode = newNode();
	newNode->dato=dato;
	newNode->sgte=NULL;
	if (dato !=NULL){
		dato->sgte=newNode;
	}
	if (cabeza==NULL){
		cabeza= newNode;
	}
	
insertar dato(){
	int dato;
	node* current=cabeza;
}	

actualizar(){
	int posicion;
	node* current=cabeza;
	while(current != NULL){
		if(current->dato==dato){
			std:: cout<<"El dato: " <<"Se encontro en posicion: "<<posicion<<
		}
	}
}

cout<<"Lista circular"
	imprimir.lista
	
	int(opcion)
	imprimir.lista;
	
	cout<<"1. ingresar datos"<<endl;
	cout<<"2. actualizar lista"<<endl;
	cout<<"0. Salir de la lista"<<endl;
