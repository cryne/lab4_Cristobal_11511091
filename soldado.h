#pragma once
#include <string>
using std::string;

class Soldado
{
	string nombre;
	string ciudad;
	int edad;
public:
	Soldado(string,string,int);
	virtual string toString();
	virtual double ataque()const;
	virtual double defensa()const;
};