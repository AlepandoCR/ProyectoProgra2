#ifndef ABARROTE_H
#define ABARROTE_H
#include "prodPerecedero.h"
class abarrote : public prodPerecedero
{
public:
    abarrote();
    abarrote(string, string, string, string, string, double, int, int, bool, double, fecha*, fecha*);
    ~abarrote();
    string getNombreEmpresa();
    string toString();
    void setNombreEmpresa(string);
    void crearAbarrote();
private:
    string nombreEmpresa;
};

#endif