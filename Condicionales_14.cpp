#include<iostream>
using namespace std;


int main()
{
	
	double x,y;
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
	
	
	return 0;
}