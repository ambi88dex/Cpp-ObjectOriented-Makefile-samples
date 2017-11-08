compile: main.o Graph.o Edge.o Vertices.o
	g++ -std=c++1y -o $@ *.o 

main.o: main.cpp
	g++ -std=c++1y -c $< -o $@

Graph.o: Graph.cpp Edge.cpp Vertices.cpp
	g++ -std=c++1y -c $<

Vertices.o: Vertices.cpp
	g++ -std=c++1y -c $< 

Edge.o: Edge.cpp
	g++ -std=c++1y -c $< 

run: compile 
	./compile < inp

clean: 
	rm *.o compile 