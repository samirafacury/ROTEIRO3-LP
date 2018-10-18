#include "Circulo.h"

Circulo::Circulo(string n, double r){
    nome = n;
    raio = r;
}

double Circulo::CalcularArea(){
    return raio*raio*3.14;
}
