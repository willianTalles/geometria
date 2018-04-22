#ifndef ESFERA_H
#define ESFERA_H

#include <iostream>

using std::cout;
using std::endl;

class Esfera{
    private:
        double m_raio;
        double m_area;
        double m_volume;
    public:
        Esfera( double raio );
        ~Esfera();

        void setRaio( double raio );
        void setArea();
        void setVolume();

        double getRaio();
        double getArea();
        double getVolume();

        void print();
};
#endif