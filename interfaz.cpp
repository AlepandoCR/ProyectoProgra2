#include "interfaz.h"
void interfaz::menuFacturas(listaFact& listaFacturas, listaClientes& listaClientes, listaProd& listaProductos) {
    int menu = 0;
    string numero;
    factura* aux;
    while (menu != 3) {

        cout << "*-----------------------*" << endl
            << "|<1>Eliminar Factura    |" << endl
            << "|<2>Actualizar Factura  |" << endl
            << "|<3>Volver              |" << endl
            << "*-----------------------*" << endl;

        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            listaFacturas.imprimirLista(); cout << endl;
            listaFacturas.eliminarElemento();
            break;
        case 2:
            listaFacturas.imprimirLista(); cout << endl;
            cout << "Digite el numero de factura: "; cin >> numero;
            aux = listaFacturas.getFacturaPorNumero(numero);
            listaFacturas.crearFactura(listaClientes, listaProductos);
            listaFacturas.eliminarElementoPorIgual(aux);
            break;
        default:
            menu = 3;
            break;
        }
    }
}
void agregarProducto(listaProd& listaProductos) {
    int menu = 0;
    while (menu != 5) {

        cout << "*-----------------------*" << endl
            << "|<1>Conserva            |" << endl
            << "|<2>Abarrote            |" << endl
            << "|<3>Carne               |" << endl
            << "|<4>Embutido            |" << endl
            << "|<5>Salir               |" << endl
            << "*-----------------------*" << endl;

        cin >> menu;
        if (menu == 1) {
            conserva* product = new conserva();
            product->crearConserva();
            listaProductos.agregarElemento(product);
            break;
        }
        else if (menu == 2) {
            abarrote* product = new abarrote();
            product->crearAbarrote();
            listaProductos.agregarElemento(product);
            break;
        }
        else if (menu == 3) {
            carne* product = new carne();
            product->crearCarne();
            listaProductos.agregarElemento(product);
            break;
        }
        else if (menu == 2) {
            embutido* product = new embutido();
            product->crearEmbutido();
            listaProductos.agregarElemento(product);
            break;
        }
        else {
            break;
        }
    }




}
void interfaz::menuProductos(listaProd& listaProductos) {
    int menu = 0;
    string codigo;
    producto* aux = NULL;
    while (menu != 4) {

        cout << "*---------------------------*" << endl
            << "|<1>Ingreso del producto    |" << endl
            << "|<2>Eliminar producto       |" << endl
            << "|<3>Modificar el producto   |" << endl
            << "|<4>Volver al menu anterior |" << endl
            << "*---------------------------*" << endl;

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

        cout << "*---------------------------*" << endl
            << "|<1>Facturas                |" << endl
            << "|<2>Productos               |" << endl
            << "|<3>Volver al menu anterior |" << endl
            << "*---------------------------*" << endl;

        if (!(cin >> menu)) {
            menu = -1;
            cout << "Error en la digitacion" << endl;
        }
        switch (menu)
        {
        case 1:
            menuFacturas(listaFacturas, listaClientela, listaProductos);
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

        cout << "*---------------------------*" << endl
            << "|<1>Crear factura nueva     |" << endl
            << "|<2>Volver al menu anterior |" << endl
            << "*---------------------------*" << endl;

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
void facturasPorCed(listaFact lista, listaClientes listaClien) {
    int i = 0;
    string ced;
    cout << "Lista de clientes: " << endl;
    listaClien.imprimirLista();
    cout << "Ingrese la cedula que desea buscar: ";
    cin >> ced;
    while (lista.getElemento(i) != nullptr) {
        if (lista.getElemento(i)->getCliente()->getCedula() == ced) {
            cout << lista.getElemento(i)->toString() << endl;
        }
        i++;
    }
}
void mejoresCinco(listaClientes lista) {
    persona* mejores[5] = { nullptr };
    int total = 0;
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
        total++;
        i++;
    }
    for (int i = 0; i < total && mejores[i]; ++i) {
        if (mejores[i] != NULL) { cout << "Nombre: " << mejores[i]->getNombre() << ", Dinero invertido: " << mejores[i]->getDineroInvertido() << ", Cedula: " << mejores[i]->getCedula() << endl; }
    }
}
void interfaz::menuReportes(listaProd lista, listaFact listaFacturas, listaClientes listaCli) {
    int menu = 0;
    while (menu != 6) {

        cout << "*-------------------------------------------------------------------------------*" << endl
            << "|<1>Reporte de todos los productos del minisuper                                |" << endl
            << "|<2>Reporte de todos los productos de una categoria                             |" << endl
            << "|<3>Reporte de los productos que estan por debajo del minimo de su existencia   |" << endl
            << "|<4>Reporte de las facturas de un cliente especifico por cedula                 |" << endl
            << "|<5>Reporte de la cedula de los mejores 5 clientes del minisuper                |" << endl
            << "|<2>Volver al menu anterior                                                     |" << endl
            << "*-------------------------------------------------------------------------------*" << endl;

        if (!(cin >> menu)) {
            cin.clear(); // Limpiar el estado de error
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            menu = 6;
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
            facturasPorCed(listaFacturas, listaCli);
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
void interfaz::menuPrinci(listaProd& listaProductos, listaClientes& listaClientela, listaFact& listaFacturas) {
    int menu = 0;
    while (menu != 4) {

        cout << "*---------------------------*" << endl
            << "|<1>Mantenimiento           |" << endl
            << "|<2>Ventas                  |" << endl
            << "|<3>Reportes                |" << endl
            << "|<4>Volver al menu anterior |" << endl
            << "*---------------------------*" << endl;

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