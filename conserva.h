#ifndef CONSERVA_H
#define CONSERVA_H
#include "producto.h"
class conserva : public producto
{
private:
	bool envasado;
public:
	conserva();
	conserva(string, string, string, string, double, int, int, bool, fecha*);
	conserva(conserva&);
	virtual ~conserva();
	bool getEnvasado() const;
	void setEnvasado(bool);
	string toString() const override;
	void crearConserva();
};
#endif
