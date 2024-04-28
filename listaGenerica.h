#ifndef LISTAGENERICA_H
#define LISTAGENERICA_H

#include "listaClientes.h"
#include "listaFact.h"
#include "listaProd.h"

template<class T>
class listaGenerica {
public:
	listaGenerica();
	~listaGenerica();
	void agregarElemento(const T& dato);
	void eliminarElemento(const T& dato);
	listaGenerica<T>& operator= (const listaGenerica<T>& lista2);
	friend ostream& operator<<(ostream& os, const listaGenerica<T>& lista2);
private:
	struct nodo
	{
		T dato;
		nodo* siguiente;
		nodo(const T& dato) : dato(dato), siguiente(nullptr) {};
	};
	nodo* inicio;
};

#endif // !LISTAGENERICA_H