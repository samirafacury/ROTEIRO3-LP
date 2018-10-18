#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"


class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double, int);
        double definirLimite();
        virtual ~ContaCorrente();
        double getSalario();
        void setSalario(double);
        int getLimite();
        void setLimite(int);

    protected:
        double salario;
        int limite;

};

#endif // CONTACORRENTE_H
