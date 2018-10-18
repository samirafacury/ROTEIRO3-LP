#ifndef GATO_H
#define GATO_H
#include "Animal.h"


class Gato: public Animal
{
    public:
        Gato();
        virtual ~Gato();
        virtual string Ruido();


    protected:

    private:
};

#endif // GATO_H
