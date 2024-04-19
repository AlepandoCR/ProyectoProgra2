#include <cstdlib>
#include <iostream>
#include "interfaz.h"

int main()
{
    interfaz menu;
    menu.menuPrinci();
    conserva* producto1 = new conserva("001", "Producto 1", "Descripción del producto 1", "Categoria1", 10.50, 100, 200, true, new fecha());
    conserva* producto2 = new conserva("002", "Producto 2", "Descripción del producto 2", "Categoria2", 15.75, 150, 300, false, new fecha());
    conserva* producto3 = new conserva("003", "Producto 3", "Descripción del producto 3", "Categoria3", 20.25, 200, 400, true, new fecha());

   
    listaProd lista;


    lista.agregarProducto(producto1);
    lista.agregarProducto(producto2);
    lista.agregarProducto(producto3);

    lista.imprimirLista();

    cout << "nice";
    return 0;
}
