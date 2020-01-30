#include<iostream>
#include<stdlib.h>
using namespace std;
int main (int argc, char *argv[])
{
	int a[100];
	int n=1,ACUM=0;
	cout<<"LOS NUMEROS PARES MENORES QUE CIEN: "<<endl;
	for(int i=0;i<100;i++)
	{
		a[i]=n++;
		if (a[i]%2==0)
		{
		cout<<a[i]<<endl;
		}
	}
system("PAUSE");
return 0;
}
