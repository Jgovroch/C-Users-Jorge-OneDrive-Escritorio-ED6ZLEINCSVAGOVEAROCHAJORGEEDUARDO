/*
vamos a crear una pila 
como elemto basico oara 
poder demostraer qyue 
las primeras entradas son
las ulktimas salidas
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//definir la pila
struct Nodo{
	int valor;
	Nodo *siguiente;
};

//metodos
void insertarPila(Nodo *&, int);
void mostrarPila(Nodo *&);
void eliminarPila(Nodo *&, int);


int main(){
	/*el primero en entrar es el ultimo
	en salir, el ultimo que entra es el
	priemro que sale*/
	
	int cantidad, i=0, v, op=1;
	//primera definicion de la pila
	Nodo *pila = NULL;
	
	while(op!=4){
		cout<<"selecciona la opcion deseada: ";
		cout<<"1.- inserta valor: ";
		cout<<"2.- Mostrar valores: ";
		cout<<"3.- Eliminar valor: ";
		cout<<"4.- salir: ";
		
		cin>>op;
		
		switch(op){
			
			case 1:
				
				cout<<"Ingresa la cantidad de datos a introducir en la pila: ";
				cin>>cantidad;
			while(i<cantidad){
				cout>>"Ingresa el valor: ";
				cin>>v;
				insertarPila(pila);
				i++;			
			}
			break;
			
			case 2:
				mostrarPila(pila);
				break;
			case 3:
				//saber si esta vacia
				id(pila==NULL){
					cout<<"No se puede eliminar pila vacia.";
							
				}else{
					cout<<"Eliminar el dato ";
					while(pila!=NULL){
						eliminarPila(pila);
						if(pila!=NULL){
							cout<<"|"<<endl;
							
						}else{
							cout<<" * ">>endl;
						}
					}	
				}
				break;
			default:
				cout<<"la opcion deseada no existe, favor de mimir";
		}
	}
	return 0;
}



void insertarPila(Nodo *&pila, int v){
	//creamos el nodo
	Nodo *insPila = newNodo();
	insPila -> valor = v;
	insPila -> siguiente = pila;
	pila = insPila;
}


void mostrarPila(Nodo *&pila){
	//necesitamos un elemento que alamacene los valores
	Nodo *aux;
	
	if(pila==NULL){
		cout<<"La pila esta vacia no hay nada que mostrar";
		
	}else{
		aux = pila;
		while(aux!=NULL){
			cout<<"valor:"<<aux->valor<<endl;
			aux = aux->siguiente;
		}
	}
}

void eliminarPila(Nodo *&pila, int &v){
	Nodo * aux = pila;
	v = aux -> valor;
	pila = aux -> siguiente;
	delete aux;
}
