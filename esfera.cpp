#include "esfera.h"

        Esfera::Esfera( double raio ){
            m_raio = raio;
        }
        Esfera::~Esfera(){}

        void Esfera::setRaio( double raio ){
            m_raio = raio;
        }

        void Esfera::setArea(){
            m_area = 4 * 3.1415 * m_raio * m_raio;
        }
        void Esfera::setVolume(){
            m_volume = ( 4.0f/3 ) * 3.1415 * m_raio * m_raio * m_raio;
        }

        double Esfera::getRaio(){
            return m_raio;
        }

        double Esfera::getArea(){
            return m_area;
        }
        double Esfera::getVolume(){
            return m_volume;
        }

        void Esfera::print(){
            cout << "area do Esfera: " << m_area << endl;
            cout << "perímetro do Esfera: " << m_volume << endl;

        }