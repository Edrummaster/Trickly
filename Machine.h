//MACHINE
#ifndef __MACHINE_H_
#define __MACHINE_H_
#include "Jugador.cpp"

class Machine : public Jugador{
	public:
		Machine(string nom, char sim);
		bool nextJugadaMachine(Tablero tbl);
};

#endif
