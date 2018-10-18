#include <iostream>
#include "Animal.h"
#include "Gato.h"

using namespace std;

int main()
{
    Animal animal = Animal();
    Animal *gato = new Gato();

    cout << "\nExemplo em codigo: \n\n" << endl;

    cout << animal.Ruido()  << endl;

    cout << gato->Ruido() << endl;
    return 0;
}
