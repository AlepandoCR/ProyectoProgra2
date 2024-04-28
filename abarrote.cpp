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
	fechaIngreso = NULL;
	fechaVencimiento = NULL;
}

abarrote::abarrote(string cod, string nC, string desc, string cat, string nE, double pC, int exist, int lim, bool nac, double _peso, fecha* feIngreso, fecha* vence)
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
	fechaIngreso = new fecha(*feIngreso);
	fechaVencimiento = vence;
}

abarrote::~abarrote()
{
}

string abarrote::getNombreEmpresa()
{
	return nombreEmpresa;
}

string abarrote::toString()
{
	stringstream s;
	s << producto::toString();
	s << "Nombre De La Empresa: " << nombreEmpresa << endl;
	s << "Nacional: " << nacional << endl;
	s << "Peso: " << peso << " kg" << endl;
	return s.str();
}

void abarrote::setNombreEmpresa(string nombre)
{
	nombreEmpresa = nombre;
}


void abarrote::crearAbarrote()
{
	crearPerecedero();
	cout << "Ingrese el nombre de la empresa: " << endl;
	cin >> nombreEmpresa;
}

