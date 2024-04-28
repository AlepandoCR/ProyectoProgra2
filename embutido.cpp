#include "embutido.h"

embutido::embutido()
{
}

embutido::embutido(string cod, string nC, string desc, string cat, string nE, string parteA, string especie, string marca, double pC, int exist, int lim, bool nac, bool tripa, double _peso, fecha* feIngreso)
{

}

void embutido::crearEmbutido()
{
	string eleccion;
	tripa = false;
	crearCarne();
	cout << "Ingrese la marca del embutido: ";
	cin >> marca;
	cout << "El embutido es de tripa? (si/no)";
	cin >> eleccion;
	tripa = (eleccion == "Si" || eleccion == "si");

}

string embutido::toString() const
{
	stringstream s;
	s << carne::toString(); 
	s << "Marca: " << marca;
	return s.str();
}
