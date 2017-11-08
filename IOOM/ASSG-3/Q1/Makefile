compile: student.o main.o
	g++ *.o -o $@

student.o: student.cpp student.h
	g++ -c $< -o $@

main.o: main.cpp student.o
	g++ -c $< -o $@ 

run: compile
	rm *.o
	./compile

