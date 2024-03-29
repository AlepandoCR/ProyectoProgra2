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
};

#endif // !PRODUCTO_H