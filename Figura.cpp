// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include <algorithm>
#include "Figura.h"

// Constructores por omisión y copia
Figura::Figura()
{
    nombre = "";
    numPuntos = 0;
    
}
Figura::Figura(std::string nom, std::vector<Punto> pts, int num)
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
std::vector<Punto> Figura::getpuntos()
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
void Figura::setnumPuntos(int num)
{
    numPuntos = num;
}

// Metodo de impresion
void Figura::printFigura()
{
    std::cout << "Nombre de la figura: " << nombre << std::endl;
    std::cout << "Numero de Puntos: " << numPuntos << std::endl;
    std::cout << "Puntos (ordenados por coordenada x, descendente)" << std::endl;
    std::vector<Punto> puntosOrdenados(puntos);
    std::sort(puntosOrdenados.begin(), puntosOrdenados.end(), [](Punto& p1, Punto& p2) { return p1.getx() > p2.getx(); });

    for (Punto& punto : puntosOrdenados)
    {
        std::cout << "x: " << punto.getx() << ", y: " << punto.gety() << std::endl;
    }

}