//
// Created by Miriam Paola García Ramírez on 06/06/26.
//

#include "Mediocampista.h"
#include <iostream>

Mediocampista :: Mediocampista (string nombre, int edad, string nacionalidad, int numeroCamiseta) : Jugador (nombre, edad, nacionalidad, numeroCamiseta), pasesCompletados(0) {}

void Mediocampista:: completarPase(int cantidad) {
    pasesCompletados += cantidad;
}

int Mediocampista::getPasesCompletados() const {
    return pasesCompletados;
}

string Mediocampista::getPosicion() const {
    return "Mediocampista";
}

void Mediocampista:: mostrarInfo() const {
    Jugador::mostrarInfo();
    cout << "   Pases completados: " << pasesCompletados << endl;
}

