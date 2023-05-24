// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Triangulo_h
#define Triangulo_h

#include "Figura.h"

class Triangulo : public Figura
{
    public:
        Triangulo();
        Triangulo(std::list<Punto>& puntos, std::string& nombreTriangulo);
        Triangulo(Triangulo& otroTriangulo);
        ~Triangulo();
        double calcularPerimetro();
        double calcularArea();
        // Metodo de impresion
        void printTriangulo();
        // Metodo Setters
        void setListaPuntos(std::list<Punto>& puntos);
        void setNombreTriangulo(std::string& nombreTriangulo);
        // Metodo Getters
        std::list<Punto> getListaPuntos();
        std::string getNombreTriangulo();
};

#endif