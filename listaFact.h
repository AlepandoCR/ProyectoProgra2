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

    void eliminarElemento();

    void crearFactura(listaClientes&, listaProd&);
};
#endif



