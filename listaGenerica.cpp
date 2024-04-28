#include "listaGenerica.h"

template<class T>
inline listaGenerica<T>::listaGenerica() : inicio(nullptr)
{
}

template<class T>
inline listaGenerica<T>::~listaGenerica()
{
	while (inicio != nullptr) {
		nodo* temp = inicio;
		inicio = inicio->siguiente;
		delete temp;
	}
}

template<class T>
inline void listaGenerica<T>::agregarElemento(const T& dato)
{
	nodo* nuevoNodo = new nodo(dato);
	nuevoNodo->siguiente = inicio;
	inicio = nuevoNodo;
}

template<class T>
inline void listaGenerica<T>::eliminarElemento(const T& dato)
{
	nodo* actual = inicio;
	nodo* anterior = nullptr;

	while (actual != nullptr && actual->dato != dato) {
		anterior = actual;
		actual = actual->siguiente;
	}

	if (actual == nullptr) {
		cout << "Elemento no encontrado" << endl;
		return;
	}

	if (anterior == nullptr) {
		inicio = actual->siguiente;
	}
	else {
		anterior->siguiente = actual->siguiente;
	}

	delete actual;
}

template<class T>
listaGenerica<T>& listaGenerica<T>::operator=(const listaGenerica<T>& lista2)
{
	if (this == &lista2) {
		return *this;
	}
	// Eliminar nodos actuales
	while (inicio != nullptr) {
		nodo* temp = inicio;
		inicio = inicio->siguiente;
		delete temp;
	}
	// Copiar nodos de la otra lista
	nodo* nodoActual = lista2.inicio;
	inicio = nullptr;
	nodo* nodoAnterior = nullptr;
	while (nodoActual != nullptr) {
		nodo* nuevoNodo = new nodo(nodoActual->dato);
		if (nodoAnterior == nullptr) {
			inicio = nuevoNodo;
		}
		else {
			nodoAnterior->siguiente = nuevoNodo;
		}
		nodoAnterior = nuevoNodo;
		nodoActual = nodoActual->siguiente;
	}
	return *this;
}

template<class T>
ostream& operator<<(ostream& os, const listaGenerica<T>& lista2)
{
	typename listaGenerica<T>::Nodo* actual = lista2.inicio;

	while (actual != NULL) {
		os << actual->dato << endl;
		actual = actual->siguiente;
	}
	return os;
}