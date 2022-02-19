#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	//atributos
	private : string nit;
	private : double cui;
	//constructor
	public : 
	Propietario (){
	}
	Propietario(string nom,string ape,string dir,string fech, int tel, string n,double c) : Persona(nom,ape,dir,fech,tel){
		nit = n;
		cui = c;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
	void setCui(double c){cui = c;}
	//get(modificar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	double getCui(){return cui;}
	
	//metodos
	void mostrar(){
		cout<<"____________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<cui<<","<<","<<fecha_nacimiento<<telefono<<endl;
	}	
};