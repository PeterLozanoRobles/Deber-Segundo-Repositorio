//Dise�ar una funci�n que calcule la media de tres n�meros
//le�dos del teclado y poner un ejemplo de su
//aplicaci�n.
#include<iostream>
#include<conio.h>
using namespace std;
float media(float x, float y, float z);
int main (){
	int N1,N2,N3;
	cout<<"INGRESE NUMEROS: ";
	cin>>N1>>N2>>N3;
	cout<<"Tu media es: "<<media(N1,N2,N3)<<endl;
	getch ();
	return 0;
}
float media(float x, float y, float z){
	float Media;
	Media = (x+y+z)/3;
	return Media;
}

