#pragma once
#include <string>
#include "soldado.h"
using std::string;

class Arquero
{
	double flechas;
	double precision;
public:
	Arquero(string,string,int,double,double);
	string toString()const;
	double getFlechas()const;
	double getPrecision()const;
	double ataque()const;
	double defensa()const;
};