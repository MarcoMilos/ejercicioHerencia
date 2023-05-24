// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Circulo_h
#define Circulo_h

#include <list>
#include "Figura.h"
#include "Punto.h"

class Circulo : public Figura
{
    double radio;
    public:
        Circulo();
        Circulo(Punto& centro, double radio, std::string& nombreCirculo);
        Circulo(Circulo& otroCirculo);
        ~Circulo();
        double calculaPerimetro();
        double calculaArea();
        // Método de impresión
        void printCirculo();
        // Método Setters
        void setCentro(Punto& centro);
        void setRadio(double radio);
        void setNombreCirculo(std::string& nombreCirculo);
        // Método Getters
        Punto getCentro();
        double getRadio();
        std::string getNombreCirculo();
};

#endif