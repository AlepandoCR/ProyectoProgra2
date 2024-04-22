#ifndef PERSONA_H
#define PERSONA_H
#include "clases.h"
class persona
{
private:
	string cedula;
	string nombre;
public:
	persona();
	persona(string, string);
	string getNombre();
	string getCedula();
};
#endif
