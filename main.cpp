#include "Cliente.cpp"
#include <iostream>
using namespace std;

main (){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"\n\t\tIngrese Nit:\t\t";
	cin>>nit;
	cout<<"\t\tIngrese Nombres:\t";
	cin>>nombres;
	cout<<"\t\tIngrese Apellidos:\t";
	cin>>apellidos;
	cout<<"\t\tIngrese direccion:\t";
	cin>>direccion;
	cout<<"\t\tIngrese Telefono:\t";
	cin>>telefono;
	
	// instancia de un objeto
	cout<<"\n\tCorrija Nit:\t\t\n\t\t\t\t";
	cin>>nit;
	
	Cliente obj= Cliente (nombres, apellidos, direccion, telefono, nit);
	cout<<"\n\n\t\tDatos del cliente\n"<<"\t\t"<<obj.getNit()<<" "<<obj.getNombres()<<" "<<obj.getApellidos()<<" "<<obj.getDireccion()<<" "<<obj.getTelefono()<<" "<<endl;
	obj.mostrar();


	
	
}