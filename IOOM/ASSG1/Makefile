compile: assg1.o classes.o 
	g++ assg1.o classes.o -o $@
	rm -f *.o

assg1.o: assg1.cpp classes.o
	g++ -c $< -o $@	

classes.o: classes.cpp
	g++ -c $< -o $@

run: compile
	./compile

clean: 
	rm -f *.o