all: main.o classes.o 
	g++ *.o -o $@

classes.o: classes.cpp
	g++ -c $< -o $@ 

main.o: main.cpp classes.o
	g++ -c $< -o $@ 

run: all
	rm *.o
	./all 
	

