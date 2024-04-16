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

    virtual string getCodigo();
    virtual string getNombre();
    virtual string getDesc();
    virtual string getCategoria();
    virtual double getPrecioCosto();
    virtual int getExistencias();
    virtual int getLimite();
    virtual bool getNacional();
    virtual double getPeso();

    virtual string toString();

    virtual void setCodigo(string);
    virtual void setNombre(string);
    virtual void setDescripcion(string);
    virtual void setCategoria(string);
    virtual void setExistencias(int);
    virtual void setPrecioCosto(double);
    virtual void setLimite(int);
    virtual void setNacional(bool);
    virtual void setPeso(double);
};

#endif