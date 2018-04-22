#Makefile para "geometria" aplicação C++ 
#Desenvolvido por Willian Marcolino em 22/04/2018

PROG = geometria
CC = g++
CPPFLAGS = -g -O0 -Wall -pedantic -ansi -std=c++11
OBJS = main.o circulo.o cubo.o esfera.o paralelepipedo.o piramide.o retangulo.o triangulo.o
#circulo.o cubo.o esfera.o paralelepipedo.o main.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

circulo.o: circulo.h
	$(CC) $(CPPFLAGS) -c circulo.cpp

cubo.o: cubo.h
	$(CC) $(CPPFLAGS) -c cubo.cpp

esfera.o: esfera.h
	$(CC) $(CPPFLAGS) -c esfera.cpp

paralelepipedo.o: paralelepipedo.h
	$(CC) $(CPPFLAGS) -c paralelepipedo.cpp

piramide.o: piramide.h
	$(CC) $(CPPFLAGS) -c piramide.cpp

retangulo.o: retangulo.h
	$(CC) $(CPPFLAGS) -c retangulo.cpp

triangulo.o: triangulo.h
	$(CC) $(CPPFLAGS) -c triangulo.cpp
	
main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

clean:
	rm -f core $(PROG) $(OBJS)
