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
	string getCodigo() const override;
	string getNombre() const override;
	string getDesc() const override;
	string getCategoria() const override;
	int getExistencias() const override;
	int getLimite() const override;
	double getPrecioCosto() const override;
	bool getEnvasado() const;
	fecha* getFechaIngreso() const;

	//Set's
	void setCodigo(string) override;
	void setNombre(string) override;
	void setDescripcion(string) override;
	void setCategoria(string) override;
	void setExistencias(int) override;
	void setLimite(int) override;
	void setPrecioCosto(double) override;
	void setEnvasado(bool) override;

	string toString() const override;
};
#endif
