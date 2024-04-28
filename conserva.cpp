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

string conserva::getCodigo() const override
{
	return codigo;
}

string conserva::getNombre() const override
{
	return nombreComercial;
}

string conserva::getDesc() const override
{
	return descripcion;
}

string conserva::getCategoria() const override
{
	return categoria;
}

int conserva::getExistencias() const override
{
	return existencia;
}

int conserva::getLimite() const override
{
	return limite;
}

double conserva::getPrecioCosto() const override
{
	return precioCoste;
}

bool conserva::getEnvasado() const
{
	return envasado;
}

fecha* conserva::getFechaIngreso() const
{
	return fechaIngreso;
}

void conserva::setCodigo(string cod) override
{
	codigo = cod;
}

void conserva::setNombre(string nomComercial) override
{
	nombreComercial = nomComercial;
}

void conserva::setDescripcion(string desc) override
{
	descripcion = desc;
}

void conserva::setCategoria(string cat) override
{
	categoria = cat;
}

void conserva::setExistencias(int exist) override
{
	existencia = exist;
}

void conserva::setLimite(int lim) override
{
	limite = lim;
}

void conserva::setPrecioCosto(double preCosto) override
{
	precioCoste = preCosto;
}

void conserva::setEnvasado(bool env) override
{
	envasado = env;
}

string conserva::toString() const override
{
	stringstream s;
	s << "Codigo: " << codigo << endl;
	s << "Nombre: " << nombreComercial << endl;
	s << "Descripcion: " << descripcion << endl;
	s << "Precio: " << precioCoste << endl;
	s << "Categoria: " << categoria << endl;
	s << "Existencias: " << existencia << endl;
	s << "Limite: " << limite << endl;
	s << "Envasado: " << envasado << endl;
	s << "Fecha de ingreso: " << fechaIngreso->fechaToString();
	return s.str();
}