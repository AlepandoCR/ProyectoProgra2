#ifndef EMBUTIDO_H
#define EMBUTIDO_H

#include "carne.h"
#include "empaque.h"

class embutido : public carne, public empaque {
public:
    embutido(prodPerecedero* productoBase, bool tripa, string marca)
        : carne(productoBase), empaque(tripa), marca(marca) {}

    string getMarca() const {
        return marca;
    }

private:
    string marca;
};

#endif
