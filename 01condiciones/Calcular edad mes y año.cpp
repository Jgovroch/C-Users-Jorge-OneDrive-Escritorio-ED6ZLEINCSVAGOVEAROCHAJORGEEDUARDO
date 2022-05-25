#include <iostream>
using namespace std;

void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);

int main ()
{
	int anioAct;
	int mesAct;
	int fechAct;
	
	int anioNac;
	int mesNac;
	int fechNac;
	
	cout <<"\n\tCalcular la edad, mes y dia\n\n";
	cout <<"Ingresa el anio actual: "; cin>> anioAct;
	cout <<"Ingresa el mes actual: "; cin>> mesAct;
	cout <<"Ingresa la fecha actual: "; cin>> fechAct;
	
	cout <<"\nIngresa el anio de nacimiento: "; cin>> anioNac;
	cout <<"Ingresa el mes de nacimiento: "; cin >> mesNac;
	cout <<"ingresa la fecha de nacimiento: "; cin>> fechNac;
	
	calcularEdad( anioAct, mesAct, fechAct, anioNac, mesNac, fechNac);
	
	return 0;	
}

void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
	int respFech, respMes;
	
	if (fechAct < fechNac )
	{
	fechAct = fechAct + 30;
	mesAct =mesAct -1;
	respFech = fechAct - fechNac;	
	}
	else 
	respFech = fechAct - fechNac;
	
	if( mesAct < mesNac)
	{
		mesAct = mesAct + 12;
		anioAct = anioAct - 1;
		respMes = mesAct - mesNac;
	}
	else 
	    respMes = mesAct - mesNac;
		
	cout << "\nTienes: \n";
	cout << "Edad: "<<anioAct - anioNac << endl;
	cout << "Mes: "<<respMes << endl;
	cout << "Dia: "<<respFech<<endl;

	
}

