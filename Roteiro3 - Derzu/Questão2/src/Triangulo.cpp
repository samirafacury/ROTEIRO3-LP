#include "Triangulo.h"

Triangulo::Triangulo(string n, double b, double h){
    nome = n;
    base = b;
    altura = h;
}

double Triangulo::CalcularArea(){
    return (base*altura)/2;
}
