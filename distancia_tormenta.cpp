#include <iostream>
using namespace std;
// Calcular la distancia en metros a la que se encuentra una tormenta
// Cronometrando segundos transcurridos entre el relampago y el trueno
// Se toma como constante velocidad del sonido en 343 mts/s

int main(){
	double tiempo, metros;
	const double vel = 343;
	cout << "Ingrese los segundos transcurridos: " << endl;
	cin >> tiempo;
	metros = vel * tiempo;
	cout << "La tormenta esta a " << metros << " de distancia." << endl;
	
	return 0;
	
}
