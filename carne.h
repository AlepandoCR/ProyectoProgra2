#ifndef CARNE_H
#define CARNE_H

#include "prodPerecedero.h"

class carne : public prodPerecedero {
public:
    carne();
    carne(string, string, string, string, string, string, string, double, int, int, bool, double, fecha*, fecha*);
    ~carne();
    void crearCarne();
    string toString() const override;
protected:
    string parteAnimal;
    string especiaAnimal;
};

#endif
