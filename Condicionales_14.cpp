#include<iostream>
using namespace std;


int main()
{
	
/*	double x,y;
	cout<<"Ingrese x y y en ese respectivo orden"<<endl;
	cin>>x>>y;
	
	if(x == 0 and y == 0)
	{
		cout<<"El punto esta sobre el origen";
	}
	else if(y == 0 and x!=0)
	{
		cout<<"El punto esta sobre el eje x";
	}
	else if(y != 0 and x==0)
	{
		cout<<"El punto esta sobre el eje y";
	}
	else if(y > 0 and x >0)
	{
		cout<<"El punto esta en el primer cuadrante";
	}
	else if(y > 0 and x < 0)
	{
		cout<<"El punto esta en el segundo cuadrante";
	}
	else if(y < 0 and x < 0)
	{
		cout<<"El punto esta en el tercer cuadrante";
	}
	else 
	{
		cout<<"El punto esta en el cuarto cuadrante";
	}
	*/
	
	int n;
	cout<<"Ingresa un numero: ";
	cin>>n;
	
	if(n>1)
	{
		if(n==2 or n==3 or n==5 or n==7)
		{
			cout<<"El numero es primo";
		}
		else if (n%2==0 or n%3==0 or n%5==0 or n%7==0)
		{
			cout<<"El numero no es primo";
		}
		else
		{
			cout<<"El numero es primo";
		}
	}
	else
	{
		cout<<"El numero ingresado debe ser mayor que uno";
	}
	
	
	
	
	
	return 0;
}