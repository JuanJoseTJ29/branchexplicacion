/*Dise�e un algoritmo que permita ingresar en un vector los nombres de las 
facultades de la UNMSM, luego por cada facultad deber� ingresar los nombres de las
escuelas profesionales. En base a esta informaci�n realizar lo siguiente:

a) Leer los datos.
b) Mostrar los datos le�dos.
c) Indicar la facultad que tiene el mayor numero de escuelas.
d) Mostrar la informaci�n calculada en el punto C
*/

#include<iostream>
#include<string.h>
using namespace std;
#define N 100



int main()
{
	int n,m[N];
	char esc[N][N][N],nom[N][N];
	do{
		cout<<"Ingrese cantidad de facultades de la UNMSM: ";
		cin>>n;
	}while(n<0);
	leer(n,m,esc,nom);
	mostrar(n,m,esc,nom);
	cout<<"------------------------------------------------\n";
	mayorEscuelas(n,m,esc,nom);
	cout<<"------------------------------------------------\n";
	mostrarEscuelas(n,m,esc,nom);
	
}

