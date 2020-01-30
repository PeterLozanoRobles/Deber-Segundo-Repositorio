#include<iostream>
#include<conio.h>
using namespace std;
//prototipo de funcion
int encontrarMax(int x, int y);
int main(){
	int n1, n2;
	cout<<"digite 2 numeros: ";
	cin>>n1>>n2;
	cout<<"El mayor de los dos numeros es: "<<encontrarMax(n1,n2)<<endl;
	getch();
	return 0;
}
//Definicion
int encontrarMax(int x, int y){
	int numMax;
	if(x>y){
		numMax=x;
	}
	else {
		numMax=y;
	}
	
	return numMax;
}
