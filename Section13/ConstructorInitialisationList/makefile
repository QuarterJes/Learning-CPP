## FLAGS
CC = g++
CXXFLAGS = -g -Wall -std=c++17

main: main.o player.o
	$(CC) main.o player.o $(CXXFLAGS) -o main

main.o: main.cpp
	$(CC) -c main.cpp $(CXXFLAGS)

player.o: Player.cpp Player.h
	g++ -c Player.cpp $(CXXFLAGS) -o player.o

clean:
	rm *.o main
