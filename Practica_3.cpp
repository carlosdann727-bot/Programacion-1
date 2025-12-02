#include<iostream>
using namespace std;

int main()
{
	/*Crea un programa que lea tres números ingresados por el usuario, los sume y calcule
 	el promedio. Debe mostrar el resultado directamente, sin estructuras de control.
	*/

	//cout sirve para mostrar en la consola
	//cin sirve para leer un dato
	
	//Primero declarar variables que necesitemos
	double n,l,p;
	
	//Pedirle al usuario que ingrese el primer numero
	cout<<"Ingrese primer numero: "<<endl;
	//Almacenar o leer el dato ingresado
	cin>>n;
	
	cout<<"Ingrese segundo numero: "<<endl;
	//Almacenar o leer el dato ingresado
	cin>>l;
	
	cout<<"Ingrese el tercer numero: "<<endl;
	//Almacenar o leer el dato ingresado
	cin>>p;
	
	double suma = 0; 
	suma = n+l+p;
	
	cout<<"La suma es: "<<suma<<endl;
	
	double promedio = suma/3;
	cout<<"El promedio es: "<<promedio<<endl;
	
	return 0;
}




