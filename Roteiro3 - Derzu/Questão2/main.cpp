#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{

    int i;

    FiguraGeometrica *figG[3];

    figG[0] = new Circulo("Circulo", 1);
    figG[1] = new Triangulo("Triangulo", 5, 5);
    figG[2] = new Retangulo("Retangulo", 5, 5);

    for(i = 0; i < 3; i++){
        cout << figG[i]->getNome() << endl;
        cout << figG[i]->CalcularArea() << endl << endl;
    }

    return 0;
}
