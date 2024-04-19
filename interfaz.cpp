#include "interfaz.h"
void interfaz::menuFacturas() {
    int menu = 0;
    while (menu != 3) {
        cout << "1-Eliminar Factura" << endl << "2-Actualizar factura" << endl << "3-Volver" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            break;
        case 2:
            break;
        default:
            menu = 3;
            break;
        }
    }
}
void interfaz::menuProductos() {
    int menu = 0;
    while (menu != 4) {
        cout << "1-Ingreso producto" << endl << "2-Eliminar producto" << endl << "3-Modificar producto" << endl << "4-Volver" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            menu = 4;
            break;
        }
    }
}
void interfaz::menuManten() {
    int menu = 0;
    while (menu != 3) {
        cout << "1-Facturas" << endl << "2-Productos" << endl << "3-Volver" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            menuFacturas();
            break;
        case 2:
            menuProductos();
            break;
        default:
            menu = 3;
            break;
        }
    }
}
void interfaz::menuVentas() {
    int menu = 0;
    while (menu != 2) {
        cout << "1-Crear factura nueva" << endl << "2-Volver" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            break;
        default:
            menu = 2;
            break;
        }
    }
}
void interfaz::menuReportes() {
    int menu = 0;
    while (menu != 6) {
        cout << "1-Reportar todos los productos del minisuper" << endl << "2-Reportar todos los productos de una categoria" << endl << "2-Reportar los productos que estan por debajo del minimo de su existencia" << endl << "2-Reportar facturas de un cliente especifico por cedula" << endl << "2-Reportar la cedula de los mejores 5 clientes del minisuper" << endl << "6-Volver" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            break;
        case 2:
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
void interfaz::menuPrinci() {
    int menu = 0;
    while (menu != 4) {
        cout << "1-Manten" << endl << "2-Ventas" << endl << "3-Report" << endl << "4-Salir" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            menuManten();
            break;
        case 2:
            menuVentas();
            break;
        case 3:
            menuReportes();
            break;
        default:
            menu = 4;
            break;
        }
    }
}