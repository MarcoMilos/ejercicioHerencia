// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include <cmath>
#include <list>
#include "Triangulo.h"

Triangulo::Triangulo() : Figura()
{
    setnumPuntos(3);
}

Triangulo::Triangulo(std::list<Punto>& puntos, std::string& nombreTriangulo) : Figura(nombreTriangulo, puntos, 3)
{
    // Verificamos si la lista de puntos en verdad tiene exactamente 3 puntos
    if (puntos.size() != 3)
    {
        std::cerr << "Error: El número de puntos proporcionados para el triángulo no es válido" << std::endl;
    }
}

// Hacemos la el constructor de copia
Triangulo::Triangulo(Triangulo& otroTriangulo) : Figura(otroTriangulo) {}

// Establecemos el destructor
Triangulo::~Triangulo() {}

double Triangulo::calcularPerimetro()
{
    std::list<Punto> puntos = getListaPuntos();
    if (puntos.size() != 3)
    {
        std::cerr << "Error: El número de puntos del triángulo no es válido." << std::endl;
        return 0.0;
    }
  
    // Calculamos la distancia entre los puntos proporcionados
    auto it = puntos.begin();
    auto it2 = it;
    ++it2;
    auto it3 = it2;
    ++it3;

    Punto& punto1 = *it;
    Punto& punto2 = *it2;
    Punto& punto3 = *it3;

    double lado1 = std::sqrt(pow(punto2.getx() - punto1.getx(), 2) + pow(punto2.gety() - punto1.gety(), 2));
    double lado2 = std::sqrt(pow(punto3.getx() - punto2.getx(), 2) + pow(punto3.gety() - punto2.gety(), 2));
    double lado3 = std::sqrt(pow(punto1.getx() - punto3.getx(), 2) + pow(punto1.gety() - punto3.gety(), 2));

    return lado1 + lado2 + lado3;
}

double Triangulo::calcularArea()
{
    std::list<Punto> puntos = getListaPuntos();
    if (puntos.size() != 3)
    {
        std::cerr << "Error: El número de puntos del triángulo no es válido." << std::endl;
        return 0.0;
    }

    // // // Calculamos el área haciendo uso de la fórmula de Herón
    auto it = puntos.begin();
    auto it2 = it;
    ++it2;
    auto it3 = it2;
    ++it3;

    Punto& punto1 = *it;
    Punto& punto2 = *it2;
    Punto& punto3 = *it3;

    double lado1 = std::sqrt(pow(punto2.getx() - punto1.getx(), 2) + pow(punto2.gety() - punto1.gety(), 2));
    double lado2 = std::sqrt(pow(punto3.getx() - punto2.getx(), 2) + pow(punto3.gety() - punto2.gety(), 2));
    double lado3 = std::sqrt(pow(punto1.getx() - punto3.getx(), 2) + pow(punto1.gety() - punto3.gety(), 2));

    double semiperimetro = (lado1 + lado2 + lado3) / 2;
    return std::sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
}

void Triangulo::printTriangulo()
{
    Figura::printFigura();
    std::cout << "Nombre del Triangulo: " << getnombre() << std::endl;
    std::cout << "Perímetro: " << calcularPerimetro() << std::endl;
    std::cout << "Área: " << calcularArea() << std::endl;
}

void Triangulo::setListaPuntos(std::list<Punto>& puntos)
{
    Figura::setPuntos(puntos);
}

void Triangulo::setNombreTriangulo(std::string& nombreTriangulo)
{
    Figura::setNombre(nombreTriangulo);
}

std::list<Punto> Triangulo::getListaPuntos()
{
    return Figura::getpuntos();
}

std::string Triangulo::getNombreTriangulo()
{
    return Figura::getnombre();
}
