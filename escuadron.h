#pragma once
#include <string>
#include "soldado.h"
#include <vector>
using std::string;
using std::vector;
class Escuadron
{
	string nombre;
	vector<Soldado*> ejercito;
public:
	Escuadron(string,vector<Soldado*>);
	string toString()const;
};