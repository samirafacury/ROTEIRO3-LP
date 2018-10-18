#include "Conta.h"

Conta::Conta(){

}
Conta::Conta(string n,double salM,double s,double l,int nConta){
    nomeCliente = n;
    salarioMensal = salM;
    saldo = s;
    limite = l;
    numeroConta = nConta;
}
void Conta::setNomeCliente(string n){
    nomeCliente = n;
}
void Conta::setSalarioMensal(double salM){
    salarioMensal = salM;
}
void Conta::setSaldo(double s){
    saldo = s;
}
void Conta::setLimite(double l){
    limite = l;
}
void Conta::setNumeroConta(int n){
    numeroConta = n;
}
string Conta::getNomeCliente(){
    return nomeCliente;
}
double Conta::getSalarioMensal(){
    return salarioMensal;
}
double Conta::getSaldo(){
    return saldo;
}
double Conta::getLimite(){
    return limite;
}
int Conta::getNumeroConta(){
    return numeroConta;
}
void Conta::definirLimite(){
    limite = 2*salarioMensal;
}
void Conta::sacar(double valor){
    saldo = saldo - valor;
}
void Conta::depositar(double valor){
    saldo = saldo + valor;
}
