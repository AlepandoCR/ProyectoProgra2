#ifndef PERECEDERO_H
#define PERECEDERO_H
#include "fecha.h"
#include"prodPerecedero.h"
class perecedero : public prodPerecedero
{
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
    fecha* ptrFecha;
public:

    perecedero(string, string, string, string, double, int, int, bool, double, fecha*);
    ~perecedero();

    string getCodigo() override;
    string getNombre() override;
    string getDesc() override;
    string getCategoria() override;
    double getPrecioCosto() override;
    int getExistencias() override;
    int getLimite() override;
    bool getNacional() override;
    double getPeso() override;
    fecha* getFecha();

    string toString() override;

    void setCodigo(string) override;
    void setNombre(string) override;
    void setDescripcion(string) override;
    void setCategoria(string) override;
    void setExistencias(int) override;
    void setPrecioCosto(double) override;
    void setLimite(int) override;
    void setNacional(bool) override;
    void setPeso(double) override;
};

#endif