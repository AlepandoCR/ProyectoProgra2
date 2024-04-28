#include "carne.h"

carne::carne()
{
	especiaAnimal = "N/A";
	parteAnimal = "N/A";
	fechaVencimiento = NULL;
}

carne::carne(string cod, string nC, string desc, string cat, string nE, string parteA, string especie, double pC, int exist, int lim, bool nac, double _peso, fecha* feIngreso, fecha* expira)
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
	fechaIngreso = new fecha(*feIngreso);
	parteAnimal = parteA;
	especiaAnimal = especie;
	fechaVencimiento = expira;
}

carne::~carne()
{
}

void carne::crearCarne()
{
	crearPerecedero();
	cout << "Ingrese la especie del animal: ";
	cin >> especiaAnimal;
	cout << "Ingrese la parte del animal (" << especiaAnimal << ")";
	cin >> parteAnimal;
}


string carne::toString() const
{
	stringstream s;
	s << prodPerecedero::toString();
	s << "Parte del animal: " << parteAnimal << endl;
	s << "Ëspecie del animal: " << especiaAnimal << endl;
	return s.str();
}

