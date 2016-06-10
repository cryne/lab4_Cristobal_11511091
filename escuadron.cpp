
#include <string>
#include "soldado.h"
#include "escuadron.h"
#include <sstream>
#include <vector>
using std::vector;
using std::string;
using std::stringstream;

Escuadron::Escuadron(string nombre,vector<Soldado*> ejercito){
	this->nombre=nombre;
	this->ejercito=ejercito;
}
string Escuadron::toString()const{
	stringstream ss;
	ss<<"Escuadron "<<nombre;
	return ss.str();
}