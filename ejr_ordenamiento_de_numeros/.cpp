//metodo burbuja 
//ejemplo con un ejercicio de ordenamiento

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	
	int numeracion[7] = {5,7,3,2,6,1,4,};
	//auxiliar 
	int aux;

	//bucle para realizar el respectivo orden asignado
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{//condicion que si el numero inicial es mayor que el de la siguiente posicion, se realiza el cambio
			if (numeracion[j] > numeracion[j + 1])
			{//proceso de cambio

				                                 // n1   n2
				aux = numeracion[j];//aux=nj    //  4     3
				numeracion[j] = numeracion[j+1];//  4     3
				numeracion[j+1] = aux;          //  3     4//version final del cambio
			}
		}
	}
	//mostrar en pantalla el orden ascendente
	cout << "Ascendente:" << endl;
	//bucle clasico que imprime la condicional (if) que se aplico en el anterior bucle
	
	//i=0 tambien si i es a 7 entonces aumenta i
	for (int i =0; i < 7; i++)
	{
		
		cout << " " << numeracion[i]<<" " ;
	}
	cout << "\n";
	//mostrar en pantalla el orden ascendente
	cout << "Descendiente:" << endl;
	//si j=6 y tambien j es mayor a -1 entonces j se reduce
	for (int j = 6; j > -1; j--)
	{
		cout << " "<<numeracion[j]<<" ";
	}

	_getch();
	return 0;


}

