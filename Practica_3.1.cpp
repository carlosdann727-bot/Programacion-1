#include<iostream>
using namespace std;




	int main ()
	{
		/*
		
		Pide al usuario una temperatura en grados Celsius y muestra su equivalente en Fahrenheit usando la fórmula f = c * 1.8 + 32

		*/
		
		// Primero declaramos las variables necesarias 
		float C,F;
		// Pedir al usuario
		cout<<"Ingrese la temperatura: ";
		cin>>C;
		
		F = (C*1.8)+32;
		cout<<"La temperatura en fareheit es: "<<F;
		
		
		
		
		
		
		
		return 0;
	}