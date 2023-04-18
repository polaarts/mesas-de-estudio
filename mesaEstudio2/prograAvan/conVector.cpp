/*Implemente una clase persona que tiene un atributo de edad, posteriormente implemente una clase ColadeEmergencias
que posiciones primero a las personas que son mayores de 60 y luego las menores. El orden de las personas se debe mantener
para personas del mismo grupo de edad.

La clase ColadeEmergencias debe contar con un metodo agregarPersona que recibe una persona y la agrega a la cola,
y un metodo imprimir que imprime las edades de las personas en el orden en el cual se encuentran en la cola.  */

#include <iostream>
#include <vector>
using namespace std;

class Persona
{
protected:
    int edad;

public:
    Persona(int edad)
    {
        this->edad = edad;
    }
    int getEdad()
    {
        return edad;
    }
};

class ColadeEmergencias
{
    vector<int> mayores;
    vector<int> menores;

    // push back

public:

void agregarPersonas(Persona persona){
    if (persona.getEdad() >= 60)
    {
        mayores.push_back(persona.getEdad());
    }
    else
    {
        menores.push_back(persona.getEdad());
    }
}       

    void imprimir()
    {
        
    }
};

int main()
{
}