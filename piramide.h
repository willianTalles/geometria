#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <iostream>

using std::cout;
using std::endl;

class Piramide{
    private:
        double m_areaBase;
        double m_areaLateral;
        double m_altura;
        double m_area;
        double m_volume;
        
    public:
        Piramide( double areaBase, double areaLateral, double altura );
        ~Piramide();

        void setAreaBase( double areaBase );
        void setAreaLateral( double areaLateral );
        void setAltura( double altura );
        void setArea();
        void setVolume();

        double getAreaBase();
        double getAreaLateral();
        double getAltura();
        double getArea();
        double getVolume();

        void print();
};
#endif