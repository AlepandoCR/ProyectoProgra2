#include "listaProd.h"

listaProd::~listaProd() {
}

void listaProd::agregarElemento(producto* elemento) {
    elementos.push_back(elemento);
}

void listaProd::imprimirLista() const {
    for (producto* elemento : elementos) {
        cout << elemento->toString() << endl;
    }
}

producto* listaProd::getElemento(int indice) const {
    if (indice >= 0 && indice < elementos.size()) {
        return elementos[indice];
    }
    else {
        return nullptr;
    }
}

void listaProd::eliminarElemento()
{
    string codigo;
    cout << "Ingrese el codigo: ";
    cin >> codigo;
    int i = 0;
    while (getElemento(i) != nullptr) {
        if (codigo == getElemento(i)->getCodigo()) {
            delete getElemento(i);
            elementos.erase(elementos.begin() + i);
            return;
        }
        i++;
    }
}
void listaProd::eliminarElementoPorIgual(producto* prod)
{
    int i = 0;
    while (getElemento(i) != nullptr) {
        if (prod == getElemento(i)) {
            delete getElemento(i);
            elementos.erase(elementos.begin() + i);
            return;
        }
        i++;
    }
}
producto* listaProd::getProdPorCod(string codigo)
{
    int i = 0;
    while (getElemento(i) != nullptr) {
        if (codigo == getElemento(i)->getCodigo()) {
            return getElemento(i);
        }
        i++;
    }
    return nullptr;
}