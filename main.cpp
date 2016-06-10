#include "soldado.h"
#include "arquero.h"
#include "coraza.h"
#include "asesino.h"
#include "escuadron.h"
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int opcion=6;
	int contador=0;

	while(opcion!=0){
		string nombre;
		cout<<"ingresa el nombre del nuevo Escuadron " <<endl;	
		cin>>nombre;
		int opcion2=1;
		while(opcion2!=0){
			int opcion3;
			cout<<"que tipo de soldado desea agregar al escuadron\n1-Arquero\n2-Corazas\n3-Asesinos"<<endl;
			cin>>opcion3;
			vector<Soldado*> ejercito;
			if (opcion3==1)
			{
				string nombres,ciudad;
				int edad;
				double flechas,precision;
				cout<<"ingrese el nombre del arquero"<<endl;
				cin>>nombres;
				cout<<"ingrese la ciudad del arquero"<<endl;
				cin>>ciudad;
				cout<<"ingrese la edad del arquero"<<endl;
				cin>>edad;
				cout<<"ingrese la cantidad de flechas del arquero"<<endl;
				cin>>flechas;
				cout<<"ingrese la precision de 1 a 10 del arquero"<<endl;
				cin>>precision;
				ejercito.push_back(new Arquero(nombres,ciudad,edad,flechas,precision));	
				cout<<"soldado agregado exitosamente"<<endl;
			}
			if (opcion3==2)
			{
				string nombres,ciudad;
				int edad;
				double lanzas,dureza;
				cout<<"ingrese el nombre de la coraza"<<endl;
				cin>>nombres;
				cout<<"ingrese la ciudad de la coraza"<<endl;
				cin>>ciudad;
				cout<<"ingrese la edad de la coraza"<<endl;
				cin>>edad;
				cout<<"ingrese la cantidad de lanzas de la coraza"<<endl;
				cin>>lanzas;
				cout<<"ingrese la dureza de 1 a 10 de la coraza"<<endl;
				cin>>dureza;
				ejercito.push_back(new Coraza(nombres,ciudad,edad,dureza,lanzas));	
				cout<<"soldado agregado exitosamente"<<endl;
			}
			if (opcion3==3)
			{
				string nombres,ciudad;
				int edad;
				double asesinatos,sigilo;
				cout<<"ingrese el nombre del asesino"<<endl;
				cin>>nombres;
				cout<<"ingrese la ciudad del asesino"<<endl;
				cin>>ciudad;
				cout<<"ingrese la edad del asesino"<<endl;
				cin>>edad;
				cout<<"ingrese la cantidad de asesinatos del asesino"<<endl;
				cin>>asesinatos;
				cout<<"ingrese el sigilo de 1 a 10 del asesino"<<endl;
				cin>>sigilo;
				ejercito.push_back(new Asesino(nombres,ciudad,edad,asesinatos,sigilo));
				cout<<"soldado agregado exitosamente"<<endl;
			}
			cout<<"desea continuar agregando mas soldados\n1-si\n0-no"<<<endl;
			cin>>opcion2;
		}
		if(contador>=8){
			cout<<"desea continuar agregando Escuadrones"<<endl;
			contador++;
		}else{
			contador++;			
		}
	}
	return 0;
}