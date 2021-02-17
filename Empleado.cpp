#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	//atributos
	private: int codigo_empleado;
	string puesto;
	float sueldo;
	//constructor
	public:
	Empleado(){
	}
	Empleado(string nom, string ape,string dir, int tel,int cod,string p,float s):Persona(nom,ape,dir,tel){
	codigo_empleado=cod;
	puesto=p;
	sueldo=s;
	}
	//METODOS
	//set (modificar)
	void setCodigo (int cod){	codigo_empleado=cod;}
	void setPuesto (string p) { puesto=p;}
	void setSueldo (float s) { sueldo=s;}
	void setNombres (string nom){nombres=nom;}
	void setApellidos(string ape){apellidos = ape;}
    void setDireccion(string dir){direccion = dir;}
    void setTelefono(int tel){telefono = tel;}

 //get (mostrar)


 int getCodigo () {return codigo_empleado;}
 string getPuesto (){return puesto;}
 float getSueldo (){return sueldo;}
 string getNombres(){	return nombres;}

 string getApellidos(){	return apellidos;}

 string getDireccion(){	return direccion;}

 int getTelefono(){	return telefono;}

	
	//metodo
	void mostrar (){
		cout<<"__________________________"<<endl;
		cout<<codigo_empleado<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<sueldo<<","<<puesto<<endl;
		
	}
};
