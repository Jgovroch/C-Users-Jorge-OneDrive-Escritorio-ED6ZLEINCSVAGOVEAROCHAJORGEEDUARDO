#include <iostream>

using namespace std;

*//int main(){
	//uso de sentencias de control
	//do while
*//int i=1;
*//	do{
		//vamos a crear un programa que imprima hasta el 10
*//		cout<<i<<endl;
*//		i++;
*//	}while(i<11);
*//}

//while
/*int cont = 1;
while(cont <=10){
	cout<<cont<<end;
	cont++;
}cout<<"Se acabo";*/

//for
/*for(int i =1=10; i++)
    cout<<i<<endl;*/
    int seleccion;
    
    do{
    	cout<<"Menu 1,2,3 otra opcion para salir";
    	cout<<"1.- Opcion 1";
        cout<<"2.- Opcion 2";
        cout<<"3.- Opcion 3";
        cout<<"salir";
        cout<<"Ingrese la opcion";
        
        case 1:
        	cout<<"opcion 1";
        	break;
        case 2:
        	cout<<"opcion 2";
        	break;
        case 3:
        	cout<<"opcion 3";
        	break;
        default:
        	cout<<"Adios";
        	break;
    }
        
	}while((seleccion > 0)&& (seleccion ));

}


