// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Figura_h
#define Figura_h

#include <list>
#include <string>
#include "Punto.cpp"

class Figura
{
    // Declaramos los atributos privados
    std::string nombre;
    std::list<Punto> puntos;
    int numPuntos;
    public:
        // Declaramos los constructores
        Figura();
        Figura(std::string, std::list<Punto>, int);
        ~Figura();
        // Metodo Getters
        std::string getnombre();
        std::list<Punto> getpuntos();
        int getnumPuntos();
        // Metodo Setters
        void setNombre(std::string);
        void setpuntos(std::list<Punto>);
        void setnumPuntos(int);
        // Metodo de impresion
        void printFigura();
};

#endif