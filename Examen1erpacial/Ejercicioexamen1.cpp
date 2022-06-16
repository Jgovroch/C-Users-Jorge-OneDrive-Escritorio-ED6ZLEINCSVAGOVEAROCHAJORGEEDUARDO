#include<stdio.h>

int main(void){
	int a;
	printf("Escribe el numero a realizar");
	scanf("%d",&a);
	setbuf (stdin, NULL);
	if( a%2==0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
		getchar();
	}
	return 0;
}
