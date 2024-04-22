#include "persona.h"

persona::persona()
{
	cedula = "N/A";
	nombre = "N/A";
}

persona::persona(string ced, string nom)
{
	cedula = ced;
	nombre = nom;
}

string persona::getCedula()
{
	return cedula;
}
string persona::getNombre() {
	return nombre;
}
