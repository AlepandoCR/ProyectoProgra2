#include "conserva.h"

conserva::conserva(string cod, string nC, string desc, string cat, double pC, int exist, int lim, bool env, fecha* feIng)
{
	codigo = cod;
	nombreComercial = nC;
	descripcion = desc;
	categoria = cat;
	precioCoste = pC;
	existencia = exist;
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
	precioCoste = conse.getPrecioCosto();
	existencia = conse.getExistencias();
	limite = conse.getLimite();
	envasado = conse.getEnvasado();
	fechaIngreso = conse.getFechaIngreso();
}

conserva::~conserva()
{
}

string conserva::getCodigo()
{
	return codigo;
}

string conserva::getNombre()
{
	return nombreComercial;
}

string conserva::getDesc()
{
	return descripcion;
}

string conserva::getCategoria()
{
	return categoria;
}

int conserva::getExistencias()
{
	return existencia;
}

int conserva::getLimite()
{
	return limite;
}

double conserva::getPrecioCosto()
{
	return precioCoste;
}

bool conserva::getEnvasado()
{
	return envasado;
}

fecha* conserva::getFechaIngreso()
{
	return fechaIngreso;
}

void conserva::setCodigo(string cod)
{
	codigo = cod;
}

void conserva::setNombre(string nomComercial)
{
	nombreComercial = nomComercial;
}

void conserva::setDescripcion(string desc)
{
	descripcion = desc;
}

void conserva::setCategoria(string cat)
{
	categoria = cat;
}

void conserva::setExistencias(int exist)
{
	existencia = exist;
}

void conserva::setLimite(int lim)
{
	limite = lim;
}

void conserva::setPrecioCosto(double preCosto)
{
	precioCoste = preCosto;
}

void conserva::setEnvasado(bool env)
{
	envasado = env;
}

string conserva::toString()
{
	return fechaIngreso->fechaToString();
}