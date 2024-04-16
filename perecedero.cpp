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
