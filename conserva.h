#ifndef CONSERVA_H
#define CONSERVA_H
#include "producto.h"
class conserva : public producto
{
private:
	string codigo;
	string nombreComercial;
	string descripcion;
	string categoria;
	double precioCoste;
	int existencia;
	int limite;
	bool envasado;
	fecha* fechaIngreso;
public:
	conserva(string, string, string, string, double, int, int, bool, fecha*);
	conserva(conserva&);
	virtual ~conserva();


	//Get's
	string getCodigo();
	string getNombre();
	string getDesc();
	string getCategoria();
	int getExistencias();
	int getLimite();
	double getPrecioCosto();
	bool getEnvasado();
	fecha* getFechaIngreso();

	//Set's
	void setCodigo(string);
	void setNombre(string);
	void setDescripcion(string);
	void setCategoria(string);
	void setExistencias(int);
	void setLimite(int);
	void setPrecioCosto(double);
	void setEnvasado(bool);

	string toString();
};
#endif
