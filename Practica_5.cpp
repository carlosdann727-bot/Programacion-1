#include<iostream>
using namespace std;

int main()
{
	
	/*
	Operaciones que se puede realizar 
	Suma -> +  5+5=10
	Resta -> - 5-5=0
	Multiplicacion -> * 5*5=25
	Division -> / 5/5=1
	Residuo -> %   5%4=1
	% significa modulo y devuelve el residuo de una division ejemplo de esto:
	2%2 deja como residuo cero porque basicamente 2*1=2 pero como podemos observar algunas divisiones si dejan residuo
	veamos un ejemplo de este caso 3%2 = 1 lo que pasa en este caso es que no hay un entero que multiplicado por 2 de 
	exactamente 3 entonces se multiplica 2*1=2 y hay que sumarle un 1 que es el residuo para tener 3
	
	Hacer un programa que te diga cual es el residuo de 2 numeros que el primer numero ingresado sea mayor que el segundo
	
	Hacer un programa que funcione como una calculadora donde el usuario ingrese 2 numeros y se muestre el resultado de la suma de ellos
	la resta, multiplicacion y division
	
		double n,m;
	
	cout<<"Ingrese el primer numero: ";
	cin>>n;
	cout<<"Ingrese el segundo numero: ";
	cin>>m;
	
	
	double resta = n-m;
	double promedio = 100-((resta/n)*100);
	cout<<"La diminusion es del "<<promedio<<"%";
	*/
	
	double n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	//60 minutos son 1 hora
	double h = n/60;
	cout<<"La cantidad de horas es: "<<h;
	
	
	
	
	
	return 0;
}