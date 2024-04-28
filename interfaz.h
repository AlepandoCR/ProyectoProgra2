#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "clases.h"
#include "listaFact.h"
class interfaz
{
public:
    //Aca quedó todo el menu, es nomas de ver que funciones 
    //llamamos o metodos para devolver facturas nuevas o eliminar otras, lo mismo con productos
   
    void menuFacturas(listaFact&, listaClientes&);

    void menuProductos(listaProd&);

    void menuManten(listaProd&, listaClientes&, listaFact&);

    void menuVentas(listaFact&, listaClientes&, listaProd&);

    void menuReportes(listaProd&, listaFact, listaClientes);

    void productosPorCategoria(listaProd&);

    void menuPrinci(listaProd&, listaClientes&, listaFact&);

    void topClientes();
};
#endif
