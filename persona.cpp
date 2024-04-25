#include "persona.h"

persona::~persona()
{
}

persona::persona()
{
	cedula = "N/A";
	nombre = "N/A";
}

persona::persona(string ced, string nom)
{
	cedula = ced;
	nombre = nom;
	dineroInvertido = 0;
}

string persona::getCedula()
{
	return cedula;
}
string persona::toString()
{
	stringstream s;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	s << "Dinero Invertido: " << dineroInvertido << endl;
	return s.str();
}
void persona::sumarDineroInvertido(double d)
{
	dineroInvertido += d;
}
string persona::getNombre() {
	return nombre;
}
