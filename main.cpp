#include <iostream>
#include <string>
#include <stdlib.h> 

#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char **argv){
    char *pEnd;
    if ( argc == 1 ){
        cout << "########## Manual ##########" << endl
        << " Argumentos: " << endl
        << " triangulo base altura" << endl
        << " retangulo base altura" << endl
        << " circulo raio" << endl
        << " piramide areaBase areaLateral altura" << endl
        << " cubo aresta" << endl
        << " paralelepipedo aresta1 aresta2 aresta3" << endl 
        << " esfera raio" << endl;
        return 0;
    }

    string forma = argv[1];
    if( forma == "triangulo" ){
        if( argc == 4){
            int base = strtol(argv[2], &pEnd, 10);
            int altura = strtol(argv[3], &pEnd, 10);
            Triangulo triangulo( base, altura );
            triangulo.setArea();
            triangulo.setPerimetro();
            triangulo.print();            
        }else{
            cout << "Entradas inválidas!" << endl;
        }
    } else if( forma == "retangulo" ){
        if( argc == 4){
            int base = strtol(argv[2], &pEnd, 10);
            int altura = strtol(argv[3], &pEnd, 10);
            Retangulo retangulo( base, altura );
            retangulo.setArea();
            retangulo.setPerimetro();
            retangulo.print();            
        }else{
            cout << "Entradas inválidas!" << endl;
        }   
    } else if( forma == "circulo" ){
        if( argc == 3 ){
            int raio = strtol(argv[2], &pEnd, 10);
            Circulo circulo( raio );
            circulo.setArea();
            circulo.setPerimetro(); 
            circulo.print();            
        }else{
            cout << "Entradas inválidas!" << endl;
        }  
    } else if( forma == "piramide" ){
        if( argc == 5 ){
            int areaBase = strtol(argv[2], &pEnd, 10);
            int areaLateral = strtol(argv[3], &pEnd, 10);
            int altura = strtol(argv[4], &pEnd, 10);
            Piramide piramide( areaBase, areaLateral, altura );
            piramide.setArea();
            piramide.setVolume();
            piramide.print();           
        }else{
            cout << "Entradas inválidas!" << endl;
        }
    } else if( forma == "cubo" ){
        if( argc == 3 ){
            int aresta = strtol(argv[2], &pEnd, 10);     
            Cubo cubo( aresta );
            cubo.setArea();
            cubo.setVolume();
            cubo.print();           
        }else{
            cout << "Entradas inválidas!" << endl;
        } 
    } else if( forma == "paralelepipedo" ){
        if( argc == 5 ){
            int aresta1 = strtol(argv[2], &pEnd, 10);
            int aresta2 = strtol(argv[3], &pEnd, 10);
            int aresta3 = strtol(argv[4], &pEnd, 10);
            Paralelepipedo paralelepipedo(aresta1, aresta2, aresta3 );
            paralelepipedo.setArea();
            paralelepipedo.setVolume();
            paralelepipedo.print();          
        }else{
            cout << "Entradas inválidas!" << endl;
        }
        
    } else if( forma == "esfera" ){
        if( argc == 3 ){
            int raio = strtol(argv[2], &pEnd, 10);
            Esfera esfera( raio );
            esfera.setArea();
            esfera.setVolume();
            esfera.print();           
        }else{
            cout << "Entradas inválidas!" << endl;
        }
    } else{
        cout << "Forma geometrica inválida" << endl;
    }
    return 0;
}