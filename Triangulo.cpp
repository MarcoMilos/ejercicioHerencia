// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include <cmath>
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
    Punto& punto1 = *it;
    ++it;
    Punto& punto2 = *it;
    ++it;
    Punto& punto3 = *it;

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

    // Calculamos el área haciendo uso de la fórmula de Herón
    auto it = puntos.begin();
    Punto& punto1 = *it;
    ++it;
    Punto& punto2 = *it;
    ++it;
    Punto& punto3 = *it;

    double lado1 = std::sqrt(pow(punto2.getx() - punto1.getx(), 2) + pow(punto2.gety() - punto1.gety(), 2));
    double lado2 = std::sqrt(pow(punto3.getx() - punto2.getx(), 2) + pow(punto3.gety() - punto2.gety(), 2));
    double lado3 = std::sqrt(pow(punto1.getx() - punto3.getx(), 2) + pow(punto1.gety() - punto3.gety(), 2));

    double semiperimetro = (lado1 + lado2 + lado3) / 2;
    return std::sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
}

void Triangulo::printTriangulo()
{
    Figura::printFigura();
    std::cout << "Tipo de Figura: Triángulo" << std::endl;
    std::cout << "Perímetro: " << calcularPerimetro() << std::endl;
    std::cout << "Área: " << calcularArea() << std::endl;
}

void Triangulo::setListaPuntos(std::list<Punto>& puntos)
{
    setListaPuntos(puntos);
}

void Triangulo::setNombreTriangulo(std::string& nombreTriangulo)
{
    setNombreTriangulo(nombreTriangulo);
}

std::list<Punto> Triangulo::getListaPuntos()
{
    return getListaPuntos();
}

std::string Triangulo::getNombreTriangulo()
{
    return getNombreTriangulo();
}
