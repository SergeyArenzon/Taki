#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
using namespace std;
class Player {
private:

	
public:
	vector <Card> cards;
	string name;
	int num_of_cards;
	bool play(Card&);
	Player();
	Player(string name,int cardsNum);
};
#endif



