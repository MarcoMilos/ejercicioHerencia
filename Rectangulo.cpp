// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include <ostream>
#include <cmath>
#include <list>
#include "Rectangulo.h"

Rectangulo::Rectangulo() : Figura()
{
    setnumPuntos(4);
}

Rectangulo::Rectangulo(std::list<Punto>& puntos, std::string& nombreRectangulo) : Figura(nombreRectangulo, puntos, 4)
{
    // Verificamos si la lista de puntos en verdad tiene exactamente 4 puntos
    if (puntos.size() != 4)
    {
        std::cerr << "Error: El número de puntos proporcionados para el rectángulo no es válido." << std::endl;
    }
}

// Hacemos el constructor de copia
Rectangulo::Rectangulo(Rectangulo& otroRectangulo) : Figura(otroRectangulo) {}

// Establecemos el destructor
Rectangulo::~Rectangulo() {}

double Rectangulo::calculaPerimetro()
{
    std::list<Punto> puntos = getListaPuntos();
    if (puntos.size() != 4)
    {
        std::cerr << "Error: El número de puntos del rectángulo no es válido." << std::endl;
        return 0.0;
    }

    // Calculamos las distancias de los lados del rectángulo
    auto it = puntos.begin();
    auto it2 = it;
    ++it2;
    auto it3 = it2;
    ++it3;
    auto it4 = it3;
    ++it4;

    Punto& punto1 = *it;
    Punto& punto2 = *it2;
    Punto& punto3 = *it3;
    Punto& punto4 = *it4;

    double lado1 = std::sqrt(pow(punto2.getx() - punto1.getx(), 2) + pow(punto2.gety() - punto1.gety(), 2));
    double lado2 = std::sqrt(pow(punto3.getx() - punto2.getx(), 2) + pow(punto3.gety() - punto2.gety(), 2));
    double lado3 = std::sqrt(pow(punto4.getx() - punto3.getx(), 2) + pow(punto4.gety() - punto3.gety(), 2));
    double lado4 = std::sqrt(pow(punto1.getx() - punto4.getx(), 2) + pow(punto1.gety() - punto4.gety(), 2));

    return lado1 + lado2 + lado3 + lado4;
}

double Rectangulo::calculaArea()
{
    std::list<Punto> puntos = getListaPuntos();
    if (puntos.size() != 4)
    {
        std::cerr << "Error: El número de puntos del rectángulo no es válido." << std::endl;
        return 0.0;
    }

    // Calculamos la base y la altura de nuestro rectángulo
    auto it = puntos.begin();
    auto it2 = it;
    ++it2;
    auto it3 = it2;
    ++it3;

    Punto& punto1 = *it;
    Punto& punto2 = *it2;
    Punto& punto3 = *it3;

    double base = std::sqrt(pow(punto2.getx() - punto1.getx(), 2) + pow(punto2.gety() - punto1.gety(), 2));
    double altura = std::sqrt(pow(punto3.getx() - punto2.getx(), 2) + pow(punto3.gety() - punto2.gety(), 2));
    
    return base * altura;
}

void Rectangulo::printRectangulo()
{
    Figura::printFigura();
    std::cout << "Nombre del rectángulo: " << getnombre() << std::endl;
    std::cout << "Perímetro: " << calculaPerimetro() << std::endl;
    std::cout << "Área: " << calculaArea() << std::endl;
}

void Rectangulo::setListaPuntos(std::list<Punto>& puntos)
{
    Figura::setPuntos(puntos);
}

void Rectangulo::setNombreRectangulo(std::string& nombreRectangulo)
{
    Figura::setNombre(nombreRectangulo);
}

std::list<Punto> Rectangulo::getListaPuntos()
{
    return Figura::getpuntos();
}

std::string Rectangulo::getNombreRectangulo()
{
    return Figura::getnombre();
}
