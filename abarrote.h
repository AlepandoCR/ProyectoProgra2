#ifndef ABARROTE_H
#define ABARROTE_H
#include "prodPerecedero.h"
class abarrote : public prodPerecedero
{
public:
    abarrote();
    abarrote(string, string, string, string, string, double, int, int, bool, double, fecha*);
    ~abarrote();

    string getCodigo();
    string getNombre();
    string getDesc();
    string getCategoria();
    string getNombreEmpresa();
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
    void setNombreEmpresa(string);
    void setExistencias(int);
    void setPrecioCosto(double);
    void setLimite(int);
    void setNacional(bool);
    void setPeso(double);
private:
    string codigo;
    string nombreComercial;
    string descripcion;
    double precioCosto;
    string categoria;
    int existencias;
    int limite;
    bool nacional;
    double peso;
    string nombreEmpresa;
};

#endif