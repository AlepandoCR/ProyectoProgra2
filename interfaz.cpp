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
void agregarProducto(listaProd &listaProductos) {
    int menu = 0;
    while (menu != 5) {
        cout << "1-Conserva" << endl << "2-Abarrote" << endl << "3-Carne" << endl << "4-Embutido" << endl << "5-Salir";
        cin >> menu;
        if (menu == 1) {
            conserva* product = new conserva();
            product->crearConserva();
            listaProductos.agregarElemento(product);
        }
        else if (menu == 2) {
            abarrote* product = new abarrote();
            product->crearAbarrote();
            listaProductos.agregarElemento(product);
        }
        else if (menu == 3) {
            carne* product = new carne();
            product->crearCarne();
            listaProductos.agregarElemento(product);
        }
        else if (menu == 2) {
            embutido* product = new embutido();
            product->crearEmbutido();
            listaProductos.agregarElemento(product);
        }
    }
    

    
    
}
void interfaz::menuProductos(listaProd &listaProductos) {
    int menu = 0;
    string codigo;
    producto* aux = NULL;
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
            listaProductos.imprimirLista(); cout << endl;
            listaProductos.eliminarElemento();
            break;
        case 3:
            listaProductos.imprimirLista(); cout << endl;
            cout << "Digite el codigo: "; cin >> codigo;
            aux = listaProductos.getProdPorCod(codigo);
            agregarProducto(listaProductos);
            listaProductos.eliminarElementoPorIgual(aux); 
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
void debajoExist(listaProd lista) {
    int i = 0;
    while (lista.getElemento(i) != NULL) {
        if (lista.getElemento(i)->getExistencias() < lista.getElemento(i)->getLimite()) {
           cout << lista.getElemento(i)->toString() << endl;
        }
        i++;
    }
}
void facturasPorCed(listaFact lista) {
    int i = 0;
    string ced;
    cout << "Ingrese la cedula que desea buscar: ";
    cin >> ced;
    while (lista.getElemento(i) != NULL) {
        if (lista.getElemento(i)->getCliente()->getCedula() == ced) {
            cout << lista.getElemento(i)->toString() << endl;
        }
        i++;
    }
}
void mejoresCinco(listaClientes lista) {
    persona* mejores[5] = { nullptr };
    int i = 0;
    while (persona* cliente = lista.getElemento(i)) {
        for (int j = 0; j < 5; ++j) {
            if (!mejores[j] || cliente->getDineroInvertido() > mejores[j]->getDineroInvertido()) {
                for (int k = 4; k > j; --k) {
                    mejores[k] = mejores[k - 1];
                }
                mejores[j] = cliente;
                break;
            }
        }
        ++i;
    }
    for (int i = 0; i < 5 && mejores[i]; ++i) {
        std::cout << "Nombre: " << mejores[i]->getNombre() << ", Dinero invertido: " << mejores[i]->getDineroInvertido() << std::endl;
    }
    for (int i = 0; i < 5; i++) {
        delete mejores[i];
    }
}
void interfaz::menuReportes(listaProd& lista, listaFact listaFacturas, listaClientes listaCli) {
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
            debajoExist(lista);
            break;
        case 4:
            facturasPorCed(listaFacturas);
            break;
        case 5:
            mejoresCinco(listaCli);
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
            menuReportes(listaProductos, listaFacturas, listaClientela);
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
