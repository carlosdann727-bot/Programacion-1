#include<iostream>
using namespace std;

int main()
{
	
	
	/*
	Operador terneario:
	Definicion practica : es una forma de condicionar utilizando una sola linea para lo que en ciertos casos es conviniente para hacer un 
	codigo mas limpio y facil de mantener
	
	Sintaxis en c++ : cout<<(condicion ? verdadero : falso );


	*/
	
	
	
	//Determinar si un número es par o impar
	
/*	int n;
	cout<<"Ingrese el numero: ";
	cin>>n;
	
	cout<<(n%2==0 ? "El numero es par" : "El numero es impar");
	*/
	
	//Determinar aprobado o reprobado
	
//	double nota;
//	cout<<"Ingrese la nota: ";
//	cin>>nota;
	
	
	//Forma 1: cout<<(nota < 0 or nota > 100 ? "Nota tiene que estar entre 0 y 100": (nota>=60 ? "Aprobado":"Reprobado"));
	//Forma 2:
	//cout<<(nota >=0 and nota <=100 ? (nota < 60 ) ? "Reprobado" : "Aprobado" : "Nota tiene que estar entre 0 y 100");
	
	
	//Comparar dos números y mostrar cuál es mayor usando operador ternario
	//Sintaxis en c++ : cout<<(condicion ? verdadero : falso );
	
	int n1,n2;
	cout<<"Ingrese 2 numeros \n";
	cin>>n1>>n2;
	
	cout<<(n2>n1 ? "el numero mayor es "+to_string(n2) : "el numero mayor es "+to_string(n1));
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}