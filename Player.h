/* Sergey Arenzon 321211286 */
#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
#include <vector>
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



