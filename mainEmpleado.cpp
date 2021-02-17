#include "Empleado.cpp"
#include <iostream>
using namespace std;
main (){
	string puesto,nombres,apellidos,direccion;
	int telefono,codigo;
	float sueldo;
	cout<<"Ingrese codigo: ";
	cin>>codigo;
	cout<<"ingrese Nombres: ";
	cin>>nombres;
	cout<<"ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"ingrese direccion: ";
	cin>>direccion;
	cout<<"ingrese telefono: ";
	cin>>telefono;
	cout<<"ingrese sueldo: ";
	cin>>sueldo;
	cout<<"ingrese puesto: ";
	cin>>puesto;
	
	//instanciar un objeto
	Empleado obj= Empleado(nombres,apellidos,direccion,telefono,codigo,puesto,sueldo);
 obj.mostrar();
}
