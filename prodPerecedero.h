#ifndef PRODPERECEDERO_H
#define PRODPERECEDERO_H
#include "perecedero.h"
#include "producto.h"
class prodPerecedero : public perecedero, public producto
{
public:
	bool nacional;
	double peso; 
	prodPerecedero();
};
#endif
