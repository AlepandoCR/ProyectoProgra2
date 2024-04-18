#ifndef CARNE_H
#define CARNE_H

#include "prodPerecedero.h"

class carne : public prodPerecedero {
public:
    carne(prodPerecedero* productoBase) : productoBase(productoBase) {}

   
    virtual string getCategoria() override {
        return "Carne";
    }

    virtual double getPrecioCosto() override {
        return productoBase->getPrecioCosto();
    }

    virtual string toString() override {
        return productoBase->toString() + "\nCategoría: Carne";
    }

private:
    prodPerecedero* productoBase;
};

#endif
