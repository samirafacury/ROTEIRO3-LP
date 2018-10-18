#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta();
        Conta(string, int, double);
        void setNomeCliente(string);
        string getNomeCliente();
        void setNumero(int);
        int getNumero();
        void setSaldo(double);
        double getSaldo();
        void sacar(double);
        void depositar(double);
        virtual ~Conta();

    protected:
        string nomeCliente;
        int numero;
        double saldo;
};

#endif // CONTA_H
