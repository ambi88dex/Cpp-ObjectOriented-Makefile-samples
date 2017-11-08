run: main.o movable.o
	g++ main.o movable.o -o $@

main.o: main.cpp movable.o
	g++ -c $< -o $@

movable.o: movable.cpp movable.h
	g++ -c $< -o $@