#ifndef PRODPERECEDERO_H
#define PRODPERECEDERO_H
#include "perecedero.h"
#include "producto.h"
class prodPerecedero : protected perecedero, public producto
{
public:
    bool getNacional();
    double getPeso();
    string toString() const override;
    void setNacional(bool);
    void setPeso(double);
    void crearPerecedero();
protected:
    bool nacional;
    double peso;
};
#endif
