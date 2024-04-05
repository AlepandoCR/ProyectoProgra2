#ifndef PRODPERECEDERO_H
#define PRODPERECEDERO_H
#include "perecedero.h"
#include "producto.h"
class prodPerecedero : public perecedero, public producto
{
public:
    prodPerecedero();
    virtual string getCodigo() override;
    virtual string getNombre() override;
    virtual string getDesc() override;
    virtual string getCategoria() override;
    virtual double getPrecioCosto() override;
    virtual int getExistencias() override;
    virtual int getLimite() override;

    virtual string toString() override;

    virtual void setCodigo(string) override;
    virtual void setNombre(string) override;
    virtual void setDescripcion(string) override;
    virtual void setCategoria(string) override;
    virtual void setExistencias(int) override;
    virtual void setPrecioCosto(double) override;
    virtual void setLimite(int) override;
};
#endif
