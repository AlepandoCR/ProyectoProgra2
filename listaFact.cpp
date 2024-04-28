#include "listaFact.h"

listaFact::~listaFact()
{
    /*int i = 0;
    while (getElemento(i) != nullptr) {
        delete getElemento(i);
        i++;
    }*/
}
void listaFact::agregarElemento(factura* elemento) {
    elementos.push_back(elemento);
}

void listaFact::imprimirLista() const {
    for (factura* elemento : elementos) {
        cout << elemento->toString() << endl;
    }
}

factura* listaFact::getElemento(int indice) const {
    if (indice >= 0 && indice < elementos.size()) {
        return elementos[indice];
    }
    else {
        return nullptr;
    }
}
factura* listaFact::getFacturaPorNumero(string numero) {
    int i = 0;
    while (getElemento(i) != nullptr) {
        if (numero == getElemento(i)->getNumero()) {
            return getElemento(i);
        }
        i++;
    }
}

void listaFact::eliminarElemento()
{
    string numero;
    cout << "Ingrese el numero de factura: ";
    cin >> numero;

    auto it = elementos.begin();
    while (it != elementos.end()) {
        cout << "Analizando factura..." << endl;
        if ((*it)->getNumero() == numero) {
            delete* it;
            it = elementos.erase(it);
        }
        else {
            ++it;
        }
    }
    cout << "Elemento eliminado correctamente." << endl;
}
void listaFact::eliminarElementoPorIgual(factura* fact)
{
    auto it = elementos.begin();
    while (it != elementos.end()) {
        if (*it == fact) {
            delete* it;
            it = elementos.erase(it);
        }
        else {
            ++it;
        }
    }
}
void listaFact::crearFactura(listaClientes& listaClient, listaProd& listaProductos)
{
    string numeroFac, ced, desicion;
    cout << "Ingrese el numero de factura: ";
    cin >> numeroFac;
    cout << "Ingrese la cedula del cliente: "; 
    cin >> ced;
    factura* fact = new factura(numeroFac,ced,listaClient);
    cout << "Desea agregar productos a la factura en este momento? (si/no)";
    cin >> desicion;
    if (desicion == "Si" || desicion == "si") {
        cout << "Imprimiendo lista de productos: " << endl;
        listaProductos.imprimirLista();
        string codigoProducto;
        bool continuar = false;
        while (!continuar) {
            cout << "Ingrese el codigo del articulo que desea agregar: "; 
            cin >> codigoProducto;
            if (listaProductos.getProdPorCod(codigoProducto)->getExistencias() > 0 || listaProductos.getProdPorCod(codigoProducto) == nullptr) {
                fact->comprarProducto(listaProductos.getProdPorCod(codigoProducto), listaClient);
                listaProductos.getProdPorCod(codigoProducto)->setExistencias(listaProductos.getProdPorCod(codigoProducto)->getExistencias() - 1);
            }
            else {
                cout << "El producto esta fuera de stock o no existe" << endl;
            }
            cout << "Desea agregar otro producto? (s/n)";
            char continuarCh;
            cin >> continuarCh;
            continuar = (continuarCh == 'n' || continuarCh == 'N');
        }
    }
    agregarElemento(fact);
}
