#include <iostream>
using namespace std;

int main(){
	int ladoA, ladoB, p, a;
	cout << "Ingrese medida A y B del rectangulo para calcular su area y perimetro: " << endl;
	cin >> ladoA >> ladoB;
	p = (ladoA * 2) + (ladoB * 2);
	a = ladoA * ladoB;
	cout << "Area: " << a << " Perimetro: " << p << endl;
	
	return 0;
}
