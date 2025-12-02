#include<iostream>
using namespace std;

int main()
{

	//Programa que calcule el salario semanal multiplicando horas trabajadas por el pago por hora.
	
	
	int horas;
	float pagohora;
	
	cout<<"Ingresa las horas trabajadas"<<endl;
	cin>>horas;
	
	cout<<"Ingresa el pago por hora"<<endl;
	cin>>pagohora;

	float salario = horas*pagohora;
	cout<<"El salario semanala es de : "<<salario;
	
	// Ingreso 15 dias 2semanas y un dia


	return 0;
}