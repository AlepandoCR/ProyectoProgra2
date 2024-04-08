#include "perecedero.h"

#include "perecedero.h"

perecedero::perecedero(string cod, string nC, string desc, string cat, double pC, int exist, int lim, bool nac, double _peso, fecha* feIngreso)
{
	codigo = cod;
	nombreComercial = nC;
	descripcion = desc;
	categoria = cat;
	precioCoste = pC;
	existencia = exist;
	limite = lim;
	nacional = nac;
	peso = _peso
		ptrFecha = new fecha(*feIng);
}

perecedero::~perecedero()
{
}

string perecedero::getCodigo()
{
	return codigo;
}

string perecedero::getNombre()
{
	return nombreComercial;
}

string perecedero::getDesc()
{
	return descripcion;
}

string perecedero::getCategoria()
{
	return categoria;
}

double perecedero::getPrecioCosto()
{
	return precioCosto;
}

int perecedero::getExistencias()
{
	return existencias;
}

int perecedero::getLimite()
{
	return limite;
}

bool perecedero::getNacional()
{
	return nacional;
}

double perecedero::getPeso()
{
	return peso;
}

fecha* perecedero::getFecha()
{
	return ptrFecha;
}

string perecedero::toString()
{
	stringstream s;
	s << "Codigo: " << codigo << endl
		<< "Nombre comercial: " << nombreComercial << endl
		<< "Descripcion: " << descripcion << endl
		<< "Categoria: " << categoria << endl
		<< "Existencias: " << existencias << endl
		<< "Precio costo: " << precioCosto << endl
		<< "Limite: " << limite << endl
		<< "Nacional: " + (nacional ? "Si" : "No") + endl
		<< "Peso: " << peso << endl
		if (ptrFecha != NULL) {
			s << "Fecha del producto: " << ptrFecha->toString() << endl;
		}

	return s.str();
}

void perecedero::setCodigo(string cod)
{
	codigo = cod;
}

void perecedero::setNombre(string nomComercial)
{
	nombreComercial = nomComercial;
}

void perecedero::setDescripcion(string desc)
{
	descripcion = desc;
}

void perecedero::setCategoria(string cat)
{
	categoria = cat;
}

void perecedero::setExistencias(int exist)
{
	existencias = exist;
}

void perecedero::setPrecioCosto(double pC)
{
	precioCosto = pC;
}

void perecedero::setLimite(int lim)
{
	limite = lim;
}

void perecedero::setNacional(bool nac)
{
	nacional = nac;
}

void perecedero::setPeso(double _peso)
{
	peso = _peso;
}