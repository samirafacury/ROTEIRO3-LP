#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial(string, double, double, double, int);
        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
