#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include <string>

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo(string, double, double);
        virtual double CalcularArea();
    private:
        double base;
        double altura;
};

#endif // TRIANGULO_H
