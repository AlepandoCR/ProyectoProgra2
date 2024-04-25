#include "interfaz.h"
void interfaz::menuFacturas(listaFact& listaFacturas, listaClientes& listaClientes) {
    int menu = 0;
    while (menu != 3) {
        cout << "1-Eliminar Factura" << endl << "2-Actualizar factura" << endl << "3-Volver" << endl;
        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            listaFacturas.eliminarElemento();
            break;
        case 2:
            break;
        default:
            menu = 3;
            break;
        }
    }
}
fecha* crearFecha() {
    int d, m, a;
    cout << endl << "Ingrese el dia: ";
    cin >> d;
    cout << endl << "Ingrese el mes: ";
    cin >> m;
    cout << endl << "Ingrese el anio: ";
    cin >> a;
    fecha* fec = new fecha(d, m, a);
    return fec;

}
void agregarProducto(listaProd &listaProductos) {
    fecha* fech = new fecha;
    fech = crearFecha();
    double precio;
    int exis, lim;
    string nombre, codigo, categoria, desc, eleccion;
    bool envas = false;
    cout << endl << "Ingrese el nombre del producto: ";
    cin >> nombre;
    cout << endl << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl << "Ingrese la descripcion del producto: ";
    cin >> desc;
    cout << endl << "Ingrese la categoria del producto: ";
    cin >> categoria;
    cout << endl << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << endl << "Ingrese las existencias del producto: ";
    cin >> exis;
    cout << endl << "Ingrese el limite del producto: ";
    cin >> lim;
    cout << endl << "El producto es envasado (si/no): ";
    cin >> eleccion;
    /*if (eleccion == "Si" || "si") {
        envas = true;
    }*/
    envas = (eleccion == "Si" || eleccion == "si");
    conserva* product = new conserva(codigo, nombre, desc, categoria, precio, exis, lim, envas, fech);
    listaProductos.agregarElemento(product);

    
    
}
void interfaz::menuProductos(listaProd &listaProductos) {
    int menu = 0;
    while (menu != 4) {
        cout << "1-Ingreso producto" << endl << "2-Eliminar producto" << endl << "3-Modificar producto" << endl << "4-Volver" << endl;
        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            agregarProducto(listaProductos);
            break;
        case 2:
            listaProductos.eliminarElemento();
            break;
        case 3:
            break;
        default:
            menu = 4;
            break;
        }
    }
}
void interfaz::menuManten(listaProd& listaProductos, listaClientes& listaClientela, listaFact& listaFacturas) {
    int menu = 0;
    while (menu != 3) {
        cout << "1-Facturas" << endl << "2-Productos" << endl << "3-Volver" << endl;
        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            menuFacturas(listaFacturas, listaClientela);
            break;
        case 2:
            menuProductos(listaProductos);
            break;
        default:
            menu = 3;
            break;
        }
    }
}
void interfaz::menuVentas(listaFact& listaFacturas, listaClientes& listaClientela, listaProd& listaProductos) {
    int menu = 0;
    while (menu != 2) {
        cout << "1-Crear factura nueva" << endl << "2-Volver" << endl;
        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl; 
        }
        switch (menu)
        {
        case 1:
            listaFacturas.crearFactura(listaClientela, listaProductos);
            break;
        default:
            menu = 2;
            break;
        }
    }
}
void interfaz::menuReportes(listaProd& lista) {
    int menu = 0;
    while (menu != 6) {
        cout << "1-Reportar todos los productos del minisuper" << endl << "2-Reportar todos los productos de una categoria" << endl << "3-Reportar los productos que estan por debajo del minimo de su existencia" << endl << "4-Reportar facturas de un cliente especifico por cedula" << endl << "5-Reportar la cedula de los mejores 5 clientes del minisuper" << endl << "6-Volver" << endl;
        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            lista.imprimirLista();
            break;
        case 2:
            productosPorCategoria(lista);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            menu = 6;
            break;
        }
    }
}
void interfaz::productosPorCategoria(listaProd& lista) {
    string categoria;
    cout << "Ingrese el nombre de la categoria: ";
    cin >> categoria;
    int i = 0;
    while (lista.getElemento(i) != nullptr) {
        if (lista.getElemento(i)->getCategoria() == categoria) {
            cout << lista.getElemento(i)->toString();
        }
        i++;
    }
}
void interfaz::menuPrinci(listaProd &listaProductos, listaClientes &listaClientela, listaFact& listaFacturas) {
    int menu = 0;
    while (menu != 4) {
        cout << "1-Manten" << endl << "2-Ventas" << endl << "3-Report" << endl << "4-Salir" << endl;
        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            menuManten(listaProductos, listaClientela, listaFacturas);
            break;
        case 2:
            menuVentas(listaFacturas, listaClientela, listaProductos);
            break;
        case 3:
            menuReportes(listaProductos);
            break;
        default:
            menu = 4;
            break;
        }
    }
}

void interfaz::topClientes()
{
}
