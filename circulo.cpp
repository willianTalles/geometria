#include "circulo.h"

        Circulo::Circulo( double raio ){
            m_raio = raio;
        }
        Circulo::~Circulo(){}

        void Circulo::setRaio( double raio ){
            m_raio = raio;
        }

        void Circulo::setArea(){
            m_area = 3.1415 * m_raio * m_raio;
        }
        void Circulo::setPerimetro(){
            m_perimetro = 2 * 3.1415 * m_raio;
        }

        double Circulo::getRaio(){
            return m_raio;
        }

        double Circulo::getArea(){
            return m_area;
        }
        double Circulo::getPerimetro(){
            return m_perimetro;
        }

        void Circulo::print(){
            cout << "area do Circulo: " << m_area << endl;
            cout << "perímetro do Circulo: " << m_perimetro << endl;

        }