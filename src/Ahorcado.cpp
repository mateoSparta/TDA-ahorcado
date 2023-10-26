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

    if (chances > 0) {
        chancesTotales = chances;

    } else {

        /* si el valor es incorrecto asume el valor estándar */
        chancesTotales = 7;
    }

    chancesUsadas = 0;
}


