#ifndef FACTURA_H
#define FACTURA_H
#include "clases.h"
#include "listaClientes.h"
class factura
{
private:
	string numeroDeFactura;
	listaProd listaDeProductos;
	double monto, total;
	const double IVA = 3.7;
	persona* clienteVinculado;
public:
	~factura();
	factura(string, string, listaClientes&);
	void calcularTotal(listaClientes&);
	void comprarProducto(producto*, listaClientes&);
	factura& operator= (const factura& fac2);
	friend ostream& operator<<(ostream& os, const factura& fac2);
	friend istream& operator>>(istream& is, factura& fac2);
	string toString();
	string getNumero();
	double getMonto();
	double getTotal();
	double getIVA();
	persona* getCliente();
};
#endif