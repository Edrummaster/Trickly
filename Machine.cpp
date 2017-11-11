#include "Machine.h"
#include "Ficha.h"
#include <iostream>

using namespace std;

Machine::Machine(string nom, char sim){
	this -> nombre=nom;
	this -> simbolo= sim;
}

bool Machine::nextJugadaMachine(Tablero tbl){
	Ficha f(' ',' ');
	bool movida;
	while(movida!=true){
		int fila = rand() % 3;        
		int col = rand() % 3;
		if(f.getSimbolo()!= 'X'){
			matriz[fila][col]=f;
			movida = true;
			return 0;
		}
	}
}


