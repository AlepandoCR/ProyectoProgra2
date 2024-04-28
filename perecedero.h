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

    string getCodigo() const;
    string getNombre() const;
    string getDesc() const;
    string getCategoria() const;
    double getPrecioCosto() const;
    int getExistencias() const;
    int getLimite() const;
    bool getNacional() const;
    double getPeso() const;

    string toString() const;

    void setCodigo(string);
    void setNombre(string);
    void setDescripcion(string);
    void setCategoria(string);
    void setExistencias(int);
    void setPrecioCosto(double);
    void setLimite(int);
    void setNacional(bool);
    void setPeso(double);
};