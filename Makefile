all: practica0


BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

practica0: BrazoRobotico.o main.o
	g++ -o practica0 BrazoRobotico.o main.o

clean:
	rm -f *.o practica0

test: all
	./practica0


