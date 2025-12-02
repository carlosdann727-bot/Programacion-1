// Las condiciones o los condicionales

/*

if y else 
if significa:  si (si pasa esto que pase esto) 
Ejemplos:
si 5 es mayor que 3 decir que el numero mayor es 5
si pedri esta lesionado no puede jugar

else significa:  de lo contrario o (si no paso esto que pase lo otro)
de lo contrario puede jugar

Utilidad:
Esto es util cuando no quiere que pase algo sin que pase otra cosa primero

Sintaxis: if(condicion) {lo que quieres que pase } 
Dato curioso:  puedes poner una instrucion sin llaves pero si es mas de una accion debe estar entre llaves

if(condicion) accion;
if(condicion)
{
accion1
accion2
}

Con los condicionales se puede usar operadores logicos y estos son or o and
or: se cumple si al menos una condicion es cierta
and: se cumple si todas son ciertas



*/

#include<iostream>
using namespace std;

int main(){
	
	//Haga un programa que determine cual numero es mayor entre 2 numeros o diga si son iguales
	/*int n1, n2;
	cout<<"Ingresa el primer numero: ";
	cin>>n1;
	cout<<"Ingresa el segundo numero: ";
	cin>>n2;
	
	
	if(n1==n2)
	{
		cout<<"Son iguales";
	}
	else
		if(n2>n1)
	{
		cout<<"El numero mayor es: "<<n2;
	} else
	{
		cout<<"El numero mayor es: "<<n1;
	}     */
	
	
	
	//Pide al usuario tres longitudes y usa condicionales para determinar si el triángulo es:Equilátero, Isósceles, Escaleno
	//Debe mostrar el tipo según la comparación de sus lados.
	/*
	double l1,l2,l3;
	
	cout<<"Ingrese el lado 1: ";
	cin>>l1;
	
	cout<<"Ingrese el lado 2: ";
	cin>>l2;
	
	cout<<"Ingrese el lado 3: ";
	cin>>l3;
	
	if(l1==l2 and l1==l3 )
	{
		cout<<"El triangulo es equilatero";
	}
	else if(l1==l2 or l2==l3)
	{
		cout<<"El triangulo es isoceles";
	}
	else 
	{
		cout<<"El triangulo es escaleno"; 
	}*/
	
	
	//Programa que evalúa si una persona es mayor de edad
	//Solicita la edad del usuario y muestra si es “Mayor de edad” o “Menor de edad”
	
	int edad;
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	
	if(edad>18)
	{
		cout<<"Mayor de edad";
	} else
	{
		cout<<"Menor de edad";
	}
	
	
	
	
	
	return 0;
}
