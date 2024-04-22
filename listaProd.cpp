#include "listaProd.h"

listaProd::~listaProd()
{
    nodoProd* actual = inicio;
    while (actual != nullptr) {
        nodoProd* siguiente = actual->siguiente;
        delete actual->data; 
        delete actual;       
        actual = siguiente;
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
        cout << endl << "Codigo: " << actual->data->getCodigo() << ", Nombre: " << actual->data->getNombre() << " " << actual->data->toString() << ", Descripcion: " << actual->data->getDesc() << ", Categoria: " << actual->data->getCategoria() << endl;
        actual = actual->siguiente;
    }
}
