#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	//atributos
	private: string nit;
	
	// constructor
	public :
	Cliente (){
		}
		
	Cliente(string nom, string ape, string dir, int tel, string n): Persona(nom, ape, dir, tel){
		nit= n;
	}	
	// metodos
	//set (modificar)
	void setNit(string n){ nit= n; }
	void setNombres (string nom){ nombres= nom; }
	void setApellidos (string ape){ apellidos= ape; }
	void setDireccion (string dir){ direccion= dir; }
	void setTelefono (int tel){ telefono= tel; }
	//get (mostrar)
	string getNit(){ return nit;}
	string getNombres(){ return nombres;}
	string getApellidos(){ return apellidos;}
	string getDireccion(){ return direccion;}
	int getTelefono(){ return telefono;}
	//metodos
	void mostrar (){
		cout <<"___________________________________"<<endl;
		cout <<"\n  ***** DATOS DE FACTURACION *****\n"<<endl;
		cout <<"NIT:"<<nit<<" \n"<<"NOMBRE:"<<nombres<<" "<<apellidos<<" \n"<<"DIRECCION:"<<direccion<<" \n"<<"No. TEL:"<<telefono<<endl;
	}
};