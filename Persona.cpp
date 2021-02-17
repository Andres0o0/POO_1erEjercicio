#include <iostream>
using namespace std;
class Persona{    //los nombres de los objetos deben ir en singular e iniciar con mayuscula
	//atributos
	//protected,privado,publico
	protected : string nombres, apellidos, direccion;
				int telefono;
	//constructor
	protected:
	Persona(){
	}
	Persona(string nom, string ape,string dir, int tel){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
	}
	//metodos
	void mostrar();
};
