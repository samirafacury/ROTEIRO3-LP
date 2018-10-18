#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string n,double salM,double s,double l,int nConta)
: Conta(n,salM,s,l,nConta)
{

}
void ContaEspecial::definirLimite(){
    limite = 3*salarioMensal;
}
