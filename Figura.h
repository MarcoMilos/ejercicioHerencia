// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Figura_h
#define Figura_h

#include <list>
#include <string>
#include "Punto.h"

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
        Figura(std::string& nom);
        ~Figura();
        // Metodo Getters
        std::string getnombre();
        std::list<Punto> getpuntos();
        int getnumPuntos();
        // Metodo Setters
        void setNombre(std::string);
        void setPuntos(std::list<Punto>);
        void setnumPuntos(int);
        void setListaPuntos(std::list<Punto>& listaPuntos);
        // Metodo de impresion
        void printFigura();
};

#endif