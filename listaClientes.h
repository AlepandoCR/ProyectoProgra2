#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H
#include "persona.h"

class listaClientes {
private:
    vector<persona*> elementos;
public:
    ~listaClientes();

    void agregarElemento(persona*);

    void imprimirLista() const;

    persona* getElemento(int) const;

    persona* getPersonaPorCed(string);

    void eliminarElemento();

    void CrearCliente();
};

#endif