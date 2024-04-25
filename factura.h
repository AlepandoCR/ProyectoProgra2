#ifndef FACTURA_H
#define FACTURA_H
#include "clases.h"
#include "listaClientes.h"
class factura
{
private:
	string numeroDeFactura;
	listaProd listaDeProductos;
	double monto,total;
	const double IVA = 3.7;
	persona* clienteVinculado;
public:
	~factura();
	factura(string, string, listaClientes&);
	void calcularTotal(listaClientes&);
	void comprarProducto(producto*, listaClientes&);
	string toString();
	string getNumero();
};
#endif

