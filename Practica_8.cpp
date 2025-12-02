#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	
	//Programa que convierta una cantidad en metros a centímetros y milímetros usando solo multiplicaciones.
	// 1 metro son 100 centimetros y 1000 milimetros
	
	//Programa que calcule el total a pagar por un producto aplicando un descuento fijo del 15% usando solo operaciones matemáticas.
	// 100*0.20= 20%
	
	// Programa que calcule la hipotenusa de un triángulo rectángulo usando la fórmula de Pitágoras 
	//pow(n,2), sqrt(n)
	
	double h,l1,l2;
	cout<<"Ingresa l1: ";
	cin>>l1;
	cout<<"Ingresa l2: ";
	cin>>l2;
	
	h = sqrt(pow(l1,2)+pow(l2,2));
	cout<<h;
	
	return 0;
}