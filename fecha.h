#ifndef FECHA_H
#define FECHA_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	fecha();
	fecha(int d, int m, int a);
	fecha(fecha& fechaCopia);
	virtual ~fecha();
	string toString();
	int getDia();
	int getMes();
	int getAnio();
	void setDia(int d);
	void setMes(int m);
	void setAnio(int a);
};

#endif 