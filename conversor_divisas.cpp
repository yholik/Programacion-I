#include <iostream>
using namespace std;
//Conversor de pesos argentinos a reales, el usuario debe ingresar el valor 
//del cambio y la cantidad a convertir.

int main(){
	float pesos, real, total;
	cout << "Ingrese el valor del real: " << endl;
	cin >> real;
	cout << "Ingrese la cantidad de pesos: " << endl;
	cin >> pesos;
	total = pesos / real;
	cout << "Usted ingreso: " << pesos << " Total Reales = " << total << endl;
	
	return 0;
}
