#include<stdio.h>
#include<conio.h>
void cambio(int *a, int *b);

int main (){
	
	int x, y;
	 x=5;
	 y=10;
	 
	cambio (&x,&y);
	
	printf("El valor actual de x es %i y el valor actual de y es %i. \n\n",x,y);
	
	getch ();
	return 0;
}
void cambio (int *a, int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
