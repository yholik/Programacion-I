#include <iostream>
#include <string>
using namespace std;
//Imprimir datos personales solicitando al usuario: nombres, apellidos, edad, direccion, localidad, provincia, pais, telefono

int main(){
	string nom, ap, dir, loc, prov, pais;
	int edad, telefono;
	
	cout << "Ingrese su nombres: "; 
	getline(cin, nom);
	cout << "Ingrese su apellidos: ";
	getline(cin, ap);
	cout << "Ingrese su direccion: ";
	getline(cin, dir);
	cout << "Ingrese su localidad: ";
	getline(cin, loc);
	cout << "Ingrese su provincia: ";
	getline(cin, prov);
	cout << "Ingrese su pais: ";
	getline(cin, pais);
	cout << "Ingrese su telefono: ";
	cin >> telefono;
	cout << "Ingrese su edad: ";
	cin >> edad;
	/*
	
	cin >> nom;
	
	cin >> ap ;
	
	cin >> edad;
	
	cin >> dir;
	
	cin >> loc;
	
	cin >> prov;
	
	cin >> pais;
	
	cin >> telefono;
	*/
	
	cout << "Usted ingreso la siguiente informacion: " << endl;
	cout << "Nombre: " << nom << endl;
	cout << "Apellido: " << ap << endl; 
	cout << "Edad: " << edad << endl;
	cout << "Direccion: " << dir << endl;
	cout << "Localidad: " << loc << endl;
	cout << "Provincia: " << prov << endl;
	cout << "Pais: " << pais << endl;
	cout << "Telefono: " << telefono << endl;
	
	return 0;
}
