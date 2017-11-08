main: main.o classes.o
	g++ *.o -o $@

main.o: main.cpp
	g++ -c $< -o $@

classes.o: classes.cpp
	g++ -c $< -o $@

run: ./main

clean:
	 rm -f *.o