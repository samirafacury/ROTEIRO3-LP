#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{

    Conta conta1 = Conta("Samira", 6000, 10000, 1, 12345);
    ContaEspecial conta2 = ContaEspecial("Itapoan", 4000, 14000, 1, 54321);


    cout << "\nConta:\n" << endl << conta1.getNomeCliente() << endl << conta1.getSalarioMensal() << endl << conta1.getSaldo() << endl
         << conta1.getLimite() << endl << conta1.getNumeroConta() << endl << endl;

    conta1.sacar(5000);

    cout << "Saldo da conta apos o saque: " << conta1.getSaldo() << endl;

    conta1.depositar(3500);

    cout << "Saldo da Conta apos deposito: " << conta1.getSaldo() << endl;

    cout << "___________________________________" << endl << endl;

      //CONTA ESPECIAL

    cout << "Conta Especial:\n" << endl << conta2.getNomeCliente() << endl << conta2.getSalarioMensal() << endl << conta2.getSaldo() << endl
    << conta2.getLimite() << endl << conta2.getNumeroConta() << endl << endl;

    conta2.sacar(7000);

    cout << "Saldo da Conta Especial apos o saque: " << conta2.getSaldo() << endl;

    conta2.depositar(150);

    cout << "Saldo da Conta Especial apos o deposito: " << conta2.getSaldo() << endl;

    cout << "___________________________________" << endl << endl;


    return 0;
}

