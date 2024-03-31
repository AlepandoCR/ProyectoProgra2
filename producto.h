#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "fecha.h"
class producto : public fecha
{
protected:
	string codigo;
	string nombreComercial;
	string descripcion;
	double precioCosto;
	string categoria;
	int existencias;
	int limite;
public:
	producto();
	producto(string, string, string, string, double, int, int);
	string getCodigo();
	string getNombre();
	string getDesc();
	string getCategoria();
	double getPrecioCosto();
	int getExistencias();
	int getLimite();
	string toString();
	void setExistencias(int);
	void setPrecioCosto(double);
	void setLimite(int);
};

#endif // !PRODUCTO_H