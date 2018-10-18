#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        void setNome(string);
        string getNome();
        virtual double CalcularArea() = 0;
    protected:
        string nome;
};

#endif // FIGURAGEOMETRICA_H
