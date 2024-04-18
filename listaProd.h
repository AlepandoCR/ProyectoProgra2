#ifndef LISTAPROD_H
#define LISTAPROD_H
#include "producto.h"
class nodoProd {
public:
    producto* data;
    nodoProd* siguiente;
    nodoProd(producto* data) : data(data), siguiente(nullptr) {}
    ~nodoProd() { data = NULL; }
};

class listaProd {
private:
    nodoProd* inicio;
public:
    listaProd() : inicio(nullptr) {}
    ~listaProd();
    void agregarProducto(producto* producto);
    void imprimirLista() const;
};
#endif