#include<iostream>
using namespace std;
int main()
{
	
	//Contar cuántos números son mayores que 0 
	//Pide al usuario 5 números y usa un for para contar cuántos son positivos.
	
	int n,contador = 0;
	
	for(int i = 0; i < 5; i++)
	{
		cout<<"Ingresa un numero: ";
		cin>>n;
		
		if(n > 0)
		{
			contador++;
		}
	}
	
	cout<<"Hay "<<contador<< " numeros positivos";
	
	
	
	return 0;
}



