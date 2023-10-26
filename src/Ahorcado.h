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

    public:
        /*
         * pre : palabra es una secuencia de letras y chances es mayor a cero.
         * post: el juego queda iniciado con la palabra indicada y con
         *       todas las chances disponibles para arriesgar letras.
         */
        Ahorcado(std::string palabra, unsigned int chances);
};

#endif /* AHORCADO_H_ */
