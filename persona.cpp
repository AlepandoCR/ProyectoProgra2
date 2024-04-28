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

persona& persona::operator=(const persona& per2)
{
	if (this != &per2) {
		this->cedula = per2.cedula;
		this->nombre = per2.nombre;
		this->dineroInvertido = per2.dineroInvertido;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const persona& per2)
{
	os << "Cedula: " << per2.cedula << ", Nombre: " << per2.nombre << ", Dinero invertido: " << per2.dineroInvertido;
	return os;
}

std::istream& operator>>(std::istream& is, persona& per2)
{
	cout << "Ingrese cedula: ";
	is >> per2.cedula;
	cout << "Ingrese nombre: ";
	is >> per2.nombre;
	cout << "Ingrese el monto del dinero invertido: ";
	is >> per2.dineroInvertido;
	return is;
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

double persona::getDineroInvertido()
{
	return dineroInvertido;
}

string persona::getNombre() {
	return nombre;
}
