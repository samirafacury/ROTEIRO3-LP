#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    ContaCorrente c1 = ContaCorrente();
    Poupanca p1 = Poupanca();
    ContaEspecial e1 = ContaEspecial();


     cout << "Conta Corrente:\n" << c1.getNomeCliente() << endl << c1.getNumero() << endl << c1.getSaldo() << endl
         << c1.definirLimite() << endl << endl;

    cout << "Poupanca:\n" << p1.getNomeCliente() << endl << p1.getNumero() << endl << p1.getSaldo() << endl
         << p1.getVariacao() << endl << p1.getTaxaRendimento() << endl << endl;

    cout << "Conta Especial:\n" << e1.getNomeCliente() << endl << e1.getNumero() << endl << e1.getSaldo() << endl
         << e1.definirLimite() << endl << endl;


    return 0;
}
