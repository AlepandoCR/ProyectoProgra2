#include "producto.h"

string producto::toString() const
{
	stringstream s;
	s << "Codigo: " << codigo << endl;
	s << "Nombre: " << nombreComercial << endl;
	s << "Descripcion: " << descripcion << endl;
	s << "Precio: " << precioCosto << endl;
	s << "Categoria: " << categoria << endl;
	s << "Existencias: " << existencias << endl;
	s << "Limite: " << limite << endl;
	s << "Fecha de ingreso: " << fechaIngreso->fechaToString();
	return s.str();
}

void producto::setCodigo(string cod)
{
    codigo = cod;
}
void producto::setExistencias(int ext)
{
    existencias = ext;
}

fecha* producto::crearFecha()
{
    int d, m, a;
    cout << endl << "Ingrese el dia: ";
    cin >> d;
    cout << endl << "Ingrese el mes: ";
    cin >> m;
    cout << endl << "Ingrese el anio: ";
    cin >> a;
    fecha* fec = new fecha(d, m, a);
    return fec;
}

void producto::crearProd()
{
    fechaIngreso = crearFecha();
    cout << endl << "Ingrese el nombre del producto: ";
    cin >> nombreComercial;
    cout << endl << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl << "Ingrese la descripcion del producto: ";
    cin >> descripcion;
    cout << endl << "Ingrese la categoria del producto: ";
    cin >> categoria;
    cout << endl << "Ingrese el precio del producto: ";
    cin >> precioCosto;
    cout << endl << "Ingrese las existencias del producto: ";
    cin >> existencias;
    cout << endl << "Ingrese el limite del producto: ";
    cin >> limite;
}

string producto::getCodigo()
{
    return codigo;
}

string producto::getNombre()
{
    return nombreComercial;
}

string producto::getDesc()
{
    return descripcion;
}

string producto::getCategoria()
{
    return categoria;
}

double producto::getPrecioCosto()
{
    return precioCosto;
}

int producto::getExistencias()
{
    return existencias;
}

int producto::getLimite()
{
    return limite;
}

fecha* producto::getFechaIngreso()
{
    return fechaIngreso;
}
