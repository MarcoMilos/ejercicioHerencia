// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include <algorithm>
#include "Figura.h"

// Constructores por omisión y copia
Figura::Figura()
{
    std::cout << "Ingrese el nombre de la figura: ";
    std::cin >> nombre;

    std::cout << "Ingrese el numero de puntos: ";
    std::cin >> numPuntos;

    // Solicitar los puntos al usuario
    for (int i = 0; i < numPuntos; i++)
    {
        double x, y;
        std::cout << "Ingrese las coordenadas x e y del punto: " << i + 1 << ": ";
        std::cin >> x >> y;

        // Crea un objeto punto con las coordenadas proporcionadas
        Punto punto(x, y);

        // Agregar el punto a la lista de puntos
        puntos.push_back(punto);
    } 
    
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
void Figura::setPuntos(std::list<Punto> pts)
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
    std::cout << "Nombre de la figura: " << nombre << std::endl;
    std::cout << "Numero de Puntos: " << numPuntos << std::endl;
    std::cout << "Puntos (ordenados por coordenada x, descendente)" << std::endl;
    std::list<Punto> puntosOrdenados(puntos);
    puntosOrdenados.sort([](Punto& p1, Punto& p2) { return p1.getx() > p2.getx(); });

    for (auto punto : puntosOrdenados)
    {
        std::cout << "x: " << punto.getx() << ", y: " << punto.gety() << std::endl;
    }

}