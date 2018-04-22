#include "cubo.h"

    Cubo::Cubo( double aresta ){
        m_aresta = aresta;
    }
    Cubo::~Cubo(){}

    void Cubo::setAresta( double aresta){
        m_aresta = aresta;
    }
    void Cubo::setArea(){
        m_area = 6 * m_aresta * m_aresta ;
    }
    void Cubo::setVolume(){
        m_volume = m_aresta * m_aresta * m_aresta;
    }

    double Cubo::getAresta(){
        return m_aresta;
    }
    double Cubo::getArea(){
        return m_area;
    }
    double Cubo::getVolume(){
        return m_volume;
    }

    void Cubo::print(){
        cout << "área da Cubo: " << m_area << endl;
        cout << "Volume da Cubo: "<< m_volume << endl;
    }