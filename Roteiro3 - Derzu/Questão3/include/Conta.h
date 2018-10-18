#ifndef CONTA_H
#define CONTA_H
#include "Iconta.h"
#include <string>

using namespace std;

class Conta : public Iconta
{
    public:
        Conta();
        Conta(string,double,double,double,int );
        void setNomeCliente(string );
        void setSalarioMensal(double);
        void setSaldo(double);
        void setLimite(double);
        void setNumeroConta(int);
        string getNomeCliente();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();
        int getNumeroConta();
        virtual void sacar(double);
        virtual void depositar(double);
        void definirLimite();

    protected:
        string nomeCliente;
        int numeroConta;
        double salarioMensal;
        double limite;
        double saldo;

};

#endif // CONTA_H
