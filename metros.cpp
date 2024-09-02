#include <iostream>
using namespace std;
// Convertir cm a metros
int main(){
	int cm;
	double mts;
	cout << "Ingrese centimetros: ";
	cin >> cm;
	mts =  (double)cm / 100;
	cout << "Metros: " << mts << endl;
	
	return 0;
}
