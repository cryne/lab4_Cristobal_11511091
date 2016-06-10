
#include <string>
#include "soldado.h"
#include <sstream>
using std::string;
using std::stringstream;

Soldado::Soldado(string nombre,string ciudad,int edad){
	this->nombre=nombre;
	this->ciudad=ciudad;
	this->edad=edad;
}
string Soldado::toString(){
	stringstream ss;
	ss<<"nombre:"<<nombre<<" ciudad de origen:"<<ciudad<<" Edad:"<<edad;
	return ss.str();
}
double Soldado::ataque()const{
	return -1;
}
double Soldado::defensa()const{
	return -1;
}