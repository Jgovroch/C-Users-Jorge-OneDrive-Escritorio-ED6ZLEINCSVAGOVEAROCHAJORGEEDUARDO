/*
ejemplo de una cola de alumnos matriculados
*/
#include<iostream>
#include 


using namespace std;

//definimos nuestra cola
struct cola{
	char clave[20];
	char nombre[30];
	float calificacion;
};

//definir el nodo
struct Nodo{
	cola alumnos;
	Nodo *siguiente;
}

//metodos
void menu();
void agregarDatos(cola &);
void insertarDatos(cola *&, cola *&, cola);
bool c_vacia(Nodo *);

int main(){
	//definimos la cola
	cola alumnos;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	char opcion;
	
	do{
		menu();
		cin>>opcion;
		//borrar el buffer
		fflush(stdin);
		//nodo auxiliar
		Nodo *aux = frente;
		
		switch(opcion){
			case '1':
				agregarDatos(alumnos);
				insertarDatos(frente, fin, alumnos);
				break;
			case '2':
				cout<<"clave /t"<<"Nombre/t"<<"calificacion/t";
				while(aux != NULL){
					cout<<aux->alumnos.clave
				}
		}
	}
}

void menu(){
	cout<<"Menu de alumnos matriculados";
	cout<<"1.- Agregar datos del alumno";
	cout<<"2.- Mostrar datos del alumno";
	cout<<"3.- Agregar datos del alumno";
	getch();
	cout<<"Precionar una tecla para continuar ";
	system("csl");
	
}
