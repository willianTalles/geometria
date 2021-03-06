#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

using std::cout;
using std::endl;

class Triangulo{
    private:
        double m_base;
        double m_altura;
        double m_area;
        double m_perimetro;
    public:
        Triangulo( double base, double altura );
        ~Triangulo();

        void setBase( double base );
        void setAltura( double altura );
        void setArea();
        void setPerimetro();

        double getBase();
        double getAltura();
        double getArea();
        double getPerimetro();

        void print();
};
#endif