#include "Retangulo.h"

Retangulo::Retangulo(string n, double b, double h){
    nome = n;
    base = b;
    altura = h;
}

double Retangulo::CalcularArea(){
    return (base*altura);
}
