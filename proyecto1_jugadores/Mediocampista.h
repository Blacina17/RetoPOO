//
// Created by Miriam Paola García Ramírez on 06/06/26.
//

#ifndef PROYECTO1_PLANTILLA_DE_SELECCION_MEDIOCAMPISTA_H
#define PROYECTO1_PLANTILLA_DE_SELECCION_MEDIOCAMPISTA_H
#include "Jugador.h"

class Mediocampista: public Jugador {
private:
    int pasesCompletados;
public:
    Mediocampista(string nombre, int edad, string nacionalidad, int numeroCamiseta);
    void completarPase(int cantidad = 1);
    int getPasesCompletados() const;
    string getPosicion() const override;
    void mostrarInfo() const override;

};


#endif //PROYECTO1_PLANTILLA_DE_SELECCION_MEDIOCAMPISTA_H