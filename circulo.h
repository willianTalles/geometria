#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>

using std::cout;
using std::endl;

class Circulo{
    private:
        double m_raio;
        double m_area;
        double m_perimetro;
    public:
        Circulo( double raio );
        ~Circulo();

        void setRaio( double raio );
        void setArea();
        void setPerimetro();

        double getRaio();
        double getArea();
        double getPerimetro();

        void print();
};
#endif