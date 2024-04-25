#include "factura.h"

factura::~factura()
{
	listaDeProductos.~listaProd();
}

factura::factura(string numeroFact, string cedula , listaClientes& lista)
{
	if(lista.getPersonaPorCed(cedula) == nullptr) {
		cout << "No se encontro un cliente con esa cedula" << endl << "Anadir nuevo cliente:" << endl;
		lista.CrearCliente();
	}
	clienteVinculado = lista.getPersonaPorCed(cedula);
	monto = 0.0; //Esto no se establece porque se modifica cada vez que se compra/agrega un producto a la factura
	total = 0.0;
	numeroDeFactura = numeroFact;
}

void factura::calcularTotal(listaClientes& lista)
{
	int i = 0;
	while (listaDeProductos.getElemento(i) != nullptr) {
		monto += listaDeProductos.getElemento(i)->getPrecioCosto();
		i++;
	}
	total = monto + ((monto * IVA) / 100);
	lista.getPersonaPorCed(clienteVinculado->getCedula())->sumarDineroInvertido(monto); //Esto es para ir sumando el total invertido por cliente. No se usa total porque el IVA no es ganancia para el negocio 
}

void factura::comprarProducto(producto* prod, listaClientes& lista)
{
	listaDeProductos.agregarElemento(prod);
	calcularTotal(lista);
}

string factura::toString() {
	stringstream s;
	s << "Numero: " << numeroDeFactura << endl;
	s << "Monto: " << monto << endl;
	s << "Total: " << total << endl;
	s << "IVA: " << ((monto * IVA) / 100) << endl;
	s << "Cedula del cliente: " << clienteVinculado->getCedula();
	return s.str();
}

string factura::getNumero() {
	return numeroDeFactura;
}