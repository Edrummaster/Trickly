#include "Tablero.h"
#include "Ficha.h"
#include "Jugador.h"
#include <string>
#include <iostream>
using namespace std;

Tablero::Tablero(string etiquetas){
	int k=0;
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			Ficha f(' ',etiquetas[k++]); //abcd...g
			matriz[i][j] = f;
		}
	}
}

void Tablero::dibujarse(){
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			Ficha f = matriz[i][j];
			f.dibujarFicha();
		}
		cout<<endl;
	}
}

Ficha* Tablero::obtenerFicha(char etiqueta){
	cout<<matriz[0][0].getSimbolo()<<endl;
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			 Ficha *f = &matriz[i][j];
			if (f->getEtiqueta() == etiqueta){
				return &matriz[i][j];
			}
		}
	}
	return NULL;
}

bool Tablero::verificarTickyFilas(int &fila){
	cout<<"verify"<<endl;
	
	if ( ((matriz[0][0].getSimbolo() != ' ') == (matriz[0][1].getSimbolo()!= ' ')) && ((matriz[0][0].getSimbolo()!=' ') == (matriz[0][2].getSimbolo()!=' ')) ){
		fila = 0;
		cout<<"entro 1"<<endl;
		return true;
	}
	


	else if( ((matriz[1][0].getSimbolo() != ' ') == (matriz[1][1].getSimbolo() != ' ')) && ((matriz[1][0].getSimbolo() != ' ') ==( matriz[1][2].getSimbolo() != ' ')) ){
		fila = 1;
		cout<<"entro 2"<<endl;
		return true;
	}
	
	
	
	//if( ((matriz[2][0].getSimbolo()!=' ') != (matriz[2][1].getSimbolo()!=' ')) && ((matriz[2][0].getSimbolo()!=' ') !=(matriz[2][2].getSimbolo()!=' ')) ){
	else{
		fila = 2;
		cout<<"entro 3"<<endl;
		return true;
	}
	
	return false;
}


/*
bool Tablero::verificarTickyColumnas(int &col){
	if(matriz[0][0].getSimbolo() == matriz[1][0].getSimbolo() && matriz[0][0].getSimbolo() ==matriz[2][0].getSimbolo()){
		col = 0;
		return true;
	}
	

	if(matriz[0][1].getSimbolo() == matriz[1][1].getSimbolo() && matriz[0][1].getSimbolo() ==matriz [2][1].getSimbolo()){

		col = 0;
		return true;
	}


	if(matriz[0][2].getSimbolo() == matriz[1][2].getSimbolo() && matriz[0][2].getSimbolo() ==matriz[2][2].getSimbolo()){

		col = 0;
		return true;
	}

	return false;
		
	}

	bool Tablero::verificarTickyDiagonal(int &diag){


	if(matriz[0][0].getSimbolo() == matriz[1][1].getSimbolo() && matriz[0][0].getSimbolo() ==matriz[2][2].getSimbolo()){
		diag= 0;
		return true;
	}
	

	if(matriz[0][2].getSimbolo() == matriz[1][1].getSimbolo() && matriz[0][2].getSimbolo() ==matriz [2][1].getSimbolo()){

		diag = 0;
		return true;
	}

	return false;
	
}

*/

//busca etiqueta y cambia simbolo


void Tablero::asignarSimbolo(char etiqueta1, char simbolo1){ 
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			Ficha *f = &matriz[i][j];
			if (f->getEtiqueta() == etiqueta1){
				f->setSimbolo(simbolo1);
			}
		}
	}
}



