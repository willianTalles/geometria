#ifndef CUBO_H
#define CUBO_H

#include <iostream>

using std::cout;
using std::endl;

class Cubo{
    private:
        double m_aresta;
        double m_area;
        double m_volume;
        
    public:
        Cubo( double aresta );
        ~Cubo();

        void setAresta( double aresta );
        void setArea();
        void setVolume();

        double getAresta();
        double getArea();
        double getVolume();

        void print();
};
#endif