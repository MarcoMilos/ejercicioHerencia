// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// 22-05-2023
// Herencia y Otros Conceptos POO

#ifndef Punto_h
#define Punto_h

class Punto
{
    // Declaramos los atributos de tipo double de manera privada
    double x; 
    double y;
    public:
        // Declaramos los constructores
        Punto(); 
        Punto(double, double);
        ~Punto();
        // Metodo Getters
        double getx();
        double gety();
        // Metodo setters
        void setx(double);
        void sety(double);
        // Metodo de impresion
        void printPunto();
};

#endif