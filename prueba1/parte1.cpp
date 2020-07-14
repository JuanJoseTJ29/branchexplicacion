/*Diseñe un algoritmo que permita ingresar en un vector los nombres de las 
facultades de la UNMSM, luego por cada facultad deberá ingresar los nombres de las
escuelas profesionales. En base a esta información realizar lo siguiente:

a) Leer los datos.
b) Mostrar los datos leídos.
c) Indicar la facultad que tiene el mayor numero de escuelas.
d) Mostrar la información calculada en el punto C
*/

#include<iostream>
#include<string.h>
using namespace std;
#define N 100


void mostrar(int n, int m[], char esc[][N][N], char nom[][N])
{
	for(int i=0;i<n;i++)
	{
		cout<<"Escuelas de "<<nom[i]<<":"<<endl<<endl;
		for(int j=0;j<m[i];j++)
		{
			cout<<esc[i][j]<<endl;;
		}
		cout<<"------------------------------------------------\n";
	}
}


