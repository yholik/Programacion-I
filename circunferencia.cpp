#include <iostream>
using namespace std;
//	Calcular el area y perimetro de una circunferencia, solicitando al usuario
// el dato del radio y definiendo constante PI=3.141592

int main(){
	float area, per, r;
	const float PI = 3.141592;
	cout << "Ingrese el radio de la circunferencia: " << endl;
	cin >> r ;
	area = PI * (r * r);
	per = 2 * PI * r;
	
	cout << "Area: " << area << " Perimetro: " << per;
	
	return 0;
}
