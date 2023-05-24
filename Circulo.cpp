// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include <cmath>
#include <list>
#include "Circulo.h"

Circulo::Circulo() : Figura()
{
    setnumPuntos(1);
    radio = 0.0;
}

Circulo::Circulo(Punto& centro, double radio, std::string& nombreCirculo) : Figura(nombreCirculo)
{
    setCentro(centro);
    setRadio(radio);
    setnumPuntos(1);
}

// Hacemos el constructor de copia
Circulo::Circulo(Circulo& otroCirculo) : Figura(otroCirculo) 
{
    radio = otroCirculo.radio;
}

// Establecemos el destructor
Circulo::~Circulo() {}

double Circulo::calculaPerimetro()
{
    return 2.0 * M_PI * radio;
}

double Circulo::calculaArea()
{
    return M_PI * radio * radio;
}

void Circulo::printCirculo()
{
    Figura::printFigura();
    std::cout << "Nombre del círculo: " << getnombre() << std::endl;
    Punto& centro = getCentro();
    std::cout << "Centro: (" << centro.getx() << ", " << centro.gety() << ")" << std::endl;
    std::cout << "Radio: " << radio << std::endl;
    std::cout << "Perímetro: " << calculaPerimetro() << std::endl;
    std::cout << "Área: " << calculaArea() << std::endl;
}

void Circulo::setCentro(Punto& centro)
{
    std::list<Punto> puntos;
    puntos.push_back(centro);
    setListaPuntos(puntos);
}

void Circulo::setRadio(double nuevoRadio)
{
    // Verificamos que el radio sea válido (mayor que 0)
    if (nuevoRadio <= 0)
    {
        std::cerr << "Error: El radio del círculo debe ser mayor que 0." << std::endl;
        return;
    }

    radio = nuevoRadio;
}

Punto Circulo::getCentro()
{
    std::list<Punto> puntos = getpuntos();
    auto it = puntos.begin();
    return *it;
}

double Circulo::getRadio()
{
    return radio;
}