#include<iostream>
using namespace std;
int main()
{
	

	/*Ciclos o bucles (for, while, do while)
	Definicion son estructuras de repeticion
	 ( en otras palabras repiten una accion o un conjunto de ellas las veces que el programador requiera)
	mayormente utilizadas para hacer programas de manera mas eficientes 
	un ejemplo de esto seria leer 10 numeros normalmente utilizariamos 10 cin pero con un ciclo podemos resolver ese tipo de problemas
	
	
	Sintaxis (ciclo for):
	for(inicializacion; condicion o final; incremento )	
	{
	accion
	}

	Ejemplo :
	for(int i=0; i < 10; i++)             Donde i es la variable que en este ejemplo inicia en cero y termina en 9 y incrementa de uno en uno
	{										 
	cout<<i<<endl;
	} */

	//Imprimir en pantalla la tabla de multiplicar del 5 (1x5=5, 2x5=10)
	
	for(int i=1; i<=5; i++)
	{
		cout<<i<<"x5="<<i*5<<endl;
	}

	
	
	
	
	
	return 0;
}