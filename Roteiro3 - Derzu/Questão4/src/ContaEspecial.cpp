#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
: ContaCorrente(222, 1500){

}
ContaEspecial::~ContaEspecial(){

}
double ContaEspecial::definirLimite(){
    limite = 4 * salario;
    return limite;
}
