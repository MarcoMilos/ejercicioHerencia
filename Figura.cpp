// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include "Figura.h"

// Constructores por omisión y copia
Figura::Figura()
{
    nombre = "";
    numPuntos = 0;
    
}
Figura::Figura(std::string nom, std::list<Punto> pts, int num)
{
    nombre = nom;
    puntos = pts;
    numPuntos = num;
}

// Destructor 
Figura::~Figura(){}

// Getters 
std::string Figura::getnombre()
{
    return nombre;
}
std::list<Punto> Figura::getpuntos()
{
    return puntos;
}
int Figura::getnumPuntos()
{
    return numPuntos;
}

// Setters
void Figura::setNombre(std::string nom)
{
    nombre = nom;
}
void Figura::setpuntos(std::list<Punto> pts)
{
    puntos = pts;
}
void Figura::setnumPuntos(int num)
{
    numPuntos = num;
}

// Metodo de impresion
void Figura::printFigura()
{
    std::cout << "nombre: " << nombre << std::endl;
    std::cout << "puntos: " << numPuntos << std::endl;
}