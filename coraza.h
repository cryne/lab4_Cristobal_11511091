#pragma once
#include <string>
#include "soldado.h"
using std::string;

class Coraza
{
	double dureza;
	double lanzas;
public:
	Coraza(string,string,int,double,double);
	string toString()const;
	double getDureza()const;
	double getLanzas()const;
	double ataque()const;
	double defensa()const;
};