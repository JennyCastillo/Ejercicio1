#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres,apellidos,direccion,fecha_nacimiento;
				int telefono;
	//constructor
	protected :
			Persona(){
			}
			Persona(string nom,string ape,string dir,string fech,int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fech;
				telefono = tel;
			}
	//metodo
	void agregar();
	void mostrar();
};