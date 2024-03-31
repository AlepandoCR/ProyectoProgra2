#include "producto.h"

producto::producto()
{
	codigo = "N/A";
	nombreComercial = "N/A";
	descripcion = "N/A";
	categoria = "N/A";
	precioCosto = 0.0;
	existencias = 0;
	limite = 0;
}

producto::producto(string cod, string nombre, string desc, string categoria, double precioCosto, int existencias, int limite)
{
	this->codigo = cod;
	this->nombreComercial = nombre;
	this->descripcion = desc;
	this->categoria = categoria;
	this->precioCosto = precioCosto;
	this->existencias = existencias;
	this->limite = limite;
}

string producto::getCodigo()
{
	return codigo;
}

string producto::getNombre()
{
	return nombreComercial;
}

string producto::getDesc()
{
	return descripcion;
}

string producto::getCategoria()
{
	return categoria;
}

double producto::getPrecioCosto()
{
	return precioCosto;
}

int producto::getExistencias()
{
	return existencias;
}

int producto::getLimite()
{
	return limite;
}

string producto::toString()
{
	stringstream s;
	s << "Informacion del producto:" << endl;
	s << "Codigo: " << codigo << endl;
	s << "Nombre: " << nombreComercial << endl;
	s << "Descripcion: " << descripcion << endl;
	s << "Categoria: " << categoria << endl;
	s << "Precio-Costo: " << precioCosto << endl;
	s << "Existencias: " << existencias << endl;
	s << "Limite: " << limite << endl;
	return s.str();
}

void producto::setExistencias(int existencias)
{
	this->existencias = existencias;
}

void producto::setPrecioCosto(double precioCosto)
{
	this->precioCosto = precioCosto;
}

void producto::setLimite(int limite)
{
	this->limite = limite;
}
