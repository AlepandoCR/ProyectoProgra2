#include "fecha.h"

fecha::fecha()
{
	dia = 0;
	mes = 0;
	anio = 0;
}

fecha::fecha(int d, int m, int a)
{
	dia = d;
	mes = m;
	anio = a;
}

fecha::fecha(fecha& fechaCopia)
{
	dia = fechaCopia.getDia();
	mes = fechaCopia.getMes();  
	anio = fechaCopia.getAnio(); 
}

fecha::~fecha()
{
}

string fecha::fechaToString()
{
	std::stringstream s; 
	s << "**Fecha del producto**" << endl;
	s << dia << "/" << mes << "/" << anio << endl;
	return s.str();
}

int fecha::getDia()
{
	return dia;
}

int fecha::getMes()
{
	return mes;
}

int fecha::getAnio()
{
	return anio;
}

void fecha::setDia(int d)
{
	dia = d;
}

void fecha::setMes(int m)
{
	mes = m;
}

void fecha::setAnio(int a)
{
	anio = a;
}
