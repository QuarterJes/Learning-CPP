main: account.o main.o
	g++ account.o main.o -o main 

main.o: main.cpp
	g++ -c main.cpp

account.o: Account.cpp
	g++ -c Account.cpp -o account.o

clean:
	rm *.o main
