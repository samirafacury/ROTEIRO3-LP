#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"
#include <string>

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo(string, double, double);
        virtual double CalcularArea();
    private:
        double base;
        double altura;
};

#endif // RETANGULO_H
