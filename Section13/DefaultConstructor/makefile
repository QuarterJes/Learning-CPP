## FLAGS
CC = g++
CXXFLAGS = -g -Wall -std=c++17

main: main.o
	$(CC)  main.o $(CXXFLAGS) -o main

main.o: main.cpp
	$(CC) -c main.cpp $(CXXFLAGS)

clean:
	rm *.o main
