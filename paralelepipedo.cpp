#include "paralelepipedo.h"

    Paralelepipedo::Paralelepipedo( double aresta1, double aresta2, double aresta3 ){
        m_aresta[0] = aresta1;
        m_aresta[1] = aresta2;
        m_aresta[2] = aresta3;
    }
    Paralelepipedo::~Paralelepipedo(){}

    void Paralelepipedo::setArestas(  double aresta1, double aresta2, double aresta3 ){
        m_aresta[0] = aresta1;
        m_aresta[1] = aresta2;
        m_aresta[2] = aresta3;
    }
    void Paralelepipedo::setArea(){
        m_area = 2 * ( m_aresta[0] * m_aresta[1] + m_aresta[0] * m_aresta[2] + m_aresta[1] * m_aresta[2] ) ;
    }
    void Paralelepipedo::setVolume(){
        m_volume = m_aresta[0] * m_aresta[1] * m_aresta[2];
    }

    double Paralelepipedo::getArea(){
        return m_area;
    }
    double Paralelepipedo::getVolume(){
        return m_volume;
    }

    void Paralelepipedo::print(){
        cout << "área da Paralelepipedo: " << m_area << endl;
        cout << "Volume da Paralelepipedo: "<< m_volume << endl;
    }