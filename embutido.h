#pragma once
#include "carne.h"
#include "empaque.h"
class embutido : public carne, public empaque
{
private: 
	string marca;
};

