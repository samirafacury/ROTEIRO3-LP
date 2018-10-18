#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include <string>

class Circulo:public FiguraGeometrica
{
    public:
        Circulo(string, double);
        virtual double CalcularArea();
    private:
        double raio;
};

#endif // CIRCULO_H
