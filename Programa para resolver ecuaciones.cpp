#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//Prototipo de la funcion
float ecuacion(float n1);
//Funcion principal
int main(){
	float e,pro;
	cout<<"Ingrese un valor: "<<endl;
	cin>>e;
	pro=ecuacion(e);
	cout<<"Tu resultado es: "<<pro;
	getch ();
	return 0;
}
//Funcion
float x;
float ecuacion(float n1){
	float RE(x=n1*2+3);
	return RE;
}
