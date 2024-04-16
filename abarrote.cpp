#include "abarrote.h"

abarrote::abarrote()
{
	codigo = "";
	nombreComercial = "";
	descripcion = "";
	categoria = "";
	nombreEmpresa = "";
	precioCosto = 0.0;
	existencias = 0;
	limite = 0;
	nacional = true;
	peso = 0.0;
	ptrFecha = NULL;
}

abarrote::abarrote(string cod, string nC, string desc, string cat, string nE, double pC, int exist, int lim, bool nac, double _peso, fecha* feIngreso)
{
	codigo = cod;
	nombreComercial = nC;
	descripcion = desc;
	categoria = cat;
	nombreEmpresa = nE;
	precioCosto = pC;
	existencias = exist;
	limite = lim;
	nacional = nac;
	peso = _peso;
	ptrFecha = new fecha(*feIngreso);
}

abarrote::~abarrote()
{
}

string abarrote::getCodigo()
{
	return codigo;
}

string abarrote::getNombre()
{
	return nombreComercial;
}

string abarrote::getDesc()
{
	return descripcion;
}

string abarrote::getCategoria()
{
	return categoria;
}

string abarrote::getNombreEmpresa()
{
	return nombreEmpresa;
}

double abarrote::getPrecioCosto()
{
	return precioCosto;
}

int abarrote::getExistencias()
{
	return existencias;
}

int abarrote::getLimite()
{
	return limite;
}

bool abarrote::getNacional()
{
	return nacional;
}

double abarrote::getPeso()
{
	return peso;
}

string abarrote::toString()
{
	return string();
}

void abarrote::setCodigo(string cod)
{
	codigo = cod;
}

void abarrote::setNombre(string nC)
{
	nombreComercial = nC;
}

void abarrote::setDescripcion(string desc)
{
	descripcion = desc;
}

void abarrote::setCategoria(string cat)
{
	categoria = cat;
}

void abarrote::setNombreEmpresa(string nE)
{
	nombreEmpresa = nE;
}

void abarrote::setExistencias(int exis)
{
	existencias = exis;
}

void abarrote::setPrecioCosto(double pC)
{
	precioCosto = pC;
}

void abarrote::setLimite(int lim)
{
	limite = lim;
}

void abarrote::setNacional(bool nac)
{
	nacional = nac;
}

void abarrote::setPeso(double pes)
{
	peso = pes;
}

