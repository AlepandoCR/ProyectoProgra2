#include "prodPerecedero.h"

bool prodPerecedero::getNacional()
{
	return nacional;
}
double prodPerecedero::getPeso()
{
	return peso;
}
string prodPerecedero::toString() const
{
	stringstream s; 
	s << producto::toString();
	s << "Producto Nacional: "; if (nacional) { s << "si"; }
	else { s << "no"; } s << endl;
	s << "Peso: " << peso << " kg" << endl;
	s << "Vence el: " << fechaVencimiento->fechaToString();
	return s.str();
}

void prodPerecedero::setNacional(bool nac)
{
	nacional = nac;
}

void prodPerecedero::setPeso(double pes)
{
	peso = pes;
}

void prodPerecedero::crearPerecedero()
{
	nacional = false;
	string eleccion;
	crearProd();
	cout << "Ingrese la fecha de vencimiento: " << endl;
	fechaVencimiento = crearFecha();
	cout << "El producto es nacional? (si/no)";
	cin >> eleccion;
	nacional = (eleccion == "Si" || eleccion == "si");
	cout << "Ingrese el peso del producto: ";
	cin >> peso;
}
