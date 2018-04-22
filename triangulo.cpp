#include "triangulo.h"

        Triangulo::Triangulo( double base, double altura ){
            m_altura = altura;
            m_base = base;
        }
        Triangulo::~Triangulo(){}

        void Triangulo::setBase( double base ){
            m_base = base;
        }
        void Triangulo::setAltura( double altura ){
            m_altura = altura;
        }
        void Triangulo::setArea(){
            m_area = m_base * m_altura / 2;
        }
        void Triangulo::setPerimetro(){
            m_perimetro = m_base * 3;
        }

        double Triangulo::getBase(){
            return m_base;
        }
        double Triangulo::getAltura(){
            return m_altura;
        }
        double Triangulo::getArea(){
            return m_area;
        }
        double Triangulo::getPerimetro(){
            return m_perimetro;
        }

        void Triangulo::print(){
            cout << "area do triangulo: " << m_area << endl;
            cout << "perímetro do triangulo: " << m_perimetro << endl;

        }