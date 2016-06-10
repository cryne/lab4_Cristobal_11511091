#pragma once
#include <string>
#include "soldado.h"
using std::string;

class Asesino
{
	double asesinatos;
	double sigilo;
public:
	Asesino(string,string,int,double,double);
	string toString()const;
	double getAsesinatos()const;
	double getSigilo()const;
	double ataque()const;
	double defensa()const;
};