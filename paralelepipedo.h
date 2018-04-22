#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

#include <iostream>

using std::cout;
using std::endl;

class Paralelepipedo{
    private:
        double m_aresta[3];
        double m_area;
        double m_volume;
        
    public:
        Paralelepipedo( double aresta1, double aresta2, double aresta3 );
        ~Paralelepipedo();

        void setArestas( double aresta1, double aresta2, double aresta3 );
        void setArea();
        void setVolume();

        double getAltura();
        double getArea();
        double getVolume();

        void print();
};
#endif