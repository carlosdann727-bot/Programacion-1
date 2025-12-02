#include<iostream>
using namespace std;




	int main ()
	{
		
	//cout : sirve para mostrar een la consola	
	cout<<"Hola Mundo"<<endl;
	cout<<'c'<<endl;
	
	// Existen distintos tipos de variables y las variables sirven para almacenar datos
	/*
	Tipo numerico: int, double, float
	int: se usa para numeros enteros 5,6,7 etc
	float: se usa para numeros decimales un poco mas precisos 5.68
	double: se usa para numeros decimales o enteros con mas precisicion que los anteriores 5.678977676
	
	Tipo texto:
	char: esta se usa para caracteres ejemplo c,t,y,u
	string : almacenar texto ejemplo bryan,carlos
	
	
	*, - , /
	
	Como declarar varibles 
	1                    2           3
	tipo de dato        nombre      inicializarlas(si usted gusta o se le pide)
	int n1 = 5;
	
	
	
		*/	
		
	int numero1 = 10;
	cout<<numero1<<endl;
		
		
	int n,m,suma;
	cout<<"Ingrese el primer numero: ";
	cin>>n;
	cout<<"Ingrese el segundo numero: ";
	cin>>m;
	
	suma = n+m;
	cout<<"El resultado de tu suma es: "<<suma<<endl;
	
	int resta = n-m;
	int multiplicacion = n*m;
	int division = n/m;
	
	cout<<"El resultado de tu resta es: "<<resta<<endl;
	cout<<"El resultado de tu multi es: "<<multiplicacion<<endl;
	cout<<"El resultado de tu div es: "<<division<<endl;
	
	
		
		
		
		return 0;
	}