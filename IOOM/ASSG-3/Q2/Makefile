compile: main.o
	g++ *.o -o $@

main.o: main.cpp count.o
	g++ -c $< -o $@

count.o: count.cpp count.h
	g++ -c $< -o $@

run: compile
	rm *.o 
	./compile