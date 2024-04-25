#include <cstdlib>
#include <iostream>
#include "interfaz.h"
#include "listaFact.h"
int main()
{
    interfaz menu;
    listaProd listaProductos;
    listaClientes listaClientela;
    listaFact listaFacturas;
    conserva* producto1 = new conserva("001", "Producto 1", "Descripcion del producto 1", "Categoria1", 10.50, 100, 200, true, new fecha(1, 1, 24));
    conserva* producto2 = new conserva("002", "Producto 2", "Descripcion del producto 2", "Categoria2", 15.75, 150, 300, false, new fecha(1, 1, 24));
    conserva* producto3 = new conserva("003", "Producto 3", "Descripcion del producto 3", "Categoria3", 20.25, 200, 400, true, new fecha(1, 1 ,24));
    listaProductos.agregarElemento(producto1);
    listaProductos.agregarElemento(producto2);
    listaProductos.agregarElemento(producto3);
    menu.menuPrinci(listaProductos, listaClientela, listaFacturas);
    cout << "_________________________________" << endl;
    listaFacturas.imprimirLista();
    cout << "____________________" << endl;
    listaClientela.imprimirLista();
    return 0;
}
