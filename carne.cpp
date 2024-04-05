#include "carne.h"
carne::carne(prodPerecedero* productoBase) : productoBase(productoBase) {}

string carne::getCategoria() {
    return productoBase->getCategoria() + " - Carne";
}

double carne::getPrecioCosto() {
    return productoBase->getPrecioCosto() * 0.0; // <- este numero lo cambiamo para modificar el costo si hace falta xd
}

string carne::toString() {
    string baseInfo = productoBase->toString();
    return baseInfo + "\nTipo: Carne"; //aca un tostring pero no recuerdo si hace falta ponerlo en esta clase
}