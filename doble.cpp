#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b;
	float prom;
	cout<<"Ingrese su primera nota: "<<endl;
	cin>>a;
	cout<<"Ingrese su segunda nota: "<<endl;
	cin>>b;
	prom = (a+b)/2;
	cout<<"Tu promedio es: "<<endl;
	cout<<prom<<endl;
	if(prom>=7){
		cout<<"APROBADO";
		}
	else{
		cout<<"REPROBADO";
	}
	getch();
	return 0;
}
