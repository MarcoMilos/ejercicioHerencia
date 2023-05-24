// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#include <iostream>
#include "Punto.cpp"
#include "Figura.cpp"
#include "Triangulo.cpp"
// #include "Circulo.cpp"
// #include "Rectangulo.cpp"

int main()
{
    Punto p1;
    p1.printPunto();
    Figura f1;
    f1.printFigura();
    Triangulo t1;
    t1.printTriangulo();
    // Circulo c1;
    // c1.printCirculo();
    // Rectangulo r1;
    // r1.printRectangulo();
    return 0;
}