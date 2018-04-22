#include "retangulo.h"

        Retangulo::Retangulo( double base, double altura ){
            m_altura = altura;
            m_base = base;
        }
        Retangulo::~Retangulo(){}

        void Retangulo::setBase( double base ){
            m_base = base;
        }
        void Retangulo::setAltura( double altura ){
            m_altura = altura;
        }
        void Retangulo::setArea(){
            m_area = m_base * m_altura;
        }
        void Retangulo::setPerimetro(){
            m_perimetro = 2 * ( m_base + m_altura );
        }

        double Retangulo::getBase(){
            return m_base;
        }
        double Retangulo::getAltura(){
            return m_altura;
        }
        double Retangulo::getArea(){
            return m_area;
        }
        double Retangulo::getPerimetro(){
            return m_perimetro;
        }

        void Retangulo::print(){
            cout << "area do Retangulo: " << m_area << endl;
            cout << "perímetro do Retangulo: " << m_perimetro << endl;

        }