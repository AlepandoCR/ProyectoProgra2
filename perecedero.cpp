#include "perecedero.h"

perecedero::perecedero()
{
}

perecedero::perecedero(string cod, string nC, string desc, string cat, double pC, int exist, int lim, bool nac, double _peso, fecha* feIngreso)
{
	codigo = cod;
	nombreComercial = nC;
	descripcion = desc;
	categoria = cat;
	precioCosto = pC;
	existencias = exist;
	limite = lim;
	nacional = nac;
	peso = _peso;
	ptrFecha = new fecha(*feIngreso);
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

string perecedero::toString()
{
	return string();
}

void perecedero::setCodigo(string cod)
{
	codigo = cod;
}

void perecedero::setNombre(string nC)
{
	nombreComercial = nC;
}

void perecedero::setDescripcion(string desc)
{
	descripcion = desc;
}

void perecedero::setCategoria(string cat)
{
	categoria = cat;
}

void perecedero::setExistencias(int exis)
{
	existencias = exis;
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

void perecedero::setPeso(double pes)
{
	peso = pes;
}
