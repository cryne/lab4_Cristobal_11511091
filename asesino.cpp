
#include <string>
#include "soldado.h"
#include "asesino.h"
#include <sstream>
using std::string;
using std::stringstream;

Asesino::Asesino(string nombre,string ciudad,int edad,double asesinatos,double sigilo){
	Soldado(nombre,ciudad,edad);
	this->asesinatos=asesinatos;
	this->sigilo=sigilo;
}
string Asesino::toString()const{
	stringstream ss;
	ss<<"Asesino:  Cantidad de asesinatos:"<<asesinatos<<" sigilo:"<<sigilo;
	return ss.str();
}
double Asesino::getSigilo()const{
	return sigilo;
}
double Asesino::getAsesinatos()const{
	return asesinatos;
}
double Asesino::ataque()const{
	return asesinatos;
}
double Asesino::defensa()const{
	return sigilo*10;
}