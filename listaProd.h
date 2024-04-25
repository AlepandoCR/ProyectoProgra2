#ifndef LISTAPROD_H
#define LISTAPROD_H
#include "producto.h"

class listaProd {
private:
    vector<producto*> elementos;
public:
    ~listaProd();

    void agregarElemento(producto*);

    void imprimirLista() const;

    producto* getElemento(int) const;

    void eliminarElemento();
    producto* getProdPorCod(string codigo);
};

#endif