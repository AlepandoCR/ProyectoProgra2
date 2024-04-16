#ifndef PRODPERECEDERO_H
#define PRODPERECEDERO_H
#include "perecedero.h"
#include "producto.h"
class prodPerecedero : protected perecedero, public producto
{
public:
    virtual string getCodigo() = 0;
    virtual string getNombre() = 0;
    virtual string getDesc() = 0;
    virtual string getCategoria() = 0;
    virtual double getPrecioCosto() = 0;
    virtual int getExistencias() = 0;
    virtual int getLimite() = 0;
    virtual bool getNacional() = 0;
    virtual double getPeso() = 0;

    virtual string toString() = 0;

    virtual void setCodigo(string) = 0;
    virtual void setNombre(string) = 0;
    virtual void setDescripcion(string) = 0;
    virtual void setCategoria(string) = 0;
    virtual void setExistencias(int) = 0;
    virtual void setPrecioCosto(double) = 0;
    virtual void setLimite(int) = 0;
    virtual void setNacional(bool) = 0;
    virtual void setPeso(double) = 0;
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
    prodPerecedero();
};
#endif
