#ifndef ICONTA_H
#define ICONTA_H


class Iconta
{
    public:
        Iconta();
        virtual void sacar(double) = 0;
        virtual void depositar(double) = 0;

    protected:

    private:
};

#endif // ICONTA_H
