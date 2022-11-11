/*Implemente una clase persona que tiene un atributo de edad, posteriormente implemente una clase ColadeEmergencias 
que posiciones primero a las personas que son mayores de 60 y luego las menores. El orden de las personas se debe mantener 
para personas del mismo grupo de edad.

La clase ColadeEmergencias debe contar con un metodo agregarPersona que recibe una persona y la agrega a la cola, 
y un metodo imprimir que imprime las edades de las personas en el orden en el cual se encuentran en la cola.  */

#include <iostream>
#include <queue>
#include <list>
using namespace std;

class Persona
{
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
    queue<Persona> mayores;
    queue<Persona> menores;

public:
    void agregarPersona(Persona persona)
    {
        if (persona.getEdad() >= 60)
        {
            mayores.push(persona);
        }
        else
        {
            menores.push(persona);
        }
    }
    void imprimir()
    {
        while (!mayores.empty())
        {
            cout << mayores.front().getEdad() << endl;
            mayores.pop();
        }
        while (!menores.empty())
        {
            cout << menores.front().getEdad() << endl;
            menores.pop();
        }
    }
};

int main()
{
    ColadeEmergencias cola;
    cola.agregarPersona(Persona(20));
    cola.agregarPersona(Persona(30));
    cola.agregarPersona(Persona(40));
    cola.agregarPersona(Persona(50));
    cola.agregarPersona(Persona(60));
    cola.agregarPersona(Persona(70));
    cola.agregarPersona(Persona(80));
    cola.agregarPersona(Persona(90));
    cola.imprimir();
}