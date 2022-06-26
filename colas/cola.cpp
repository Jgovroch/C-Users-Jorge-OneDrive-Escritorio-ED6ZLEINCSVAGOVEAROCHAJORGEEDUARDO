/*

Ejemplo de una cola
primeras entradas 
primeras salidas
*/

#include <iostream>

using namespace std;

//definir la estructura base
struct nodo{
	int nro;
	struct nodo * siguiente;
};

//cola
struct cola{
	nodo *delante;
	nodo *atras;
};


//encolar
void encolar(struct cola &q, int valor){
	//auxiliar del nodo para meterlo en la cola
	struct nodo * aux = new (struct nodo);
	
	aux->nro = valor;
	aux-> siguiente = NULL;
	
	if(q.delante == NULL){
		//es el primero en entrar
		q.delante = aux;
	}else{
		(q.atras)->siguiente = aux;
	}
	//el puntero debe de apuntar al ultimo
	q.atras = aux;
	
}

//desencolar
int desencolar(struct cola&q){
	int num;
	struct nodo *aux;
	
	//aux apunte al inicio de la cola
	aux = q.adelante;
	num = aux->nro;
	q.delante =n(q.delante->siguiente);
	//liberes memeoria del apuntador
	delete(aux);
	
	return num;
}

void muestraCola(struct cola q){
	//necesitamos el auxiliar
	struct nodo *aux;
	//donde esta el inicio de la cola 
	aux = q.delante;
	
	//si la cola esta vacia
	while(aux != NULL){
		cout<<" "<<aux->nro;
		aux =aux->siguiente;
	}
}

void vaciarCola(struct cola &q){
	//auxiliar
	struct nodo *aux;
	
	while(q.delante != NULL){
		aux = q.delante;
		q.delante = aux->siguiente;
		delete(aux);
	}
	q.delante = NULL;
	q.atras = NULL;
}

void menu(){
	cout<<"Ejemplo de una colita ";
	cout<<"1.- Encolar ";
	cout<<"2.- desencolar" ;
	cout<<"3.- Mostrar cola";
	cout<<"4.- vaciar cola ";
	cout<<".- salir";
	
	
	int main
	//defino la cola
	struct cola q;
	
	
    q.delante =NULL;
    q.atras = NULL;
    //variables
    int dato;
    int op;
    
    
    
    menu();
    cin>>op;
    switch(op){
    	case 1:
    		cout<<"Numero a encolar :";
    		cin>>dato;
    		encolar(q, dato);
    		cout<<"numero :"<<dato<<"encolado.";
    		break;
    	case 2:
    		x = desencolar(q);
    		cout<<"numero :"<<x<< "desencolado";
    		break;
    	case 3:
    		cout<<"Mostrando la colita";
    		if(q.delante!=NULL) muestraCola(q);
    		else cout<<"cola vacia";
    		break;
    	case 4:
    		vaciaCola(q);
    		cout<<"hecho cola vacia";
    		break;
	}while(op!=5)
	return 0
    

