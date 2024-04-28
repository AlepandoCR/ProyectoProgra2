#include "perecedero.h"

perecedero::perecedero()
{
	codigo = "";
	nombreComercial = "";
	descripcion = "";
	categoria = "";
	precioCosto = 0.0;
	existencias = 0;
	limite = 0;
	nacional = true;
	peso = 0.0;
	ptrFecha = NULL;
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

string perecedero::getCodigo() const
{
	return codigo;
}

string perecedero::getNombre() const
{
	return nombreComercial;
}

string perecedero::getDesc() const
{
	return descripcion;
}

string perecedero::getCategoria() const
{
	return categoria;
}

double perecedero::getPrecioCosto() const
{
	return precioCosto;
}

int perecedero::getExistencias() const
{
	return existencias;
}

int perecedero::getLimite() const
{
	return limite;
}

bool perecedero::getNacional() const
{
	return nacional;
}

double perecedero::getPeso() const
{
	return peso;
}

string perecedero::toString() const
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