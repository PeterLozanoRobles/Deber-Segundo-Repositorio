#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int dia, mes; 
	char usuario;
	cout<<"\t \t \t \t HOROSCOPOS SELLAN ALVARADO \n" <<endl;
	cout<<"A CONTINUACION TE PEDIREMOS QUE INGRESES LOS SIGUIENTES DATOS\n " <<endl;
	cout<<"ingrese dia de nacimiento: "; cin>>dia;
	cout<<"ingrese mes de nacimiento: "; cin>>mes;
cout<<"\nEstas listo para saber lo que te deparara?  " <<endl;
cin>>usuario;
switch (mes){
	
	case 1:
	if(dia<=21){
		cout<<"Tu Signo de sol es capricornio: CAPRICORNIO \nTu signo chino es: El Dragon de Metal ";
	}
	else{
		cout<<"Tu Signo de sol es acuario: ACUARIO \nTu signo chino es: El Dragon de Metal ";
	}
	break;
	
	case 2:
	    if(dia<=19){
	    	cout<<"Tu Signo de sol es acuario: ACUARIO \nTu signo chino es: El Dragon de Metal ";
		}
		else{
			cout<<"Tu Signo de sol es piscis: PISCIS \nTu signo chino es: El Dragon de Metal ";
		}
	break;
	
	case 3:
		if(dia<=20){
            cout<<"Tu Signo de sol es piscis: PISCIS \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es aries: ARIES \nTu signo chino es: El Dragon de Metal";
		}
    break;
    
    case 4:
    	if(dia<=20){
            cout<<"Tu Signo de sol es aries: ARIES \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es Tauro: TAURO \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 5:
	    if(dia<=21){
            cout<<"Tu Signo de sol es Tauro: TAURO \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es geminis: GEMINIS \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 6:
		if(dia<=22){
            cout<<"Tu Signo de sol es geminis: GEMINIS \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es cancer: CANCER \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 7:
	    if(dia<=22){
            cout<<"Tu Signo de sol es cancer: CANCER \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es leo : LEO \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 8:
	    if(dia<=22){
            cout<<"Tu Signo de sol es leo : LEO \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es virgo: VIRGO \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 9:
	    if(dia<=21){
            cout<<"Tu Signo de sol es virgo: VIRGO \nTu signo chino es: El Dragon de Metal  ";
		}
		else {
			cout<<"Tu Signo de sol es libra: LIBRA \nTu signo chino es: El Dragon de Metal ";
		}
	break;
	
	case 10:
	    if(dia<=22){
            cout<<"Tu Signo de sol es libra: LIBRA \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es escorpio: ESCORPIO \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 11:
	    if(dia<=22){
            cout<<"Tu Signo de sol es escorpio: ESCORPIO \nTu signo chino es: El Dragon de Metal";
		}
		else {
			cout<<"Tu Signo de sol es sagitario: SAGITARIO \nTu signo chino es: El Dragon de Metal";
		}
	break;
	
	case 12:
	    if(dia<=21){
            cout<<"Tu Signo de sol es sagitario: SAGITARIO \nTu signo chino es: El Dragon de Metal";
		}
		else{
			cout<<"Tu Signo de sol es capricornio: CAPRICORNIO \nTu signo chino es: El Dragon de Metal ";
		}
	break;
	
	default: cout<<"ESTE MES NO EXISTE, POR FAVOR INGRESE UN MES QUE EXISTA";
    }
	getch ();
	return 0;	
}
