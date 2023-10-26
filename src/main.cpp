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

int main() {

    Ahorcado partida("COMEDIA", 5);

    return 0;
}


