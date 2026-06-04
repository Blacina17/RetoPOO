#ifndef DEFENSOR_H
#define DEFENSOR_H

#include "Jugador.h"

class Defensor : public Jugador {
private:
    int despejes;  // Atributo privado para contar despejes

public:
    Defensor(string nombre, int edad, string nacionalidad, int numeroCamiseta);
    
    void despejar();  // Método para incrementar despejes
    int getDespejes() const;  // Getter para despejes
    
    string getPosicion() const override;  // Sobrescribe getPosicion()
    void mostrarInfo() const override;     // Sobrescribe mostrarInfo()
};

#endif