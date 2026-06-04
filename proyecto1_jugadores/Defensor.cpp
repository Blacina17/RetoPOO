#include "Defensor.h"
#include <iostream>

Defensor::Defensor(string nombre, int edad, string nacionalidad, int numeroCamiseta)
    : Jugador(nombre, edad, nacionalidad, numeroCamiseta), despejes(0) {}

void Defensor::despejar() { 
    despejes++; 
}

int Defensor::getDespejes() const { 
    return despejes; 
}

string Defensor::getPosicion() const { 
    return "Defensor"; 
}

void Defensor::mostrarInfo() const {
    Jugador::mostrarInfo();  // Llama a mostrarInfo() de Jugador
    cout << "   Despejes: " << despejes << endl;
}