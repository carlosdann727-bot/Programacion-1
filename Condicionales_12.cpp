#include<iostream>
using namespace std;

int main()
{
	
	//Nivel Fácil — Determinar si un número es múltiplo de 5    
	
/*int n;
	cout<<"Ingrese su numero: ";
	cin>>n;
	
	if(n%5==0)
	{
		cout<<"El numero ingresado es un multiplo de 5";
	}
	else
	{
		cout<<"El numero ingresado no es un multiplo de 5";
	}
	
	//<> operadores como and y or , else if */
	
	/*double n1,n2;
	char n3;
	
	cout<<"Ingrese su primer numero: ";
	cin>>n1;
	cout<<"Ingrese su segundo numero: ";
	cin>>n2;
	cout<<"Ingrese la operacion a realizar: ";
	cin>>n3;
	
	if(n3 == '+')
	{
		double suma = n1+n2;
		cout<<"La suma es: "<<suma;	
	} 
	else if(n3 == '-')
	{
		double resta = n1-n2;
		cout<<"La resta es: "<<resta;	
	}
	else if(n3 == '*')
	{
		double multi = n1*n2;
		cout<<"La multiplicacion es: "<<multi;	
	}
	else if(n3 == '/')
	{
		if(n2 != 0)
		{
			double div = n1/n2;
			cout<<"La division es: "<<div;	
		}
		else
		{
			cout<<"No se puede dividir por cero";
		}
		
	}
	else
	{
		cout<<"El caracter ingresado no es correcto( solo puede usar los siguientes: /,*,+,-)";
	}
	
	*/
	
	int anio;
	cout<<"Ingrese el año: ";
	cin>>anio;
	
	if((anio % 4 == 0 and anio % 100 != 0) or anio % 400 == 0)
	{
		cout<<"El año es bisiesto ";
	}
	else
	{
		cout<<"El año no es bisiesto";
	}
	
	
	
	
	
	
	
	
	
	return 0;
}