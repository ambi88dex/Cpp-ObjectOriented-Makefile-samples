compile: main.o figures.o
	g++ main.o figures.o -o $@

main.o: main.cpp figures.o
	g++ -c $< -o $@

figures.o: figures.cpp figures.h
	g++ -c $< -o $@