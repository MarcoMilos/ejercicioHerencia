// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Figura_h
#define Figura_h

#include <vector>
#include <string>
#include "Punto.h"

class Figura
{
    // Declaramos los atributos privados
    std::string nombre;
    std::vector<Punto> puntos;
    int numPuntos;
    public:
        // Declaramos los constructores
        Figura();
        Figura(std::string, std::vector<Punto>, int);
        ~Figura();
        // Metodo Getters
        std::string getnombre();
        std::vector<Punto> getpuntos();
        int getnumPuntos();
        // Metodo Setters
        void setNombre(std::string);
        void setnumPuntos(int);
        // Metodo de impresion
        void printFigura();
};

#endif