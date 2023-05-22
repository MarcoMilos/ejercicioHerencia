// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include "Punto.h"

// Constructores por omisión y copia
Punto::Punto()
{
    x = 0;
    y = 0;
}
Punto::Punto(double x1, double y1)
{
    x = x1;
    y = y1;
}

// Destructor
Punto::~Punto(){}

// Getters
double Punto::getx()
{
    return x;
}
double Punto::gety()
{
    return y;
}

// Setters
void Punto::setx(double x1)
{
    x = x1;
}
void Punto::sety(double y1)
{
    y = y1;
}

// Metodo de impresion
void Punto::printPunto()
{
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}