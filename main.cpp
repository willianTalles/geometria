#include <iostream>
#include <string>

#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

using std::string;

int main(int argc, char **argv){

    string forma = argv[1];

    if( forma == "triangulo" ){
        Triangulo tri( 5, 4 );
        tri.setArea();
        tri.setPerimetro();
        tri.print();
    } else if( forma == "retangulo" ){
        Retangulo ret( 2, 2 );
        ret.setArea();
        ret.setPerimetro();
        ret.print();    
    } else if( forma == "circulo" ){
        Circulo cir( 7 );
        cir.setArea();
        cir.setPerimetro(); 
        cir.print(); 
    } else if( forma == "piramide" ){
        Piramide pri( 4, 7, 10 );
        pri.setArea();
        pri.setVolume();
        pri.print();
    } else if( forma == "cubo" ){
        Cubo cub( 4 );
        cub.setArea();
        cub.setVolume();
        cub.print();
    } else if( forma == "paralelepipedo" ){
        Paralelepipedo par( 4, 4, 4 );
        par.setArea();
        par.setVolume();
        par.print();
    } else if( forma == "esfera" ){
        Esfera esf( 7 );
        esf.setArea();
        esf.setVolume();
        esf.print();
    }
    return 0;
}