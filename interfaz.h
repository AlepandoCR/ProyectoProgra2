#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "clases.h"
class interfaz
{
public:
    //Aca quedó todo el menu, es nomas de ver que funciones 
    //llamamos o metodos para devolver facturas nuevas o eliminar otras, lo mismo con productos
   
    void menuFacturas();

    void menuProductos(listaProd&);

    void menuManten(listaProd&);

    void menuVentas();

    void menuReportes();

    void menuPrinci(listaProd&);

};
#endif
