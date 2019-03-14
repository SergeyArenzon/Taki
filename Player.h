#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
using namespace std;
class Player {
private:
	
	//vector of cards
	//private members
	vector <Card> cards;
public:
	string name;
	int num_of_cards;
	//public members
	bool play(Card&);
	Player();
	Player(string name,int cardsNum);
};
#endif



