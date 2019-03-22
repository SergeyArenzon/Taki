output: main.o Game.o Player.o Card.o
	g++ -std=c++0x main.o Game.o Player.o Card.o -o output

main.o: main.cpp
	g++ -std=c++0x -c main.cpp 

Game.o: Game.cpp Game.h
	g++ -std=c++0x -c Game.cpp 

Player.o: Player.cpp Player.h
	g++ -std=c++0x -c Player.cpp

Card.o: Card.cpp Card.h
	g++ -std=c++0x -c Card.cpp

clean:
	rm *.o output
