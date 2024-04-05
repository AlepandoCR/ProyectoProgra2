#ifndef CARNE_H
#define CARNE_H
#include "prodPerecedero.h"
class carne : public prodPerecedero
{
public:
    carne(prodPerecedero* productoBase);
    virtual string getCategoria() override;
    virtual double getPrecioCosto() override;
    virtual string toString() override;
private:
    prodPerecedero* productoBase;

};
#endif
