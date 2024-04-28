#ifndef LISTAFACT_H
#define LISTAFACT_H
#include "factura.h"
class listaFact
{
private:
	vector<factura*> elementos;
public:
    ~listaFact();

    void agregarElemento(factura*);

    void imprimirLista() const;

    factura* getElemento(int) const;

    factura* getFacturaPorNumero(string numero);

    void eliminarElemento();

    void eliminarElementoPorIgual(factura*);

    void crearFactura(listaClientes&, listaProd&);
};
#endif



