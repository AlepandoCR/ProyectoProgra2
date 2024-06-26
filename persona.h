#ifndef PERSONA_H
#define PERSONA_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
using std::vector;
class persona
{
private:
	string cedula;
	string nombre;
	double dineroInvertido; //Esto es para calcular el top 5 de clientes
public:
	~persona();
	persona();
	persona(string, string);
	string getNombre();
	string getCedula();
	persona& operator= (const persona& per2);
	friend std::ostream& operator<<(std::ostream& os, const persona& per2);
	friend std::istream& operator>>(std::istream& is, persona& per2);
	string toString();
	void sumarDineroInvertido(double);
	double getDineroInvertido();
};
#endif
