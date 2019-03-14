#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
using namespace std;
class Player {
private:
	
	//vector of cards
	//private members

public:
string name;
	int num_of_cards;
	//public members
	bool play(Card&);
	Player();
};
#endif



