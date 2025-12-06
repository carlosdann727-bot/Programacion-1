#include<iostream>
using namespace std;

int main()
{

//Forma 1
/*	
	int edad;
	float kilometros, precio_base ,precio_final = 0;
	
	cout<<"Ingrese la distancia recorrida en kilometros: ";
	cin>>kilometros;
	cout<<"Ingrese la edad del pasajero: ";
	cin>>edad;
	
	// Regla principal que hace que si el kilometro es negativo o cero nada de lo demas pase 
	if(kilometros > 0)
	{
		if(edad > = 0)
		{
			// Reglas del kilometraje
		if(kilometros >= 1 && kilometros <= 10)
		{
			precio_base = 15;
		}
		else if(kilometros >=11 && kilometros <= 30)
		{
			precio_base = 25;
		}
		else
		{
			precio_base = 40;
		}
		
		// Reglas de la edad
		if(edad >= 0 && edad<=5)
		{
			cout<<"El viaje es gratis";
		}
		else if(edad >= 6 && edad <=17)
		{
			precio_final = precio_base - (precio_base *  0.50);
		}
		else if(edad >= 18 && edad <=59)
		{
			precio_final = precio_base;
		}
		else 
		{
			precio_final = precio_base - (precio_base *  0.30);
		}
		
		}
		else
		{
			cout<<"No se puede ingresar edad negativa";
		}
		
		
		cout<<"El precio final es: "<<precio_final;
	}
	else
	{
		cout<<"El kilometraje no puede ser negativo";
	}
	*/
	
	
	//Forma 2
/*	int edad;
    float distancia, precioBase, precioFinal;

    cout << "Ingrese la edad del pasajero: ";
    cin >> edad;

    cout << "Ingrese la distancia del viaje en km: ";
    cin >> distancia;

    // Validaciones iniciales
    if (edad < 0) {
        cout << "Edad invalida." << endl;
        return 0;
    }

    if (distancia <= 0) {
        cout << "Distancia invalida." << endl;
        return 0;
    }

    // Determinar precio base segun la distancia
    if (distancia <= 10) {
        precioBase = 15;
    }
    else if (distancia <= 30) {
        precioBase = 25;
    }
    else {
        precioBase = 40;
    }

    // Aplicar descuentos segun la edad
    if (edad <= 5) {
        precioFinal = 0; // Gratis
    }
    else if (edad <= 17) {
        precioFinal = precioBase * 0.50; // 50% de descuento
    }
    else if (edad >= 60) {
        precioFinal = precioBase * 0.70; // 30% de descuento
    }
    else {
        precioFinal = precioBase; // Precio normal
    }

    cout << "----------------------------------" << endl;
    cout << "Precio base: " << precioBase << " lempiras" << endl;
    cout << "Precio final a pagar: " << precioFinal << " lempiras" << endl;
    cout << "----------------------------------" << endl;

	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}