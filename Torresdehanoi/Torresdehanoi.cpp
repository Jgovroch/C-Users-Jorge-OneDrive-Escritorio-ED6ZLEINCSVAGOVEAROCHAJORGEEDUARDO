#include<stdio.h>
#include<stdlib.h>

#define TORRE_INICIAL 1
#define TORRE_AUXILIAR 2
#define TORRE_FINAL 3

int hanoi(int numDiscos, int torreInicial, int torreAuxiliar, int torreFinal);
void muestra();

int t1=0, t2=0,t3=0,i,maxdiscos;
char disco='*';

int main(){
	
	int cantDiscos, movimientos;
	printf("Cantidad de discos a mover: ");
	scanf("%d",&cantDiscos);
	printf("\n _______________________________________________ \n");
	t1=cantDiscos;
	maxdiscos = cantDiscos;
	printf("La torre: \n");
	muestra();
	printf("\n _______________________________________________ \n la serie de movimientosa realizar es:");
	movimientos = hanoi(cantDiscos, TORRE_INICIAL, TORRE_AUXILIAR, TORRE_FINAL);
	printf("\n\n Se sealizaron en total %d movimientos \n", movimientos);
	return 0;
}

int hanoi(int numDiscos, int torreInicial, int torreAuxiliar, int torreFinal)
{
	static int movimientos = 0;
    if(numDiscos ==1)
{
printf("\n\n%d)Mover el disco superior de la torre %d a la torre %d\n", movimientos+1, torreInicial, torreFinal);
movimientos++;
      
      if(torreInicial==1)
          t1--;
      if(torreInicial==2)
          t2--;
      if(torreInicial==3)
          t3--;
      if(torreFinal==1)
          t1++;
      if(torreFinal==2)
          t2++;
      if(torreFinal==3)
          t3++;
      
muestra();
}
else
{
hanoi(numDiscos - 1, torreInicial, torreFinal, torreAuxiliar);
printf("\n\n%d Mover el disco superior de la torre %d a la torre %d", movimientos+1, torreInicial, torreFinal);
movimientos++;

      if(torreInicial==1)
           t1--;
      if(torreInicial==2)
           t2--;
      if(torreInicial==3)
           t3--;
      if(torreFinal==1)
           t1++;
      if(torreFinal==2)
           t2++;
      if(torreFinal==3)
           t3++;
    
    muestra();
    hanoi(numDiscos - 1, torreAuxiliar, torreInicial, torreFinal);
}
return movimientos;
}

void muestra(){
	printf("\n\t torre1: ");
for(i=1;i<t1;i++){
	 printf("%c",disco);
}
    printf("\n\t torre2: ");
for(i=1;i<=t2;i++){
	 printf("%c",disco);
}
    printf("\n\t torre3: ");
for(i=1;i<=t3;i++){
	 printf("%c",disco);
 }
}