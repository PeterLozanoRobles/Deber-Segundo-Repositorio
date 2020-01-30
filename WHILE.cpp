#include <cstdlib>
#include <iostream>
using namespace std;
int main(){ 
int n,serie,suma;
cout<<"Ingrese el ultimo termino de la serie: ";
cin>>n;
suma=0;
serie=2;
cout<<"S = ";
while(serie<=n){ 
cout<<serie<<",";
suma = suma + serie;
serie = serie + 2; 
}
cout<<endl<<endl;
cout<<"La suma de la serie es = "<<suma<<endl<<endl;
system("PAUSE");
return 0;
}
