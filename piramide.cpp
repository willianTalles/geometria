#include "piramide.h"

    Piramide::Piramide( double areaBase, double areaLateral, double altura ){
        m_areaBase = areaBase;
        m_areaLateral = areaLateral;
        m_altura = altura;
    }
    Piramide::~Piramide(){}

    void Piramide::setAreaBase( double areaBase ){
        m_areaBase = areaBase;
    }
    void Piramide::setAreaLateral( double areaLateral ){
        m_areaLateral = areaLateral;
    }
    void Piramide::setAltura( double altura ){
        m_altura = altura;
    }
    void Piramide::setArea(){
        m_area = m_areaBase + m_areaLateral;
    }
    void Piramide::setVolume(){
        m_volume = ( 1.0f/3 ) * m_areaBase * m_altura;
    }

    double Piramide::getAreaBase(){
        return m_areaBase;
    }
    double Piramide::getAreaLateral(){
        return m_areaLateral;
    }
    double Piramide::getAltura(){
        return m_altura;
    }
    double Piramide::getArea(){
        return m_area;
    }
    double Piramide::getVolume(){
        return m_volume;
    }

    void Piramide::print(){
        cout << "área da piramide: " << m_area << endl;
        cout << "Volume da piramide: "<< m_volume << endl;
    }