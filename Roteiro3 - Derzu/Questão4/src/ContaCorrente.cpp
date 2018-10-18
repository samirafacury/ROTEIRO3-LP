#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
:Conta("SERGIO", 456, 789){
    salario = 3000;
    limite = 0;
}
ContaCorrente::ContaCorrente(double salar, int lim){
    salario = salar;
    limite = lim;
}
ContaCorrente::~ContaCorrente(){

}
void ContaCorrente::setSalario(double salar){
    salario = salar;
}
int ContaCorrente::getLimite(){
    return limite;
}
void ContaCorrente::setLimite(int lim){
    limite = lim;
}
double ContaCorrente::definirLimite(){
    limite = 2 * salario;
    return limite;
}
