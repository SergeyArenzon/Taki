output: main.o Game.o Player.o Card.o
	g++ main.o Game.o Player.o Card.o -o output

main.o: main.cpp
	g++ -c main.cpp 

Game.o: Game.cpp Game.h
	g++ -c Game.cpp 

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

Card.o: Card.cpp Card.h
	g++ -c Card.cpp

clean:
	rm *.o output


