#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "fecha.h"
#include "categoria.h"
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
	fecha* fechaIngreso;
public:
	fecha* crearFecha();
	void crearProd();
	string getCodigo();
	string getNombre();
	string getDesc();
	string getCategoria();
	double getPrecioCosto();
	int getExistencias();
	int getLimite();
	virtual string toString() const;
	void setCodigo(string);
	void setNombre(string);
	void setDescripcion(string);
	void setCategoria(string);
	void setExistencias(int);
	void setPrecioCosto(double);
	void setLimite(int);
	fecha* getFechaIngreso();
};

#endif // !PRODUCTO_H