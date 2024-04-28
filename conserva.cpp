#include "conserva.h"

conserva::conserva()
{
	envasado = false;
}

conserva::conserva(string cod, string nC, string desc, string cat, double pC, int exist, int lim, bool env, fecha* feIng)
{
	codigo = cod;
	nombreComercial = nC;
	descripcion = desc;
	categoria = cat;
	precioCosto = pC;
	existencias = exist;
	limite = lim;
	envasado = env;
	fechaIngreso = new fecha(*feIng);
}

conserva::conserva(conserva& conse)
{
	codigo = conse.getCodigo();
	nombreComercial = conse.getNombre();
	descripcion = conse.getDesc();
	categoria = conse.getCategoria();
	precioCosto = conse.getPrecioCosto();
	existencias = conse.getExistencias();
	limite = conse.getLimite();
	envasado = conse.getEnvasado();
	fechaIngreso = conse.getFechaIngreso();
}

conserva::~conserva()
{

}
bool conserva::getEnvasado() const
{
	return envasado;
}

void conserva::setEnvasado(bool env)
{
	envasado = env;
}

string conserva::toString() const
{
	stringstream s;
	s << producto::toString();
	s << "Envasado: " << envasado << endl;
	return s.str();
}

void conserva::crearConserva()
{
	envasado = false;
	string eleccion;
	crearProd();
	cout << endl << "El producto es envasado (si/no): ";
	cin >> eleccion;
	envasado = (eleccion == "Si" || eleccion == "si");
}
