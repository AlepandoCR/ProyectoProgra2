#include "listaProd.h"

listaProd::~listaProd()
{
    nodoProd* actual = inicio;
    while (actual != nullptr) {
        nodoProd* siguiente = actual->siguiente;
        cout << "data: " << actual->data << endl;
        delete actual->data; 
        delete actual;       
        actual = siguiente;
        cout << "producto eliminado" << endl;
    }
}

void listaProd::agregarProducto(producto* producto)
{
    nodoProd* nuevoNodo = new nodoProd(producto);
    nuevoNodo->siguiente = inicio;
    inicio = nuevoNodo;
}

void listaProd::imprimirLista() const
{
    nodoProd* actual = inicio;
    while (actual != nullptr) {
        cout << "Código: " << actual->data->getCodigo() << ", Nombre: " << actual->data->getNombre() << endl;
        actual = actual->siguiente;
    }
}
