#ifndef PERECEDERO_H
#define PERECEDERO_H
#include "fecha.h"
class perecedero : public fecha
{
protected:
    string codigo;
    string nombreComercial;
    string descripcion;
    double precioCosto;
    string categoria;
    int existencias;
    int limite;
    bool nacional;
    double peso;
    fecha* ptrFecha;
public:
    perecedero();
    perecedero(string, string, string, string, double, int, int, bool, double, fecha*);
    ~perecedero();
};

#endif