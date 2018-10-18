#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        virtual string Ruido();

    protected:

    private:
};

#endif // ANIMAL_H
