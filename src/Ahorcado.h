/*
 * Ahorcado.h
 *
 *  Created on: 25/10/2023
 *      Author: algo2
 */
#ifndef AHORCADO_H_
#define AHORCADO_H_

#include <string>

class Ahorcado {

    private:

        std::string palabraPorAdivinar;
        unsigned int chancesTotales;
        unsigned int chancesUsadas;
        std::string palabraEnmascarada;

    public:
        /*
         * pre : palabra es una secuencia de letras y chances es mayor a cero.
         * post: el juego queda iniciado con la palabra indicada y con
         *       todas las chances disponibles para arriesgar letras.
         */
        Ahorcado(std::string palabra, unsigned int chances);

        /*
		 * post: devuelve la cantidad de veces en las que aún se puede
		 *       arriesgar una letra sin que exista en la palabra.
		 *
		 */
		unsigned int obtenerChancesRestantes();

		/*
		 * post: devuelve la palabra a adivinar, enmascarando las letras
		 *       desconocidas con '_' (guión bajo).
		 */
		std::string obtenerPalabra();
};

#endif /* AHORCADO_H_ */
