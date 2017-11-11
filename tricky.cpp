#include<iostream>
#include "Tablero.h"
#include "Jugador.h"
#include "Maquina.h"
#include "Persona.h"
#include "Ficha.h"
#include <string.h>

using namespace std;


int main(){
	string etqs= "abcdefghi";
	Jugador j1("plyer",'X');
	Jugador j2 ("player 2",'O');
	Tablero tbl(etqs);
	int fila;
	
	do{
		tbl.dibujarse();
		j1.dibujarse();
		j2.dibujarse();
		Ficha *f1 = j1.nextJugada(tbl);
		cout<<"next"<<endl;
		char etq1 = f1->getEtiqueta();
		char s1= j1.getSimbolo();
		tbl.asignarSimbolo(etq1,s1);
		if(tbl.verificarTickyFilas(fila) == true){
			cout<<"el jugador 1 "<< "gano"<< endl;
			return 0;
		}
		system ("cls");
		
				/*
		Ficha f2 = j2.nextJugada(tbl);
		char etq2 = f2.getEtiqueta();
		char s2= j2.getSimbolo();
		tbl.asignarSimbolo(s2,et2);
		if(j2.verifyTricky(tbl) == true){
			cout<<"el jugador"<< j2.getNombre<< "gano"<< endl;
			return 0;
		*/

	}while(3>0);
		
	return 0;
}

