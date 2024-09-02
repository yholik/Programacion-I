//Calcular el área y el perímetro de un triángulo equilátero
#include <iostream>
using namespace std;

int main(){
	double h, lado, area, per;
	const double r3 = 1.732;
	cout << "Ingrese el lado del triangulo equilatero: " << endl;
	cin >> lado;
	h = (lado * r3) / 2; //Averiguamos la altura con lado
	area = (lado * h) / 2;
	per = lado + lado + lado;
	cout << "Area: " << area << " Perimetro: " << per << endl;
	
	return 0;
}
