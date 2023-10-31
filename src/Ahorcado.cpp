/*
 * Ahorcado.cpp
 *
 *  Created on: 25/10/2023
 *      Author: algo2
 */

#include "Ahorcado.h"

using namespace std;

Ahorcado::Ahorcado(string palabra, unsigned int chances) {

    palabraPorAdivinar = palabra;
    chancesUsadas = 0;

    if (chances > 0) {
        chancesTotales = chances;
    } else {
        /* si el valor es incorrecto asume el valor estándar */
        chancesTotales = 7;
    }

    /* construye la palabra enmascarada con guiones en todas la letras */
	palabraEnmascarada = "";
	for (unsigned int i = 0; i < palabraPorAdivinar.size(); i++) {
		palabraEnmascarada += "_";
	}
}

unsigned int Ahorcado::obtenerChancesRestantes() {
    return chancesTotales - chancesUsadas;
}

string Ahorcado::obtenerPalabra() {
    return palabraEnmascarada;
}

bool Ahorcado::arriesgar(char letra) {

    int ocurrenciaDeLaLetra = 0;

    if (obtenerChancesRestantes() > 0) {
        for (unsigned int i = 0; i < palabraPorAdivinar.size(); i++) {
            if (palabraPorAdivinar[i] == letra) {
                palabraEnmascarada[i] = letra;
                ocurrenciaDeLaLetra++;
            }
        }
        if (ocurrenciaDeLaLetra == 0) {
            chancesUsadas++;
        }
    }

    return ocurrenciaDeLaLetra > 0;
}
