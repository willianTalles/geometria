#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

using std::cout;
using std::endl;

class Retangulo{
    private:
        double m_base;
        double m_altura;
        double m_area;
        double m_perimetro;
    public:
        Retangulo( double base, double altura );
        ~Retangulo();

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