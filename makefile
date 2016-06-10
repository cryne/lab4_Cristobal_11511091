play: soldado.o escuadron.o arquero.o coraza.o asesino.o main.o
	g++ soldado.o escuadron.o arquero.o coraza.o asesino.o main.o -o play
main.o: main.cpp soldado.h escuadron.h arquero.h coraza.h asesino.h
	g++ -c main.cpp
soldado.o: soldado.cpp soldado.h
	g++ -c soldado.cpp
escuadron.o: escuadron.cpp soldado.h escuadron.h
	g++ -c escuadron.cpp
arquero.o: arquero.cpp soldado.h arquero.h
	g++ -c arquero.cpp
coraza.o: coraza.cpp soldado.h coraza.h
	g++ -c coraza.cpp
asesino.o: asesino.cpp soldado.h asesino.cpp
	g++ -c asesino.cpp

