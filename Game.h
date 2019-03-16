#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Card.h"
class Game {
	
private:
	
	int playersNum,cardsNum;
public:
	void changeSide(bool x,int &i,string state);
	Game();
	void start();
};
#endif




