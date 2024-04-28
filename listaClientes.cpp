#include "listaClientes.h"


listaClientes::~listaClientes() {
    /*for (persona* elemento : elementos) {
        delete elemento;
    }*/
}

void listaClientes::agregarElemento(persona* elemento) {
    elementos.push_back(elemento);
}

void listaClientes::imprimirLista() const {
    for (persona* elemento : elementos) {
        cout << elemento->toString() << endl;
    }
}

persona* listaClientes::getElemento(int indice) const {
    if (indice >= 0 && indice < elementos.size()) {
        return elementos[indice];
    }
    else {
        return nullptr;
    }
}
persona* listaClientes::getPersonaPorCed(string ced) { //Esto en general es para verificar si hay existe in cliente igual en la lista, pero no estoy seguro si lo usaremos
    int i = 0;
    while (getElemento(i) != nullptr) {
        if (ced == getElemento(i)->getCedula()) {
            return getElemento(i);
        }
        i++;
    }
    return nullptr;
}

void listaClientes::eliminarElemento()
{
    string cedula;
    cout << "Ingrese la cedula: ";
    cin >> cedula;
    int i = 0;
    while (getElemento(i) != nullptr) {
        if (cedula == getElemento(i)->getCedula()) {
            delete getElemento(i);
            elementos.erase(elementos.begin() + i);
        }
        i++;
    }
}

void listaClientes::CrearCliente(string ced)
{
    string nombre;
    cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    persona* cliente = new persona(ced, nombre);
    agregarElemento(cliente);
}
 