#include "Poupanca.h"

Poupanca::Poupanca():
Conta("LARISSA", 323, 454){
    variacao = 30;
    taxaRendimento = 0.5;
}
Poupanca::Poupanca(int var, double taxa){
    variacao = var;
    taxaRendimento = taxa;
}
Poupanca::~Poupanca(){

}
double Poupanca::render(){
    if(variacao == 30){
        saldo = saldo + (saldo * taxaRendimento);
    }
    if(variacao == 1){
        saldo = saldo + (saldo * 0.5);
    }
    return saldo;
}
int Poupanca::getVariacao(){
    return variacao;
}
void Poupanca::setVariacao(int var){
    variacao = var;
}
double Poupanca::getTaxaRendimento(){
   return taxaRendimento;
}
void Poupanca::setTaxaRendimento(double taxa){
    taxaRendimento = taxa;
}
