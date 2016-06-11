
#include <string>
#include "soldado.h"
#include "coraza.h"
#include <sstream>
using std::string;
using std::stringstream;

Coraza::Coraza(string nombre,string ciudad,int edad,double dureza,double lanzas):Soldado(nombre,ciudad,edad){
	this->dureza=dureza;
	this->lanzas=lanzas;
}
string Coraza::toString()const{
	stringstream ss;
	ss<<"Coraza:  Dureza:"<<dureza<<" cantidad de lanzas:"<<lanzas;
	return ss.str();
}
double Coraza::getDureza()const{
	return dureza;
}
double Coraza::getLanzas()const{
	return lanzas;
}
double Coraza::ataque()const{
	return lanzas;
}
double Coraza::defensa()const{
	return dureza;
}