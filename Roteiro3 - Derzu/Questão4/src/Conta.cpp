#include "Conta.h"

Conta::Conta(){
    nomeCliente = "VANESSA";
    numero = 123;
    saldo = 2300;
}
Conta::Conta(string nom, int num, double sal){
    nomeCliente = nom;
    numero = num;
    saldo = sal;
}
Conta::~Conta(){

}
void Conta::setNomeCliente(string nom){
    nomeCliente = nom;
}
string Conta::getNomeCliente(){
    return nomeCliente;
}
void Conta::setNumero(int num){
    numero = num;
}
int Conta::getNumero(){
    return numero;
}
void Conta::setSaldo(double sal){
    saldo = sal;
}
double Conta::getSaldo(){
    return saldo;
}
void Conta::sacar(double valor){
    if(valor > saldo){
        cout << "Saldo indisponivel" << endl;
    }else{
        saldo = saldo - valor;
    }
}
void Conta::depositar(double valor){
    saldo = saldo + valor;
}
