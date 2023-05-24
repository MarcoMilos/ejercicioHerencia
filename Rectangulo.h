// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Rectangulo_h
#define Rectangulo_h

#include <list>
#include "Figura.h"
#include "Punto.h"

class Rectangulo : public Figura
{
    public:
        Rectangulo();
        Rectangulo(std::list<Punto>& puntos, std::string& nombreRectangulo);
        Rectangulo(Rectangulo& otroRectangulo);
        ~Rectangulo();
        double calculaPerimetro();
        double calculaArea();
        // Método de impresión
        void printRectangulo();
        // Método Setters
        void setListaPuntos(std::list<Punto>& puntos);
        void setNombreRectangulo(std::string& nombreRectangulo);
        // Método Getters
        std::list<Punto> getListaPuntos();
        std::string getNombreRectangulo();
};

#endif