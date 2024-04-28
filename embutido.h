#ifndef EMBUTIDO_H
#define EMBUTIDO_H

#include "carne.h"
#include "empaque.h"

class embutido : public carne, public empaque {
public:
    embutido();
    embutido(string, string, string, string, string, string, string, string, double, int, int, bool, bool, double, fecha*);
    void crearEmbutido();
    string toString() const override;
private:
    string marca;
};

#endif
