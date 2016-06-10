
#include <string>
#include "soldado.h"
#include "arquero.h"
#include <sstream>
using std::string;
using std::stringstream;

Arquero::Arquero(string nombre,string ciudad,int edad,double flechas,double precision){
	Soldado(nombre,ciudad,edad);
	this->flechas=flechas;
	this->precision=precision;
}
string Arquero::toString()const{
	stringstream ss;
	ss<<"Arquero:  Cantidad de flechas:"<<flechas<<" Precision:"<<precision;
	return ss.str();
}
double Arquero::getFlechas()const{
	return flechas;
}
double Arquero::getPrecision()const{
	return precision;
}
double Arquero::ataque()const{
	return flechas*(precision/1000);
}
double Arquero::defensa()const{
	return 0;
}