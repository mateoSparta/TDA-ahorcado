/*
 * main.cpp
 *
 *  Created on: 25/10/2023
 *      Author: algo2
 *
 * ENUNCIADO
 *
 * Implementar el TDA Ahorcado que modele el conocido juego de lápiz y papel, en el que el objetivo es adivinar una palabra o frase.
 *
 * El Ahorcado debe proveer operaciones para:
 *
 * 1. Inicializar el juego a partir de una palabra y la cantidad de chances disponibles inicialmente para arriesgar letras.
 *
 * 2. Conocer la cantidad de chances restantes para arriesgar una letra que no exista en la palabra.
 *
 * 3. Conocer la palabra, enmascarada por _ (guión bajo) en aquellas letras desconocidas.
 *
 * 4. Arriesgar una letra.
 *
 */

#include <iostream>
#include "Ahorcado.h"

using namespace std;

int main() {

	char letraIngresada;
	std::string palabra = "COMEDIA";
	Ahorcado partida(palabra, 7);
	bool sigueJugando = true;
	int chances;

	cout << ".:: Ahorcado ::." << endl << "Partida iniciada" << endl;

	do {
		chances = partida.obtenerChancesRestantes();
		switch(chances){
			case 0:
				cout << "  ____   " << endl
					 << " |    |  " << endl
					 << " |    O  " << endl
					 << " |   ||| " << endl
					 << " |   /| " << endl
					 << "_|_      " << endl;
				break;
			case 1:
				cout << "  ____   " << endl
					 << " |    |  " << endl
					 << " |    O  " << endl
					 << " |   ||| " << endl
					 << " |   /   " << endl
					 << "_|_      " << endl;
				break;
			case 2:
				cout << "  ____   " << endl
					 << " |    |  " << endl
					 << " |    O  " << endl
					 << " |   ||| " << endl
					 << " |       " << endl
					 << "_|_      " << endl;
				break;
			case 3:
				cout << "  ____  " << endl
					 << " |    | " << endl
					 << " |    O " << endl
					 << " |   || " << endl
					 << " |      " << endl
					 << "_|_     " << endl;
				break;
			case 4:
				cout << "  ____  " << endl
					 << " |    | " << endl
					 << " |    O " << endl
					 << " |    | " << endl
					 << " |      " << endl
					 << "_|_     " << endl;
				break;
			case 5:
				cout << "  ____  " << endl
					 << " |    | " << endl
					 << " |    O " << endl
					 << " |      " << endl
					 << " |      " << endl
					 << "_|_     " << endl;
				break;
			case 6:
				cout << "  ____  " << endl
					 << " |    | " << endl
					 << " |      " << endl
					 << " |      " << endl
					 << " |      " << endl
					 << "_|_     " << endl;
				break;
		}
		cout << "Palabra: " << partida.obtenerPalabra() << endl;
		cout << endl << "ingrese una letra mayuscula: ";
		cin >> letraIngresada;
		partida.arriesgar(letraIngresada);
		if(partida.obtenerChancesRestantes() > 0 &&
		   partida.obtenerPalabra() == palabra){
			cout << "Felicitaciones la palabra era " << palabra << endl;
			sigueJugando = false;
		} else if(partida.obtenerChancesRestantes() == 0){
			cout << "Te quedaste sin chances" << endl;
			sigueJugando = false;
		}
	} while(sigueJugando);

    return 0;
}

