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

    string getCodigo();
    string getNombre();
    string getDesc();
    string getCategoria();
    double getPrecioCosto();
    int getExistencias();
    int getLimite();
    bool getNacional();
    double getPeso();

    string toString();

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

#endif